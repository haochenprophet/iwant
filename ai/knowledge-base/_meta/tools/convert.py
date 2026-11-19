# -*- coding: utf-8 -*-
"""把缓存的文章 HTML 转换成结构化的 Markdown 与元数据（build.json）。

只负责「HTML → 干净的 Markdown 正文 + 元信息」，不落盘到知识库目录，
落盘由 finalize.py 完成。
"""
import json
import os
import re

from lxml import html as LH

import kbconfig as C

DROP_TAGS = {"script", "style", "noscript", "iframe", "svg", "button", "form", "input"}


def norm(s):
    s = s.replace("\u200b", "").replace("\ufeff", "")
    return s.replace("\xa0", " ")


def cell_text(el):
    """表格单元格文本，保留 <br> 与行内 code。"""
    parts = []

    def walk(node):
        if node.tag in DROP_TAGS:
            return
        if node.tag == "br":
            parts.append("<br>")
        elif node.tag == "code":
            parts.append("`" + (node.text_content() or "").strip() + "`")
            if node.tail:
                parts.append(node.tail)
            return
        else:
            if node.text:
                parts.append(node.text)
            for c in node:
                if isinstance(c.tag, str):
                    walk(c)
        if node.tail:
            parts.append(node.tail)

    if el.text:
        parts.append(el.text)
    for c in el:
        if isinstance(c.tag, str):
            walk(c)
    t = norm("".join(parts))
    t = re.sub(r"\s*\n\s*", " ", t)
    t = re.sub(r"[ \t]+", " ", t).strip()
    return t.replace("|", "\\|")


def table_to_md(el):
    rows = []
    for tr in el.iter("tr"):
        cells = [c for c in tr if isinstance(c.tag, str) and c.tag in ("th", "td")]
        if cells:
            rows.append([cell_text(c) for c in cells])
    if not rows:
        return ""
    width = max(len(r) for r in rows)
    rows = [r + [""] * (width - len(r)) for r in rows]
    out = ["| " + " | ".join(rows[0]) + " |",
           "| " + " | ".join(["---"] * width) + " |"]
    for r in rows[1:]:
        out.append("| " + " | ".join(r) + " |")
    return "\n".join(out)


# CSDN 编辑器会给代码块打上作者选过的语言标记，这里把明显误标的改回来：
# 博主全程写 C，但部分代码块被标成 cs（C#）；示例输出被标成其他语言时统一留空。
LANG_MAP = {"cs": "c", "csharp": "c", "cpp": "cpp", "plain": "", "plaintext": "", "output": ""}


def code_lang(pre):
    c = pre.find("code")
    if c is not None:
        cls = (c.get("class") or "") + " " + (pre.get("class") or "")
        m = re.search(r"language-([\w+#-]+)", cls)
        if m:
            lang = m.group(1)
            return LANG_MAP.get(lang, lang)
    return ""


def code_text(pre):
    c = pre.find("code")
    src = c if c is not None else pre
    for bad in src.xpath(".//*[contains(@class,'code-toolbar') or contains(@class,'pre-numbering') "
                         "or contains(@class,'line-numbers-rows') or contains(@class,'hljs-button')]"):
        bad.getparent().remove(bad)
    txt = norm(src.text_content()).replace("\r\n", "\n").replace("\r", "\n")
    lines = txt.split("\n")
    while lines and not lines[0].strip():
        lines.pop(0)
    while lines and not lines[-1].strip():
        lines.pop()
    indent = min((len(l) - len(l.lstrip(" ")) for l in lines if l.strip()), default=0)
    if indent:
        lines = [l[indent:] if l.strip() else "" for l in lines]
    return "\n".join(lines)


def inline_text(el):
    out = []

    def walk(node):
        tag = node.tag
        if tag in DROP_TAGS:
            if node.tail:
                out.append(node.tail)
            return
        if tag == "br":
            out.append("  \n")
        elif tag == "code":
            out.append("`" + (node.text_content() or "").strip() + "`")
        elif tag in ("strong", "b"):
            t = node.text_content().strip()
            out.append("**" + t + "**" if t else "")
        elif tag in ("em", "i"):
            t = node.text_content().strip()
            out.append("*" + t + "*" if t else "")
        elif tag == "a":
            t = (node.text_content() or "").strip()
            href = node.get("href") or ""
            out.append("[%s](%s)" % (t, href) if (t and href.startswith("http")) else t)
        elif tag == "img":
            src = node.get("src") or node.get("data-src") or ""
            if src:
                out.append("![%s](%s)" % (node.get("alt") or "图片", src))
        else:
            if node.text:
                out.append(node.text)
            for c in node:
                if isinstance(c.tag, str):
                    walk(c)
        if node.tail:
            out.append(node.tail)

    if el.text:
        out.append(el.text)
    for c in el:
        if isinstance(c.tag, str):
            walk(c)
    return re.sub(r"[ \t]+", " ", norm("".join(out))).strip()


