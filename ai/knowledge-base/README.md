# 嵌入式 / Linux 学习知识库

把 CSDN 博主 **斑马819**（[blog.csdn.net/weixin_56431759](https://blog.csdn.net/weixin_56431759?type=blog)）的 **46 篇原创学习笔记**整理成一套可跳转、可检索、可顺序阅读的离线知识库。

这 46 篇不是零散文章，而是**一条完整的学习轨迹**：从 2026 年 7 月 20 日的第一篇 Linux 入门，到 9 月 30 日的 i.MX6ULL SPI 触摸屏，历时约两个半月，覆盖「Linux 使用 → C 语言 → 数据结构 → Linux 系统编程 → 单片机 → ARM 裸机驱动」六个阶段。

| 指标 | 数值 |
| --- | --- |
| 系列 | 6 个 |
| 文章 | 46 篇 |
| 正文合计 | 约 20.8 万字 |
| 时间跨度 | 2026-07-20 ～ 2026-09-30 |
| 整理日期 | 2026-11-19 |

---

## 一、快速开始

| 我想…… | 去这里 |
| --- | --- |
| 按顺序从头学 | [推荐学习路线](#三推荐学习路线) |
| 按主题找一个知识点 | [TOPICS.md](TOPICS.md) 主题索引（按关键词横向查） |
| 按系列/篇号找文章 | [INDEX.md](INDEX.md) 全部文章索引 |
| 看某个系列讲了什么 | 下方[系列导航](#四系列导航)进入各系列导读 |
| 全文搜索关键词 | 见[第五节](#五怎么用这个知识库) |

---

## 二、知识库结构

```
ai/knowledge-base/
├── README.md                    ← 本文件：总览、路线、使用说明
├── INDEX.md                     ← 46 篇全清单（系列 / 篇号 / 日期 / 字数 / 阅读时长）
├── TOPICS.md                    ← 主题索引（57 个技术主题 → 相关文章）
├── 01-linux-basics/             ← Linux 基础入门（1 篇）
│   ├── README.md                ←   系列导读
│   └── 01-虚拟机、终端及常用命令详解.md
├── 02-c-language/               ← C 语言学习笔记（15 篇）
├── 03-data-structure/           ← 数据结构学习笔记（5 篇）
├── 04-linux-sysprog/            ← Linux 软件编程学习笔记（13 篇）
├── 05-mcu-8051/                 ← 单片机学习笔记 STC89C52（2 篇）
├── 06-arm-imx6ull/              ← ARM 学习笔记 i.MX6ULL 裸机（10 篇）
└── _meta/
    ├── articles.json            ← 全部文章的元数据（标题/日期/原文链接/字数）
    └── tools/                   ← 采集与生成脚本，可复现本知识库
```

每个系列目录下的 `README.md` 是**系列导读**：定位、前置知识、知识脉络、逐篇速览表、核心要点、易错点、术语表。

---

## 三、推荐学习路线

原文的写作顺序本身就是一条合理的路线，建议按编号顺序读：

| 阶段 | 系列 | 篇数 | 你会得到什么 |
| --- | --- | --- | --- |
| ① 打地基 | [01 Linux 基础入门](01-linux-basics/README.md) | 1 | 装虚拟机、用终端、掌握常用命令与权限 |
| ② 学语言 | [02 C 语言学习笔记](02-c-language/README.md) | 15 | 从 `printf` 到二级指针、结构体、动态内存 |
| ③ 练结构 | [03 数据结构学习笔记](03-data-structure/README.md) | 5 | 用 C 手写顺序表、链表、队列、二叉树 |
| ④ 进系统 | [04 Linux 软件编程学习笔记](04-linux-sysprog/README.md) | 13 | 文件 IO、进程线程、IPC、Socket、HTTP、SQLite |
| ⑤ 下单片机 | [05 单片机学习笔记](05-mcu-8051/README.md) | 2 | 8051 的 GPIO、数码管、定时器、中断、串口 |
| ⑥ 上 ARM | [06 ARM 学习笔记](06-arm-imx6ull/README.md) | 10 | i.MX6ULL 裸机：汇编、点灯、中断、时钟、LCD、IIC、SPI |

**按目标跳读**：

- 只想补 C 语言基本功 → 直接读 ②，重点是第 10～15 篇（指针家族与内存管理）。
- 想做 Linux 后端 / 系统编程 → ②的指针部分 → ④全部 → ③的队列与链表。
- 想做嵌入式驱动开发 → ③ + ④（理解内核接口）+ ⑥（理解寄存器与外设）。
- 只想玩单片机 → ②基础 → ⑤ → ⑥的前 5 篇。

---

## 四、系列导航

| 目录 | 系列 | 篇数 | 时间 | 一句话 |
| --- | --- | --- | --- | --- |
| [01-linux-basics](01-linux-basics/README.md) | Linux 基础入门 | 1 | 07-20 | 虚拟机、终端、命令与权限，整个学习路径的地基 |
| [02-c-language](02-c-language/README.md) | C 语言学习笔记 | 15 | 07-21 ～ 08-06 | 语法主线完整，指针讲得最细 |
| [03-data-structure](03-data-structure/README.md) | 数据结构学习笔记 | 5 | 08-13 ～ 08-17 | 全部用 C 手写，代码可直接拿来改 |
| [04-linux-sysprog](04-linux-sysprog/README.md) | Linux 软件编程学习笔记 | 13 | 08-21 ～ 09-07 | 从文件描述符一路写到 TCP 并发服务器 |
| [05-mcu-8051](05-mcu-8051/README.md) | 单片机学习笔记 | 2 | 09-15 ～ 09-16 | STC89C52 入门，串口与单总线传感器 |
| [06-arm-imx6ull](06-arm-imx6ull/README.md) | ARM 学习笔记 | 10 | 09-18 ～ 09-30 | i.MX6ULL 裸机开发，从点灯到触摸屏 |

> 关于 **篇号 06 与 06a**：原文把《时钟、PLL、EPIT 与 GPT 定时器》和《IIC 通信与 AT24C08》都编为「（六）」。本库按发布时间把前者排为 `06`、后者排为 `06a`，阅读时按此顺序即可，原文标题未做修改。

---

## 五、怎么用这个知识库

**1. 直接用支持 Markdown 的编辑器打开整个目录**

推荐 Obsidian、Typora、VS Code（配合 Markdown Preview）。文中的相对链接、YAML front matter 都能正常工作。

**2. 全文检索（Windows PowerShell）**

```powershell
# 在仓库根目录执行。搜某个关键字出现在哪些文章里
Get-ChildItem .\ai\knowledge-base -Recurse -Filter *.md | Select-String -Pattern 'IIC' | Select-Object Path, LineNumber

# 只搜正文，排除索引文件
Get-ChildItem .\ai\knowledge-base -Recurse -Filter *.md |
  Where-Object { $_.Name -notin 'README.md','INDEX.md','TOPICS.md' } |
  Select-String -Pattern '互斥锁'
```

**3. 每篇文章都带统一的信息头**

```yaml
---
title: "ARM学习笔记（九）——SPI 与 GT9147"
series: "ARM 学习笔记（i.MX6ULL 裸机）"
order: "09"
published: "2026-09-30 19:30:00"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/166848895"
---
```

文末有「上一篇 / 下一篇 / 返回系列目录 / 返回首页」导航，可以当书一样顺序读。

---

## 六、整理与校验说明

- **正文未经改写**：只做了 HTML → Markdown 的结构转换（标题层级、代码块、表格、引用），原文的 ASCII 示意图、寄存器表、代码片段都原样保留。
- **剔除了干扰内容**：CSDN 的推荐位、广告、"阅读更多"、评论区等与正文无关的模块已去除。
- **保留溯源信息**：每篇都记录原文链接与发布时间，可随时回原文核对。
- **系列导读是二次加工**：各系列 `README.md` 中的定位、脉络、要点、易错点是基于原文提炼的，不是原文内容，引用时请注意区分。
- **字数与阅读时长是估算**：按去空白字符数统计，450 字/分钟折算。
- **采集与生成可复现**：见 [_meta/tools](_meta/tools/README.md)。

---

## 七、版权与致谢

- 原文作者：**斑马819**（CSDN），全部 46 篇文章原文遵循 [CC 4.0 BY-SA](http://creativecommons.org/licenses/by-sa/4.0/) 协议。
- 本知识库是对上述公开文章的**个人学习归档**，仅调整了排版格式。转载、引用、二次分发请遵守 CC 4.0 BY-SA：**署名原作者 + 保留原文链接 + 相同方式共享**。
- 原文链接格式：`https://blog.csdn.net/weixin_56431759/article/details/<文章ID>`，每篇文章的 front matter 中都有完整地址。
