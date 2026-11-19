# -*- coding: utf-8 -*-
"""生成 INDEX.md（全部文章清单）与 TOPICS.md（主题索引）。"""
import json
import os
import re

import kbconfig as C

# 主题索引：分类 -> [(显示名, 检索正则)]
TOPICS = [
    ("Linux 基础与环境", [
        ("虚拟机", r"虚拟机"),
        ("终端 / Shell", r"终端|Shell"),
        ("常用命令", r"\b(ls|cd|pwd|cp|mv|rm|mkdir|cat|chmod|chown|tar|find|grep)\b"),
        ("文件权限", r"权限|chmod|rwx"),
        ("环境变量", r"环境变量|PATH"),
        ("make / Makefile", r"Makefile|makefile|\bmake\b"),
        ("gcc / 交叉编译", r"gcc|交叉编译|objcopy|objdump"),
    ]),
    ("C 语言", [
        ("数据类型与运算符", r"数据类型|运算符|sizeof"),
        ("字符串与字符数组", r"字符串|字符数组"),
        ("指针", r"指针"),
        ("数组", r"数组"),
        ("函数与参数传递", r"函数|形参|实参|传参"),
        ("预处理与宏", r"预处理|#define|宏定义|#include"),
        ("结构体 / 联合体 / 枚举", r"结构体|共用体|联合体|枚举|typedef"),
        ("位运算", r"位运算|移位|按位"),
        ("动态内存", r"malloc|free|calloc|realloc|动态内存"),
    ]),
    ("数据结构", [
        ("顺序表", r"顺序表|SeqList"),
        ("链表", r"链表"),
        ("栈", r"栈"),
        ("队列", r"队列"),
        ("二叉树与遍历", r"二叉树|遍历|先序|中序|后序"),
    ]),
    ("Linux 系统编程", [
        ("标准 IO", r"标准IO|标准 IO|fopen|fread|fwrite|stdio"),
        ("文件 IO 与目录 IO", r"文件IO|文件 IO|open\(|read\(|write\(|opendir|目录"),
        ("文件描述符", r"文件描述符|fd\b"),
        ("进程", r"进程|fork|exec|wait|孤儿|僵尸"),
        ("线程", r"线程|pthread"),
        ("互斥锁 / 条件变量", r"互斥锁|条件变量|pthread_mutex|pthread_cond"),
        ("信号量", r"信号量|sem_"),
        ("管道 / 命名管道", r"管道|pipe|FIFO|mkfifo"),
        ("消息队列 / 共享内存", r"消息队列|共享内存|shmget|msgget|mmap"),
        ("信号", r"信号|signal\(|SIGINT|kill\("),
        ("Socket 编程", r"socket|套接字|bind|listen|accept"),
        ("UDP / TCP", r"\bUDP\b|\bTCP\b"),
        ("HTTP 协议", r"\bHTTP\b|状态码|请求行"),
        ("并发服务器", r"并发服务器|多进程|多线程|select|epoll"),
        ("数据库 / SQLite", r"数据库|SQLite|SQL"),
        ("字节序", r"字节序|大端|小端|htons|ntohl"),
    ]),
    ("单片机 / 8051", [
        ("GPIO", r"GPIO|IO口|I/O口"),
        ("数码管", r"数码管"),
        ("定时器 / 计数", r"定时器|计数器|TMOD|TH0|TL0"),
        ("中断", r"中断"),
        ("UART 串口", r"UART|串口|波特率|TXD|RXD"),
        ("DS18B20 / 单总线", r"DS18B20|单总线"),
    ]),
    ("ARM / i.MX6ULL 裸机", [
        ("寄存器操作", r"寄存器|volatile|0x[0-9A-Fa-f]{8}"),
        ("ARM 汇编", r"汇编|MOV|LDR|STR|BL\b|指令"),
        ("启动流程 / 启动文件", r"启动文件|start\.s|复位向量|链接脚本|\.lds"),
        ("IOMUX 引脚复用", r"IOMUX|引脚复用|MUX_MODE"),
        ("时钟树 / PLL", r"\bPLL\b|时钟树|分频|倍频|PFD"),
        ("EPIT / GPT 定时器", r"EPIT|\bGPT\b"),
        ("GIC 中断控制器", r"GIC|中断控制器|IRQ|中断号"),
        ("GPIO 中断", r"GPIO中断|边沿触发|中断标志"),
        ("LCD / 帧缓冲", r"LCD|帧缓冲|LCDIF|显存"),
        ("PWM", r"\bPWM\b|占空比"),
        ("ADC", r"\bADC\b|模数转换"),
        ("IIC / I2C", r"IIC|I2C|I²C|AT24C08|SCL|SDA"),
        ("SPI", r"\bSPI\b|SCLK|MOSI|MISO|CPOL|CPHA"),
        ("触摸屏 / GT9147", r"GT9147|触摸屏|触摸"),
    ]),
]

