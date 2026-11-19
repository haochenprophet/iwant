# -*- coding: utf-8 -*-
"""一键构建知识库：抓取 → 解析 → 落盘 → 生成索引。

用法：
    python build.py             # 增量抓取并重建全部文章与索引（默认）
    python build.py --skip-fetch   # 只用已有缓存重建
    python build.py --force        # 强制重新抓取

环境变量 KB_CACHE 可指定缓存目录，默认 knowledge-base/_meta/.cache。
"""
import argparse
import os
import subprocess
import sys

import kbconfig as C

HERE = os.path.dirname(os.path.abspath(__file__))


def run(script, *args):
    print("\n=== %s %s ===" % (script, " ".join(args)))
    code = subprocess.call([sys.executable, os.path.join(HERE, script)] + list(args))
    if code != 0:
        raise SystemExit("%s 执行失败（退出码 %d）" % (script, code))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--skip-fetch", action="store_true", help="跳过抓取，只用已有缓存")
    ap.add_argument("--force", action="store_true", help="强制重新抓取")
    args = ap.parse_args()

    print("知识库目录：%s" % C.KB)
    print("缓存目录：  %s" % C.CACHE)

    if not args.skip_fetch:
        extra = ["--force"] if args.force else []
        run("fetch.py", *extra)
    if not os.path.exists(C.IDS_FILE):
        raise SystemExit("缺少 %s，请先运行 fetch.py" % C.IDS_FILE)
    if not os.path.isdir(C.HTML_DIR):
        raise SystemExit("缺少缓存目录 %s，请先运行 fetch.py" % C.HTML_DIR)

    run("convert.py")
    run("finalize.py")
    run("index_gen.py")
    print("\n完成。知识库已更新到 %s" % C.KB)


if __name__ == "__main__":
    main()