def render_blocks(el, ctx=None):
    """递归渲染块级节点为 Markdown 行列表。"""
    lines = []

    def emit(s=""):
        lines.append(s)

    def handle(node):
        tag = node.tag
        if tag in DROP_TAGS:
            return
        cls = node.get("class") or ""
        style = node.get("style") or ""
        if "recommend-box" in cls or "hide-article" in cls:
            return
        if "display:none" in style.replace(" ", ""):
            return

        if tag in ("h1", "h2", "h3", "h4", "h5", "h6"):
            txt = inline_text(node)
            if txt:
                if lines and lines[-1] != "":
                    emit()
                emit("#" * int(tag[1]) + " " + txt)
                emit()
        elif tag == "pre":
            txt = code_text(node)
            if not txt.strip():
                return
            if lines and lines[-1] != "":
                emit()
            emit("```" + code_lang(node))
            emit(txt)
            emit("```")
            emit()
        elif tag == "table":
            md = table_to_md(node)
            if md:
                if lines and lines[-1] != "":
                    emit()
                emit(md)
                emit()
        elif tag in ("ul", "ol"):
            if lines and lines[-1] != "":
                emit()
            items = [li for li in node if isinstance(li.tag, str) and li.tag == "li"]
            for i, li in enumerate(items, 1):
                bullet = "%d." % i if tag == "ol" else "-"
                sub = render_blocks(li, ctx)
                first = True
                for sl in sub:
                    if first and sl.strip():
                        emit(bullet + " " + sl.strip())
                        first = False
                    elif sl.strip():
                        emit("  " + sl)
                    else:
                        emit()
            emit()
        elif tag == "blockquote":
            sub = render_blocks(node, ctx)
            if lines and lines[-1] != "":
                emit()
            body = list(sub)
            while body and not body[-1].strip():
                body.pop()
            for sl in body:
                emit("> " + sl if sl.strip() else ">")
            emit()
        elif tag == "hr":
            emit()
            emit("---")
            emit()
        elif tag == "img":
            src = node.get("src") or node.get("data-src") or ""
            if src:
                emit("![%s](%s)" % (node.get("alt") or "图片", src))
                emit()
        elif tag == "p":
            txt = inline_text(node)
            if txt:
                emit(txt)
                emit()
        elif tag in ("div", "section", "article", "tbody", "thead", "center"):
            lines.extend(render_blocks(node, ctx))
        elif tag in ("span", "a", "strong", "b", "em", "i", "code", "font", "sub", "sup"):
            txt = inline_text(node)
            if txt:
                emit(txt)
                emit()
        else:
            sub = render_blocks(node, ctx)
            if sub:
                lines.extend(sub)
            else:
                txt = inline_text(node)
                if txt:
                    emit(txt)
                    emit()

        if node.tail and node.tail.strip():
            emit(norm(node.tail).strip())
            emit()

    for child in el:
        if isinstance(child.tag, str):
            handle(child)
    return lines


def cleanup(md):
    md = norm(md)
    md = md.replace("&nbsp;", " ").replace("&lt;", "<").replace("&gt;", ">")
    md = md.replace("&amp;", "&").replace("&quot;", '"').replace("&#39;", "'")
    md = re.sub(r"```[a-z+#-]*\n\s*```\n?", "", md)   # 去掉空代码块
    md = "\n".join(l.rstrip() for l in md.split("\n"))
    return re.sub(r"\n{3,}", "\n\n", md).strip() + "\n"