PREFIX = re.compile(
    r"^(Linux软件编程学习笔记|C语言学习笔记|数据结构学习笔记|单片机学习笔记|ARM学习笔记|Linux基础入门)"
    r"\s*[（(][^)）]*[)）]\s*[—\-]*\s*|^Linux基础入门\s*[—\-]*\s*")

NAV = re.compile(r"\n---\n+(?:← 上一篇|下一篇 →|\[返回系列目录\])")


def rel(a):
    return "%s/%s" % (C.SERIES_DIR[a["series_id"]], a["filename"])


def short_title(t):
    return PREFIX.sub("", t).strip(" -—　") or t


def label(a):
    return "%s-%s %s" % (a["series_id"], a["num"], short_title(a["title"]))


def load():
    arts = json.load(open(C.META_JSON, encoding="utf-8"))
    for a in arts:
        p = os.path.join(C.KB, rel(a).replace("/", os.sep))
        txt = open(p, encoding="utf-8").read().split("<!-- kb:auto-header -->")[-1]
        body = NAV.split(txt)[0]
        a["_body"] = body
        a["chars"] = len(re.sub(r"\s", "", body))
        a["minutes"] = max(1, round(a["chars"] / 450))
    return arts


def write_index(arts):
    L = ["# 全部文章索引\n",
         "共 **46 篇**，按系列与原文顺序排列。`字数` 为正文去空白后的字符数，`阅读时长` 按 450 字/分钟估算。\n"]
    total = sum(a["chars"] for a in arts)
    dates = sorted(a["date"] for a in arts)
    L += ["| 统计 | 数值 |", "| --- | --- |",
          "| 文章总数 | %d 篇 |" % len(arts),
          "| 正文字数合计 | 约 %.1f 万字 |" % (total / 10000.0),
          "| 系列数 | %d 个 |" % len({a["series_id"] for a in arts}),
          "| 时间跨度 | %s ～ %s |" % (dates[0][:10], dates[-1][:10]), ""]
    for sid in C.SERIES_ORDER:
        group = sorted([a for a in arts if a["series_id"] == sid], key=lambda x: x["num"])
        if not group:
            continue
        L.append("## %s · %s\n" % (sid, C.SERIES_TITLE[sid]))
        L.append("系列导读：[%s/README.md](%s/README.md)\n" % (C.SERIES_DIR[sid], C.SERIES_DIR[sid]))
        L += ["| 篇号 | 标题 | 发布 | 字数 | 阅读时长 |", "| --- | --- | --- | --- | --- |"]
        for a in group:
            L.append("| %s | [%s](%s) | %s | %d | 约 %d 分钟 |" % (
                a["num"], a["title"], rel(a), a["date"][:10], a["chars"], a["minutes"]))
        L.append("")
    open(os.path.join(C.KB, "INDEX.md"), "w", encoding="utf-8", newline="\n").write("\n".join(L))


def write_topics(arts):
    T = ["# 主题索引\n",
         "按技术主题横向查找，不受系列限制。标签形如 `04-04 进程` = 系列编号-篇号 + 短标题；"
         "`×N` 是该关键词在文中的出现次数。\n",
         "> 生成方式：对全部 %d 篇正文做关键词统计，命中 ≥2 次才计入；只展示提及最多的前 4 篇。\n" % len(arts)]
    for cat, items in TOPICS:
        T.append("\n## %s\n" % cat)
        rows = []
        for name, pat in items:
            rx = re.compile(pat)
            hits = sorted(((len(rx.findall(a["_body"])), a) for a in arts), key=lambda x: -x[0])
            hits = [(n, a) for n, a in hits if n >= 2]
            if not hits:
                continue
            top = " · ".join("[%s](%s) ×%d" % (label(h), rel(h), n) for n, h in hits[:4])
            if len(hits) > 4:
                top += " · 等 %d 篇" % len(hits)
            rows.append("| **%s** | %d | %s |" % (name, len(hits), top))
        if rows:
            T += ["| 主题 | 命中篇数 | 重点文章 |", "| --- | --- | --- |"] + rows
    open(os.path.join(C.KB, "TOPICS.md"), "w", encoding="utf-8", newline="\n").write("\n".join(T) + "\n")


def main():
    arts = load()
    write_index(arts)
    write_topics(arts)
    print("INDEX.md / TOPICS.md 已生成（%d 篇，约 %.1f 万字）" % (
        len(arts), sum(a["chars"] for a in arts) / 10000.0))


if __name__ == "__main__":
    main()
