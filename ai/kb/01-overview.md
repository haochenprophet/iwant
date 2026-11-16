# 01 项目速览

## 它是什么

`iwant` 自称 "I want Library"，README 用拟人化的 `[Thinker]` 独白描述自我设定：

> I am a thinker, I am Object … No gun, no cannons, we made ourselves, We create ourselves and create the future. (`Object::create`)

翻译成工程语言：

1. **一切皆 `Object`**：`Object` 是唯一根类，所有东西——C++ 关键字、`printf`、`ADD` 指令、`SELECT`、汽车、卫星、家庭、组织、消息——都是它的子类。
2. **一切对象都活在同一个"时空"里**：`Object` 通过 `Osetting` 组合了 `Ouuid`（身份）、`Otime`（时间）、`Orange`（空间/范围），并持有 `ACTION_T` 动作位掩码、家族链表、关系链表、内存账本。
3. **程序能造自己**：`Cclass/``Ccode/``Cmain/``Cmake/``Cbuild` 这些"元类"通过字符串模板替换（`[TAG]`/`[tag]`）生成 `.h`/`.cpp` 骨架、`Makefile`、`main()`、以及全局注册文件 `*_g_code.i`。`batch/*.bat` 就是"用程序批量造出整个代码库"的脚本。

所以它是一个**元编程框架 + 代码生成工具链 + 词汇宇宙**，而不是可直接交付用户的业务系统。

## 它不是什么（避免误判）

- **没有业务闭环**：`car`、`satellite`、`ocean` 等包里的 3117 个类，绝大多数只有 `my_init()`（设 `name`/`alias`）+ 空析构 + `#if XXX_TEST` 独立 `main`。它们是"名词词条"，等待被外部逻辑驱动，自身几乎不含算法。
- **没有持续演进的自动化测试**：测试是"每个 .cpp 末尾的 `#if TAG_TEST` 独立 `main`"，默认关闭（`#define XXX_TEST 0//1`）。
- **不是跨平台产品**：Linux 侧只有 `Makefile` 单文件编译（无 CMake 工程化），Windows 侧依赖 VS 工程；两套并存但不同步。
- **`include/` 不是有效头目录**：是 2024-05 的老版本扁平镜像（详见 10-pitfalls P1）。

## 目录职责（实测）

| 路径 | 内容 | 规模 |
| --- | --- | --- |
| `src/` | **全部源码**，101 个包目录，每个包一个名词域 | 6201 文件 / 122,667 行 / 3117 类 |
| `include/` | 扁平头文件镜像（老布局，`#include "../object.h"`） | 3068 .h（**过期，勿用**） |
| `doc/` | 设计线索：`think.txt`（哲学）、`keyword_syntax.txt`（模板语法）、`timetree.jpg`、`jmp-call.png` 等 270 文件 | — |
| `batch/` | 生成脚本（`*.bat` 驱动 `code.exe` 造类）+ 少量 `.sh` 构建脚本 | 119 文件，含 `code.exe`(468 KB) |
| `database/` | `organization.sql`：MySQL 组织树表结构与数据 | 1 文件 / 67 行 |
| `mysql_connect/` | MySQL Connector/C++ 头文件与 `.so`/`.a` 库（构建依赖） | 17 文件 |
| `winIwant/` | Visual Studio 解决方案（`winIwant.sln` VS2015、`winIwant-vs2022.sln`）+ 巨量编译产物 | 239 源文件，产物上万 |
| `website/` | 极简站点（`index.html` + `.htaccess` + 发布脚本） | 4 文件 |
| `sample-code/` | 学习/验证用小例子（rsa、socket、serial、bmc……） | 338 文件 |
| `ai/` | **本项目文档产出**：豆包分析 + 本知识库 + skill | 454 文件 |
| `file.exe` / `file.7z` | 根目录散落的二进制与压缩包 | 99.5 KB / 34.2 MB |

## 规模分布（哪些包是"大头"）

| 包 | 文件 | 行数 | 类 | 性质 |
| --- | ---: | ---: | ---: | --- |
| `instruction` | 1902 | 26,628 | 951 | x86/AVX 指令词条 |
| `keywords` | 524 | 6,330 | 262 | C++/PHP/Python/Java 关键字词条 |
| `sql` | 370 | 4,440 | 185 | SQL 关键字词条 |
| `security` | 362 | 7,240 | 181 | 安全域词条（含 `security_*` 细分） |
| `satellite` | 336 | 6,709 | 168 | 卫星子系统词条 |
| `car` | 326 | 6,509 | 163 | 汽车子系统词条 |
| `ocean` | 192 | 3,840 | 96 | 海洋/船舶域 |
| `sensor` | 180 | 3,546 | 87 | 传感器域 |
| `operator` | 156 | 3,307 | 77 | C++ 运算符词条 |
| `math` | 136 | 5,055 | 67 | `sin`/`pow` 等数学函数对象 |
| `code` | 134 | 2,951 | 67 | **生成器**：`code_class`/`code_function`… |
| `message` | 120 | 2,376 | 59 | 消息类型词条 |

→ 前 12 个包占全库约 **72%** 的文件量，且基本都是"词条型"。**真正的引擎只有 `object`(2106 行) + `code`/`class`/`main`/`build`/`make`/`path`/`file`/`text` 这十来个包。**

## 产物与入口

- **Linux**：`sh build.sh` → `src/iwant` → 移动到仓库根 `iwant`（`build.sh` 第 3 步）。编译单元固定为 `src/*.cpp math file code stock time symbol make build my_sql home syntax`（见 `src/Makefile` 的 `source_code` 变量）——**注意：`car`/`satellite` 等域包默认不参与主程序编译**。
- **Windows**：`winIwant/winIwant.sln`（或 `winIwant-vs2022.sln`）→ `winIwant.exe`（Release 实测 486 KB）。
- **生成器 CLI**：仓库自带 `batch/code.exe`（468 KB，与 `winIwant/x64/Release/code.exe` 同源），所有 `batch/*.bat` 都以 `code ...` 调用（见 04-codegen）。

## 一句话记住

> `Object` 给每个名词发一张身份证（uuid/id/名字/别名/时间/空间/动作位），`g_code.i` 把它们聚成一个宇宙，`code` 命令按模板把新名词打印成 C++ 代码。
