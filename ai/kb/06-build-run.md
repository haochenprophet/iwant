# 06 构建与运行

## Linux

### 依赖（README 原文 + 实测）

```bash
sudo apt-get install uuid-dev make g++
sudo apt-get install libmysqlclient-dev      # MySQL 8: mysql-apt-repo 后安装
```

- `uuid-dev` → `<uuid/uuid.h>`（`src/uuid/uuid.h` 在 `LINUX_OS` 下引用）
- `libmysqlclient-dev` → `-lmysqlclient`（`src/Makefile` 链接 `-L/usr/lib/mysql`）
- `mysql_connect/` → MySQL Connector/C++ 的头与 `libmysqlcppconn2*.so/.a`，由 `-I $(MYSQL_CONCPP_DIR)/include` 与 `-DSTATIC_CONCPP` 引入

### 一键构建

```bash
sh build.sh code          # 构建生成器（main=CODE）
sh build.sh code 1        # 同上并开 DEBUG
```

`build.sh` 做三件事：删旧 `src/iwant` → `cd src && make main=${1^^} debug=${2^^}` → 把 `src/iwant` 移到仓库根并打印 `Build done!/Build fail!`。

### 手动构建

```bash
cd src
make                      # 等价 make main= debug=
make main=CODE            # → -DCODE_TEST=1，入口变成 code.cpp 的 main
make clean
```

### 变量语义（关键）

| 变量 | 变成什么 | 作用 |
| --- | --- | --- |
| `main` | `-D$(main)_TEST=1` | **选择哪个 .cpp 里的 `#if XXX_TEST` main 作为程序入口** |
| `debug` | `-D$(debug)_DEBUG=1` | 打开对应类的调试开关 |
| `src`, `sql` | 追加源码列表 | 手工补编译单元 |

`source_code` 固定为：`*.cpp math/*.cpp file/*.cpp code/*.cpp stock/*.cpp time/*.cpp symbol/*.cpp make/*.cpp build/*.cpp my_sql/*.cpp home/*.cpp syntax/*.cpp`

### 编译单个包

`src/<pkg>/Makefile` 是同一模板的复制（只改 `MK_TAG` 与相对路径），例如：

```bash
cd src/car
make main=CAR        # 只让 car.cpp 的测试 main 生效
./car
```

## Windows

1. 安装 VS2015（`winIwant.sln` 头部 `VisualStudioVersion = 14.0.25420.1`）或 VS2022（`winIwant-vs2022.sln`）。
2. 打开 `winIwant/winIwant.sln`，配置 `Debug|Release × x64|x86`。
3. 运行依赖：
   - `libmysql.dll` 必须与 exe 同目录（仓库里已在 `winIwant/x64/Debug/`、`winIwant/x64/Release/` 放好 4765 KB 的副本）
   - `winIwant/openssl-3.2.1.zip` 为可选依赖包（尚未解压）
4. 现有产物（已入库，体积巨大）：

| 产物 | 大小 | 位置 |
| --- | ---: | --- |
| `winIwant.exe` | 486.5 KB | `winIwant/x64/Release/` |
| `winIwant-vs2022.exe` | 4326.5 KB | `winIwant/x64/Debug/` |
| `code.exe` | 468 KB | `winIwant/x64/Release/`、`batch/` |
| `*.obj` | 5,615 个 / 共 4.82 GB | `winIwant/winIwant/x64/Release/`（`winIwant/` 整体 14.62 GB，是 14.9 GB 仓库体积的主因） |

## 命令行用法（构建后）

生成器是同一份代码、不同入口。以下命令在 `batch/` 目录下执行（那里有 `code.exe`）：

| 命令 | 作用 | 实现 |
| --- | --- | --- |
| `code class car_door` | 生成 `car_door.h` + `car_door.cpp` 骨架（已存在则跳过） | `Cclass::create` |
| `code class car_door car_wheel` | 一次多个 tag | 同上，循环 argv |
| `code main create_main car_door` | 若 `car_door.cpp` 无 main，则追加 `#if CAR_DOOR_TEST` 测试 main | `Cmain::create_main_cmd` |
| `code ../src/ cstdio` | 生成 `cstdio_g_code.h/.i/_func.i`（Ccode 形态：`<src_path> <pack_name> [action]`） | `Ccode::deal_cmd` |
| `code runme <name>` | 走 `dispatch_runme`，按名字找到对象并执行 | `Object::dispatch_cmd` |
| `code build create_all_h` | **理论用法，实际无效**（`Cbuild` 未实现 `deal_cmd/do_action`，见 10-pitfalls P5） | — |

## 单类测试怎么跑

每个 `.cpp` 末尾：

```cpp
#ifndef CAR_TEST
#define CAR_TEST 0//1          // ← 手工改成 1 也能开
#endif

#if CAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[]) { WHERE_I; return 0; }
#endif
```

两种开启方式：

1. 改文件里的 `0` 为 `1`；
2. 编译时 `-DCAR_TEST=1`（`make main=CAR` 就是这条路）。

`WHERE_I` 是打印位置信息的宏（`src/ex_func` 或 `object_def.h`），用于确认"跑到这里了"。

## 构建后自检清单

```bash
./iwant --help 2>&1 | head          # 至少不应段错误
cd batch && ./code class demo_test && ls demo_test.* && rm demo_test.*
```

> 注意：`code` 生成文件到**当前工作目录**，测试后请清理。

## 已知构建/运行风险

见 [10-pitfalls.md](10-pitfalls.md)：P2（Linux 下 `all_h_include.h` 全用反斜杠路径）、P3（缺 `deploy`/`text` 两个包的头）、P5（`create_all_h` 未实现）、P6（`Ccode` 4 KB 缓冲分配失败即 `exit(-1)`）。
