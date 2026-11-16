# 10 坑与陷阱（全部经实测）

> 每条都给出复现依据。★ 表示会直接导致构建/运行失败。

## ★P1 `include/` 是过期镜像，不要用

- `include/`（3068 个 .h，LastWrite **2024-05-22**）与 `src/`（**2024-06-22**）不是同一版本。
- 内容也不同：`include/car.h` 里写 `#include "../object.h"`（扁平布局），`src/car/car.h` 写 `#include "object/object.h"`（分层布局）。两者 MD5 不同。
- `src/Makefile` **完全不引用** `include/`（只 `-I./ -I../`）。
- 结论：**唯一有效源是 `src/`**；`include/` 是历史遗留，误改无效。

## ★P2 `all_h_include.h` 全部使用 Windows 反斜杠路径

- 实测 3067 条 include，**100% 为 `#include "car\car.h"` 形式，0 条正斜杠**。
- 在 Linux/GCC 下反斜杠不是路径分隔符 → 找不到文件 → 编译失败。
- 若要在 Linux 使用：改用 `batch/build-all_h_include.sh`（它输出正斜杠）重新生成，但注意它只在**当前目录**执行且随即 `make`。

## ★P3 `all_h_include.h` 漏了两个包

实测覆盖 99/101 个包，**缺 `deploy` 与 `text`**。任何依赖 `Ctext_*` / `Cdeploy` 的测试 main（`#include INCLUDE_ALL_H`）都会因类型未声明而失败。

## ★P4 忘记 `main=` 会导致链接失败

`src/Makefile` 用 `-D$(main)_TEST=1` 选择入口。`sh build.sh` 不带参数时 `main` 为空 → `-D_TEST=1`，结果**没有任何 .cpp 的 `#if XXX_TEST` 被打开 → 没有 `main()` → 链接报 undefined reference to main**（推断，依据：全库唯一入口都在测试宏内，Makefile 无其他 main 源）。

正确用法：`sh build.sh code` / `make main=CODE`。

## ★P5 `code build create_all_h` 是空动作

- `src/build/build_action.i` 里声明了动作 `create_all_h`（映射到 `CbuileAtcionClass::create`）。
- 但 `src/build/build.cpp` 只有 `my_init`，**没有 `do_action` 也没有 `deal_cmd` 覆盖**，`build.h` 也没声明。
- 于是 `code build create_all_h` 落到 `Object::deal_cmd(argc,argv)`，只把 argv 打印一遍就返回 -1。
- 实际生成 `all_h_include.h` 的是 **`batch/build-all_h_include.bat` / `.sh`**（`dir`/`ls` 循环拼 include）。
- 附带 bug：该 `.bat` 里 `dir ... \tree\*.h > dir_tree.log`，但循环写的是 `for /F ... in (tree_math.log)` —— **文件名拼错，tree 包头从未被写入**（实测 `all_h_include.h` 中 `tree/` 条目数为 0）。

## P6 `Ccode` 的 4 KB 固定缓冲

- `CODE_BUF_LEN = 4*1024`；`Ccode` 构造时 `if (0 == allot(CODE_BUF_LEN, &code_buf)) exit(-1);` → 分配失败**直接退出进程**。
- `create_head/create_tail` 用 `sprintf(code_buf, G_CODE_*_PACKAGE, package, package)` 写包名；**包名过长会溢出**（无 `snprintf` 保护）。

## P7 信号注册是"全局假象"

`Object::register_signal(signum)` 实际执行 `signal(signum, signal_handler)`，而 `signal_handler` 只转发给文件级全局对象 `object_global`：

```cpp
Object object_global;
void signal_handler(int signum) { object_global.rejoin_signal(signum); ... exit(signum); }
```

- 每个 `Object` 构造都调用 `register_all_signal()`（6-8 个信号），**但注册的是同一个全局 handler**，构造 1 万个对象也不会有 1 万套信号处理。
- `Object::rejoin_signal()` 是空实现（返回 -1，仅打印），所以 SIGSEGV 等只会 `exit(signum)`。
- 想在对象级别做信号处理，**当前框架做不到**。

## P8 `name` 会被改写，`alias` 不会

`Object` 构造里：`name = "Object"; alias = name; ... name += std::to_string(id);`
→ 实例的 `name` 变成 `"Object7"`，`alias` 仍是 `"Object"`。

- `isMe("Object")` 能命中（比对 alias），`isMe("Object7")` 也能命中（比对 name）。
- 子类 `my_init()` 会把 `name/alias` 覆盖为 `"Ccar"/"car"`，**id 后缀消失** → 两个 `Ccar` 实例的 `name` 相同，唯一性只剩 `id`/`uuid`。
- 若要靠名字区分实例，必须在 `my_init` 后自行追加后缀。

## P9 MySQL 路径硬编码

`src/Makefile`：`-L/usr/lib/mysql -lmysqlclient`。MySQL 装在 `/usr/lib/x86_64-linux-gnu`（Debian/Ubuntu 默认）时会链接失败，需手改 `-L`。

## P10 工作区 14.9 GB，但 git 只跟踪 10 个 .obj

- 磁盘产物实测：`.obj` **5,615 个 / 4.82 GB**；`winIwant/` 整体 **6,291 个文件 / 14.62 GB**；全仓库不含 `.git` 为 **21,304 个文件 / 14.9 GB**（绝大部分未跟踪）。
- `git ls-files` 显示仅跟踪 **10,544 个文件**，其中 `.obj` 只有 10 个，`winIwant/` 下 431 个。
- 后果：`rg`/`find`/`Get-ChildItem -Recurse` 极慢；任何全量扫描必须先排除 `x64|Debug|Release|ipch|.vs`。
- `.gitignore` 里 `winIwant/x64/*` 与实际路径 `winIwant/winIwant/x64/*` 不完全对齐（两者都列了，但产物仍在工作区堆积）。

## P11 中文文档的编码坑

`ai/*.md`（豆包产出）与部分说明是 UTF-8，但 PowerShell 的 `Get-Content` 在中文 Windows 默认按 ANSI(GBK) 解码 → 打开就是乱码（本 KB 生成过程中实际遇到）。

- 用 `Get-Content -Encoding UTF8`，或直接用 UTF-8 感知的读工具。
- 源码本身是 ASCII + 少量英文注释，不受影响。

## P12 命令派发是 O(n) 全树遍历

`dispatch_cmd` 在 `family` 上线性 `for` 递归；若把 3117 个类都 `addMe` 到同一棵树，每次命令要遍历上千节点且每层都做字符串比较。**目前之所以"快"，是因为全局只注册了 7 个包的类。**

## P13 `ai/` 未纳入版本控制

`git status` 显示 `?? ai/`（与 `?? file.7z`）。这意味着本知识库、豆包分析、skill **不会被提交**，换机器/清理工作区就丢。建议：

```bash
git add ai/ && git commit -m "Add iwant knowledge base and skill"
```

## P14 根目录散落大文件

`file.exe`(99.5 KB)、`file.7z`(34.2 MB) 位于仓库根，`.gitignore` 只忽略了 `file.exe`（`file.7z` 为未跟踪状态）。易误提交。
