# -*- coding: utf-8 -*-
"""把 convert.py 的结果落盘成知识库文章文件（含 YAML 头与上下篇导航）。

只写文章 .md 与 _meta/articles.json，不会覆盖各系列的 README.md。
"""
import json
import os
import re

import kbconfig as C

NAV_HEAD = "\n---\n"


def compact_lists(md):
    """去掉列表项之间的空行，让列表紧凑渲染。"""
    lines = md.split("\n")
    out = []
    for i, ln in enumerate(lines):
        if ln.strip() == "":
            prev = out[-1] if out else ""
            nxt = ""
            for j in range(i + 1, len(lines)):
                if lines[j].strip():
                    nxt = lines[j]
                    break
            if re.match(r"^\s*(?:[-*+] |\d+\. )", prev) and re.match(r"^\s*(?:[-*+] |\d+\. )", nxt):
                continue
        out.append(ln)
    return "\n".join(out)


def guess_lang(code):
    """给无语言标记的代码块猜一个语言，猜不出就不标（多为 ASCII 示意图）。"""
    s = code.strip()
    if not s:
        return ""
    if re.search(r"[│┌└├─┐┘┤┬┴┼↑↓→←]", s):
        return ""
    ratio = sum(1 for ch in s if ord(ch) < 128) / max(1, len(s))
    if ratio < 0.9:
        return ""
    if any(k in s for k in ("#include", "int main(", "printf(")) and ";" in s:
        return "c"
    if re.search(r"^(struct|typedef|void|int|char|unsigned)\b", s, re.M) and ";" in s and "{" in s:
        return "c"
    if re.search(r"^\s*(sudo|apt|apt-get|gcc|make|cd|ls|mkdir|rm|cp|mv|cat|chmod|tar|\./)\b", s, re.M) \
            and ";" not in s:
        return "bash"
    return ""


def tag_fences(md):
    def repl(m):
        lang = (m.group(1) or "").strip() or guess_lang(m.group(2))
        return "```" + lang + "\n" + m.group(2) + "\n```"

    return re.sub(r"```([A-Za-z0-9+#_-]*)\n(.*?)\n```", repl, md, flags=re.S)


def front_matter(a):
    lines = [
        "---",
        'title: "%s"' % a["title"].replace('"', '\\"'),
        'series: "%s"' % C.SERIES_TITLE.get(a["series_id"], a["series_name"]),
        'order: "%s"' % a["num"],
        'published: "%s"' % a["date"],
        'author: "%s"' % C.AUTHOR,
        'source: "%s"' % a["url"],
        "---",
        "",
        "",
    ]
    return "\n".join(lines)


def build():
    data = json.load(open(C.BUILD_JSON, encoding="utf-8"))
    by_series = {}
    for a in data:
        by_series.setdefault(a["series_id"], []).append(a)

    os.makedirs(C.KB, exist_ok=True)
    written = 0
    for sid, arts in by_series.items():
        d = os.path.join(C.KB, C.SERIES_DIR.get(sid, "99-misc"))
        os.makedirs(d, exist_ok=True)
        arts.sort(key=lambda x: x["num"])
        for i, a in enumerate(arts):
            body = re.sub(r"\n{3,}", "\n\n", tag_fences(compact_lists(a["md"]))).strip() + "\n"

            head = front_matter(a)
            head += "> **系列**：%s ｜ **原文**：[%s](%s) ｜ **发布**：%s\n\n" % (
                C.SERIES_TITLE.get(sid, a["series_name"]), a["title"], a["url"], a["date"])
            head += "<!-- kb:auto-header -->\n\n"

            nav = [NAV_HEAD]
            links = []
            if i > 0:
                p = arts[i - 1]
                links.append("← 上一篇：[%s](%s)" % (p["title"], os.path.basename(p["filename"])))
            if i + 1 < len(arts):
                n = arts[i + 1]
                links.append("下一篇 →：[%s](%s)" % (n["title"], os.path.basename(n["filename"])))
            if links:
                nav.append(" ｜ ".join(links))
                nav.append("")
            nav.append("[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ "
                       "[全部文章索引](../INDEX.md)")
            nav.append("")

            out = os.path.join(d, a["filename"])
            with open(out, "w", encoding="utf-8", newline="\n") as f:
                f.write(head + body + "\n".join(nav))
            written += 1
            a["chars"] = len(re.sub(r"\s", "", body))

    slim = [{k: a[k] for k in ("id", "title", "series_id", "series_name", "num", "date",
                               "url", "filename", "chars")} for a in data]
    with open(C.META_JSON, "w", encoding="utf-8") as f:
        json.dump(slim, f, ensure_ascii=False, indent=1)

    print("写入 %d 篇文章" % written)
    for sid in C.SERIES_ORDER:
        print("  %s %-18s %d 篇" % (sid, C.SERIES_DIR[sid], len(by_series.get(sid, []))))


if __name__ == "__main__":
    build()
