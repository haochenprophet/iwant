# 01 · Linux 基础入门

> 原文出处：CSDN「斑马819」《Linux基础入门》系列，共 1 篇，发布于 2026-07-20。

## 一、系列定位

这是整个知识库的第一站，也是嵌入式 Linux 学习路径的起点：不讲内核原理，先把「怎么进系统、怎么敲命令、怎么改权限、怎么编辑并编译一个程序」跑通。它解决的是从图形界面转向命令行的第一道门槛，为后续 C 语言、数据结构、系统编程与 ARM 裸机系列提供统一的操作环境和命令行语汇。全系列只有一篇，却覆盖了入门阶段几乎所有高频操作，适合当作随手翻查的命令速查底稿。

## 二、前置知识与环境

- 基础：不需要任何 Linux 使用经验；准备一台装好的 Linux 虚拟机（Virtual Machine），能以普通用户登录（文中示例用户 `linux`，主机名 `linux-virtual-machine`）。
- 虚拟机操作：`Ctrl + Alt + Enter` 切换全屏，`Ctrl + Alt + T` 打开终端（Terminal），`Ctrl + Shift + T` 新建终端窗口。
- 终端环境：绝大多数操作在终端完成，提示符形如 `linux@linux-virtual-machine:~$`。
- 编辑器：使用系统自带的 vi（Visual Editor），负责创建和修改源码文件。
- 编译器：gcc（GNU Compiler Collection），把 C 源码编译为可执行文件。
- 权限：日常以普通用户操作，需要管理员权限时用 `sudo` 临时提权。

## 三、知识脉络

全文按「先环境、再概念、后操作、最后动手」推进，四条线并行：

- 操作线：虚拟机快捷键 → 终端提示符 → 命令格式 `command [options] arguments` → 用 man（Manual Pages）查帮助。
- 概念线：两类用户 → 文件类型（File Type）符号 → 权限位（Permission Bits）→ 绝对路径（Absolute Path）与相对路径（Relative Path）→ 树形目录结构。
- 命令线：`ls` → `touch`/`mkdir` → `cp`/`mv`/`rm`/`rmdir` → `cd`/`pwd` → 综合练习。
- 落地线：vi 三种模式 → 写第一个 C 程序 → gcc 编译 → `./hello` 运行。

后续系列对它的依赖很直接：02-c-language 沿用它建立的 vi + gcc 工作流，04-linux-sysprog 在文件 IO 中继续使用这里的路径、文件类型与权限位，03-data-structure 及 05、06 嵌入式系列的代码也都要在同一套命令行环境里编译运行。

## 四、逐篇速览

| 篇号 | 标题 | 一句话概括 | 关键知识点 |
| --- | --- | --- | --- |
| 01 | [虚拟机、终端及常用命令详解](01-虚拟机、终端及常用命令详解.md) | 从虚拟机快捷键与终端提示符讲到用户、权限、文件命令、目录结构、vi 与 gcc，最后跑通第一个 C 程序。 | 两类用户与 `su`、命令格式、man 八类、`ls -l` 权限位、`chmod`/`chown`/`chgrp`、`touch`/`rm`/`mkdir`/`rmdir`/`cd`/`pwd`/`cp`/`mv`、绝对与相对路径、vi 三模式、`gcc -o` |

## 五、核心要点

### 5.1 终端、用户与命令格式

- 提示符 `linux@linux-virtual-machine:~$` 分四段：`linux` 用户名、`linux-virtual-machine` 主机名、`~` 当前所在目录（家目录，Home Directory）、`$` 普通用户；root（超级用户，Superuser）的提示符以 `#` 结尾。
- 普通用户权限受限、可创建多个、用户名不能叫 `root`，家目录为 `/home/用户名`；root 全系统只有一个，家目录为 `/root`；切换用户用 `su 用户名`，例如 `su root`。
- 命令统一格式为 `command [options] arguments`，即命令、参数、对象，例如 `ls -l`；用法不明时用 `man ls` 查手册，手册分 1 普通命令、2 系统调用、3 库函数、4 设备文件、5 文件格式、6 游戏、7 杂项、8 管理员命令。

### 5.2 文件类型、权限与属主

- Linux 一切皆文件；`ls -l` 首位表示文件类型：`-` 普通文件、`d` 目录、`l` 链接文件、`b` 块设备、`c` 字符设备、`p` 管道、`s` Socket。
- 后九位是权限位，按 `rwx` 分三组，依次为文件拥有者、同组用户、其他用户；`r` 读、`w` 写、`x` 执行。`chmod 权限 文件名` 用数字位 `4`=r、`2`=w、`1`=x，相加得 `6=rw-`、`7=rwx`、`5=r-x`、`4=r--`；`chown 用户 文件` 改所属用户，`chgrp 组 文件` 改所属组；`sudo 命令` 让普通用户临时以管理员权限执行。

```bash
ls -l
# drwxr-xr-x 3 linux linux 4096 Jul 20 Desktop
chmod 664 test.txt
chown root test.txt
chgrp root test.txt
```

