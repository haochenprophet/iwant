# -*- coding: utf-8 -*-
"""抓取 CSDN 博客文章列表与正文 HTML，缓存到 _meta/.cache/。

用法：
    python fetch.py                # 增量抓取全部（已存在且完整的文章跳过）
    python fetch.py --force        # 强制重新抓取
    python fetch.py --limit 3      # 只抓前 3 篇（调试用）

只依赖标准库。CSDN 对文章详情页有风控，需要先访问列表页拿到 Cookie，
并使用完整的浏览器请求头，否则会返回 HTTP 521。
"""
import argparse
import http.cookiejar
import os
import re
import sys
import time
import urllib.error
import urllib.request

from kbconfig import (BASE_ARTICLE, HOME, HTML_DIR, IDS_FILE, LIST_DIR)

UA = ("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
      "(KHTML, like Gecko) Chrome/126.0.0.0 Safari/537.36")

HEADERS = {
    "User-Agent": UA,
    "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8",
    "Accept-Language": "zh-CN,zh;q=0.9,en;q=0.8",
    "Upgrade-Insecure-Requests": "1",
    "Sec-Fetch-Dest": "document",
    "Sec-Fetch-Mode": "navigate",
    "Sec-Fetch-Site": "same-origin",
    "Sec-Fetch-User": "?1",
}

ARTICLE_RE = re.compile(r"weixin_56431759/article/details/(\d+)")


def make_opener():
    jar = http.cookiejar.CookieJar()
    return urllib.request.build_opener(urllib.request.HTTPCookieProcessor(jar))


def get(opener, url, referer=None, retries=4, timeout=45):
    headers = dict(HEADERS)
    if referer:
        headers["Referer"] = referer
    last = None
    for i in range(retries):
        try:
            req = urllib.request.Request(url, headers=headers)
            with opener.open(req, timeout=timeout) as r:
                raw = r.read()
                return raw.decode("utf-8", "replace")
        except Exception as e:  # noqa: BLE001
            last = e
            time.sleep(2 + i)
    raise RuntimeError("fetch failed: %s (%s)" % (url, last))


def crawl_ids(opener, pages=4):
    """翻文章列表页收集全部文章 ID。

    注意：列表页每页 40 条，第 1 页必须用 /article/list/1（博客首页 ?type=blog 只给 20 条），
    否则会漏掉中间的文章。一直翻到没有新 ID 为止。
    """
    os.makedirs(LIST_DIR, exist_ok=True)
    ids, seen = [], set()
    for p in range(1, pages + 1):
        url = "https://blog.csdn.net/weixin_56431759/article/list/%d" % p
        try:
            html = get(opener, url, referer=HOME)
        except RuntimeError as e:
            print("  列表页 %d 失败：%s" % (p, e))
            continue
        with open(os.path.join(LIST_DIR, "list%d.html" % p), "w", encoding="utf-8") as f:
            f.write(html)
        # 一篇文章在列表页可能出现多次（标题链接 + 缩略图链接），页内也要先去重
        found = list(dict.fromkeys(ARTICLE_RE.findall(html)))
        fresh = [i for i in found if i not in seen]
        print("  列表页 %d：%d 个链接，新增 %d" % (p, len(found), len(fresh)))
        if not fresh:
            break
        seen.update(fresh)
        ids.extend(fresh)
        time.sleep(1.5)
    return ids


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--force", action="store_true", help="重新抓取已缓存的文章")
    ap.add_argument("--limit", type=int, default=0, help="只处理前 N 篇")
    ap.add_argument("--pages", type=int, default=4, help="列表页翻页数")
    args = ap.parse_args()

    os.makedirs(HTML_DIR, exist_ok=True)
    opener = make_opener()

    ids = []
    if os.path.exists(IDS_FILE) and not args.force:
        ids = [l.strip() for l in open(IDS_FILE, encoding="utf-8-sig") if l.strip()]
        print("从 ids.txt 读取 %d 个文章 ID" % len(ids))
    else:
        print("抓取文章列表……")
        try:
            get(opener, HOME)  # 预热 Cookie
        except RuntimeError:
            pass
        ids = crawl_ids(opener, args.pages)
        with open(IDS_FILE, "w", encoding="utf-8") as f:
            f.write("\n".join(ids))
        print("共 %d 个文章 ID" % len(ids))

    if args.limit:
        ids = ids[: args.limit]

    ok = fail = 0
    for n, aid in enumerate(ids, 1):
        path = os.path.join(HTML_DIR, aid + ".html")
        if not args.force and os.path.exists(path) and os.path.getsize(path) > 50000:
            ok += 1
            continue
        try:
            html = get(opener, BASE_ARTICLE + aid, referer=HOME)
            if 'id="content_views"' not in html:
                raise RuntimeError("no content_views (可能被风控拦截)")
            with open(path, "w", encoding="utf-8") as f:
                f.write(html)
            ok += 1
            print("[%d/%d] OK   %s" % (n, len(ids), aid))
        except RuntimeError as e:
            fail += 1
            print("[%d/%d] FAIL %s  %s" % (n, len(ids), aid, e))
        time.sleep(0.9)

    print("\n完成：成功 %d，失败 %d" % (ok, fail))
    return 0 if fail == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
