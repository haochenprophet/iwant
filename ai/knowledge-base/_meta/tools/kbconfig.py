# -*- coding: utf-8 -*-
"""知识库构建的公共路径与常量配置。"""
import os

TOOLS = os.path.dirname(os.path.abspath(__file__))
META_DIR = os.path.dirname(TOOLS)              # knowledge-base/_meta
KB = os.path.dirname(META_DIR)                 # knowledge-base

CACHE = os.environ.get("KB_CACHE") or os.path.join(META_DIR, ".cache")  # 抓取缓存（可删除，重新抓取即可）
HTML_DIR = os.path.join(CACHE, "html")
IDS_FILE = os.path.join(CACHE, "ids.txt")
LIST_DIR = os.path.join(CACHE, "list")

META_JSON = os.path.join(META_DIR, "articles.json")
BUILD_JSON = os.path.join(TOOLS, "build.json")

AUTHOR = "斑马819"
HOME = "https://blog.csdn.net/weixin_56431759?type=blog"
BASE_ARTICLE = "https://blog.csdn.net/weixin_56431759/article/details/"

SERIES_ORDER = ["01", "02", "03", "04", "05", "06"]

SERIES_DIR = {
    "01": "01-linux-basics",
    "02": "02-c-language",
    "03": "03-data-structure",
    "04": "04-linux-sysprog",
    "05": "05-mcu-8051",
    "06": "06-arm-imx6ull",
}

SERIES_TITLE = {
    "01": "Linux 基础入门",
    "02": "C 语言学习笔记",
    "03": "数据结构学习笔记",
    "04": "Linux 软件编程学习笔记",
    "05": "单片机学习笔记（STC89C52）",
    "06": "ARM 学习笔记（i.MX6ULL 裸机）",
}

# 用于把文章标题归类到系列
SERIES_PATTERN = [
    ("01", r"^Linux基础入门"),
    ("02", r"^C语言学习笔记"),
    ("03", r"^数据结构学习笔记"),
    ("04", r"^Linux软件编程学习笔记"),
    ("05", r"^单片机学习笔记"),
    ("06", r"^ARM学习笔记"),
]

CN_NUM = {
    "一": 1, "二": 2, "三": 3, "四": 4, "五": 5, "六": 6, "七": 7, "八": 8,
    "九": 9, "十": 10, "十一": 11, "十二": 12, "十三": 13, "十四": 14,
    "十五": 15, "十六": 16, "十七": 17, "十八": 18, "十九": 19, "二十": 20,
}