### 5.3 目录、路径与文件操作

- 根目录 `/` 是树形起点：`/bin` 系统命令、`/boot` 启动文件、`/dev` 设备文件、`/etc` 配置文件、`/home` 普通用户目录、`/root` 管理员目录、`/proc` 进程信息、`/var` 日志文件。
- 绝对路径从 `/` 写起，如 `/home/linux/Desktop`，在任何位置都不变；相对路径相对当前位置，如 `Desktop`，换个目录就指向别处。
- 查看与切换：`ls`、`ls -l`、`pwd`，以及 `cd dirname`、`cd ..`、`cd .`、`cd ~`、`cd /`。
- 创建与删除：`touch hello.txt`、`mkdir test`、`mkdir test1 test2 test3`、`rm hello.txt`、`rmdir test`（仅空目录）、`rm -rf test`。
- 复制与移动：`cp file1.txt test/`、`cp test1 test2 -rf`（`-r` 递归、`-f` 强制）、`mv file.txt test/`、`mv old.txt new.txt`（改文件名）；文末综合练习就是用 `mkdir`、`touch`、`cp`、`mv` 串起一次目录重组。

### 5.4 vi 编辑与 gcc 编译

- vi 有三种模式：普通模式（默认进入）、插入模式（按 `i` 输入文字）、命令模式（`ESC` 后输入 `:` 进入）；`:wq` 保存退出、`:w` 只保存、`:q` 退出、`:q!` 强制退出、`:wq!` 强制保存退出。
- `gcc hello.c` 默认生成 `a.out`，`gcc hello.c -o hello` 指定程序名称，`./hello` 运行并输出 `Hello World!`。

```bash
gcc hello.c -o hello
./hello
```

## 六、易错点与踩坑

- `rm -rf /` 千万不要执行，原文专门用警告标出：`-r` 递归、`-f` 强制，而删除对象又是根目录 `/`，这个组合没有挽回余地。
- `rmdir` 只能删除空目录，目录里还有内容时必须改用 `rm -rf`。
- Linux 文件名区分大小写，`hello.txt` 与 `Hello.txt` 是两个不同文件；文件名不建议带空格，推荐 `my_file.txt` 这种写法。
- Linux 不靠后缀区分文件类型，但原文仍建议保留 `.txt`、`.c`、`.cpp` 等后缀，方便人和工具识别。
- 提示符末尾 `$` 是普通用户、`#` 是 root，动手前先看清身份；`chown`、`chgrp` 改动属主属组属于管理员操作，普通用户通常需借 `sudo` 提权。

## 七、关键术语

| 术语 | 说明 |
| --- | --- |
| 终端（Terminal） | 输入命令、查看输出的字符界面，Linux 的大部分操作在此完成 |
| root（超级用户，Superuser） | 拥有系统最高权限、全系统唯一的用户，提示符以 `#` 结尾 |
| 家目录（Home Directory） | 用户登录后的默认目录，普通用户为 `/home/用户名`，root 为 `/root` |
| 手册页（Manual Pages） | `man` 命令调出的帮助文档，按 1 至 8 分为八类 |
| 权限位（Permission Bits） | `ls -l` 输出中的后九位，三组 `rwx` 依次对应拥有者、同组用户、其他用户 |
| 绝对路径（Absolute Path） | 从根目录 `/` 写起的路径，如 `/home/linux/Desktop`，在任何位置都不变 |
| 相对路径（Relative Path） | 相对当前目录书写的路径，如 `Desktop`，随所在位置改变 |
| 文件类型（File Type） | `ls -l` 首位的符号，`-` 普通文件、`d` 目录、`l` 链接、`b` 块设备、`c` 字符设备、`p` 管道、`s` Socket |
| vi（Visual Editor） | 三模式文本编辑器，普通模式、插入模式、命令模式 |
| gcc（GNU Compiler Collection） | C 语言编译器，`gcc hello.c` 默认生成 `a.out`，`-o` 可指定名称 |

## 八、延伸与衔接

- 先进入 [02 · C 语言](../02-c-language/README.md)：本系列停在 `hello.c` 的编译运行，02 系列接着讲数据类型、流程控制、数组、指针、构造类型与内存管理，vi + gcc 的工作流保持不变。
- 再练 [03 · 数据结构](../03-data-structure/README.md)：顺序表、链表、队列、二叉树都要在 Linux 下用 C 落地，依赖本系列建立的文件组织与编译习惯。
- 然后进 [04 · Linux 系统编程](../04-linux-sysprog/README.md)：这里的文件类型、权限位以及 `/proc`、`/dev` 只是点到为止，标准 IO、文件 IO、进程、线程、网络各篇才会真正展开。
- 走嵌入式方向则接 [05 · 8051 单片机](../05-mcu-8051/README.md) 与 [06 · ARM i.MX6ULL](../06-arm-imx6ull/README.md)：两系列的大量操作仍在命令行中完成，本系列的目录、路径与权限概念会反复用到。