def parse_article(path):
    raw = open(path, encoding="utf-8", errors="replace").read()
    doc = LH.fromstring(raw)

    def q1(xp, default=""):
        r = doc.xpath(xp)
        if not r:
            return default
        v = r[0]
        return v if isinstance(v, str) else (v.text_content() or "").strip()

    title = q1('//h1[contains(@class,"title-article")]') or q1("//h1")
    title = re.sub(r"\s+", " ", norm(title)).strip()
    title = re.sub(r"-CSDN博客$", "", title).strip()

    date = ""
    m = re.search(r'postTime\s*=\s*"(\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2})"', norm(raw))
    if m:
        date = m.group(1)
    if not date:
        m = re.search(r'"article:published_time"\s+content="([^"]+)"', norm(raw))
        if m:
            date = m.group(1).replace("T", " ").split("+")[0].strip()

    body = doc.xpath('//div[@id="content_views"]') or doc.xpath('//div[contains(@class,"htmledit_views")]')
    if not body:
        raise RuntimeError("找不到正文节点: %s" % path)
    body = body[0]

    for bad in body.xpath('.//*[contains(@class,"recommend") or contains(@class,"hide-article") '
                          'or contains(@id,"btn-readmore") or contains(@class,"article-copyright") '
                          'or contains(@class,"blog-tags-box") or contains(@class,"reward")]'):
        try:
            bad.getparent().remove(bad)
        except Exception:  # noqa: BLE001
            pass

    md = cleanup("\n".join(render_blocks(body)))

    return {
        "title": title,
        "date": date,
        "md": md,
        "images": re.findall(r"!\[[^\]]*\]\((https?://[^)\s]+)\)", md),
    }


def series_of(title):
    for sid, pat in C.SERIES_PATTERN:
        if re.search(pat, title):
            return sid, C.SERIES_DIR[sid], C.SERIES_TITLE[sid]
    return "99", "99-misc", "其他"


def seq_of(title):
    m = re.search(r"[（(]\s*([一二三四五六七八九十]+)\s*[)）]", title)
    return C.CN_NUM.get(m.group(1), 99) if m else 99


def clean_body(title):
    t = re.sub(r"^(Linux基础入门|C语言学习笔记|数据结构学习笔记|Linux软件编程学习笔记|"
               r"单片机学习笔记|ARM学习笔记)\s*[（(][^)）]*[)）]\s*[—-]*\s*", "", title)
    t = re.sub(r"^Linux基础入门\s*[—-]*\s*", "", t)
    t = re.sub(r"^ARM学习笔记\s*", "", t)
    return t.strip(" -—　") or title


def safe_name(s):
    s = norm(s)
    s = re.sub(r'[<>:"/\\|?*\x00-\x1f]', "-", s)
    s = re.sub(r"\s+", "-", s).strip(" .")
    s = re.sub(r"-{2,}", "-", s)
    if len(s) > 90:
        s = s[:90].rstrip(" .-")
    return s


def convert_all():
    ids = [l.strip().lstrip("\ufeff") for l in open(C.IDS_FILE, encoding="utf-8-sig") if l.strip()]
    out, errors = [], []
    for aid in ids:
        p = os.path.join(C.HTML_DIR, aid + ".html")
        if not os.path.exists(p):
            errors.append((aid, "缺少缓存 HTML"))
            continue
        try:
            a = parse_article(p)
        except Exception as e:  # noqa: BLE001
            errors.append((aid, str(e)))
            continue
        sid, slug, sname = series_of(a["title"])
        a.update({"id": aid, "series_id": sid, "series_slug": slug, "series_name": sname,
                  "seq": seq_of(a["title"]), "url": C.BASE_ARTICLE + aid})
        out.append(a)

    out.sort(key=lambda x: (x["series_id"], x["seq"], x["date"]))

    seen = {}
    for a in out:
        key = (a["series_id"], a["seq"])
        seen[key] = seen.get(key, 0) + 1
        n = seen[key]
        if a["seq"] == 99:
            a["num"] = "01" if a["series_id"] == "01" else "XX%d" % n
        elif n == 1:
            a["num"] = "%02d" % a["seq"]
        else:
            a["num"] = "%02d%s" % (a["seq"], "abcdefgh"[n - 2])
        a["filename"] = "%s-%s.md" % (a["num"], safe_name(clean_body(a["title"])))

    with open(C.BUILD_JSON, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)

    print("解析 %d 篇，失败 %d 篇" % (len(out), len(errors)))
    for a in out:
        print("  %s/%s  %s  %s" % (a["series_id"], a["filename"], a["date"][:10], a["title"]))
    for aid, err in errors:
        print("  !! %s  %s" % (aid, err))
    return len(errors) == 0


if __name__ == "__main__":
    raise SystemExit(0 if convert_all() else 1)
