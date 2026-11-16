# 15 按 Cfile 协议构造 class / command / action 的 CLI

> 本篇是对"如何用你自己的方式把 CLI 建起来"的完整回答。核心不是另起一套框架，而是**把 Cfile 已经验证过的命令对象写法抽成协议，再套到 class / command / action 三个对象上，最后加一个前端控制器**。
> 代码已落地到 `src/cli/`、`src/class/`、`src/command/`、`src/action/`，尚未编译（本机无 g++/cl），按下文第 7 节自检。

---

## 1. 先复述你的构思

你的设计是**数据驱动的命令对象**，不是"一堆 if/else 的 CLI"：

```
Object
 ├─ 动作表 Action[]        ← "这个对象能做什么"是数据，不是代码
 │    { action_class, bit, relation, fn, name, help }
 ├─ deal_cmd(argc,argv)    ← 固定六步：查输入→存 cmd→silent→取 action→设参数→执行
 ├─ set_action_parameter() ← 把 argv 按 action 翻译成对象字段（参数槽）
 └─ do_action()            ← 按 action 调用真正的业务方法
```

`Cfile` 是这套写法最完整的样板：45 条动作、每条带 `HELP` 文案、按动作分支解析参数、`do_action` 一对一调用方法、`main_return_value` 把结果带回进程退出码。

**所以"CLI 构建"在你的体系里 = 给每个命令对象补上这套协议**，而不是在外面写 argparse。

---

## 2. 从 Cfile 抽出的命令对象协议（七件套）

| # | 组成 | Cfile 出处 | 作用 |
| --- | --- | --- | --- |
| 1 | `<obj>_action.h` | `file_action.h` | `enum class XxxAtcionClass`（分组）+ `enum class XxxAtcion`（动作位/别名） |
| 2 | 帮助宏 | `file_action.i` 顶部 | 每条动作一个 `#define XXX_HELP "usage"` |
| 3 | 动作表 + COUNT | `file_action.i` 底部 | `Action xxx_action[]` 以全 0 项收尾 + `#define COUNT (sizeof/sizeof)` |
| 4 | 参数槽（成员字段） | `file.h` | 每条动作的入参落到对象字段，不用局部变量 |
| 5 | `set_action_parameter` | `file.cpp:671` | 按 `this->action` 分支解析 argv，缺参就 `action_help()+return -1` |
| 6 | `do_action` | `file.cpp:639` | `if (action==X) set_main_ret(method());` |
| 7 | `deal_cmd` 六步 | `file.cpp:790` | 查数量→存 cmd→silent→get_action→set_param→do_action |

**照抄时最容易漏的四点**

- `get_action` 返回 0 = 没命中，此时才允许 `atoll(argv[1])` 当数字动作；
- 动作表必须以 `{0,0,EatcionRelation::none,nullptr}` 结尾，`is_action_end()` 靠它停；
- `main_return_value` 默认 -1，成功动作要 `set_main_ret(0)`，`main` 里 `return o.main_return_value` 才是正确退出码；
- `.i` 文件只能被一个 TU include（里面是数组定义，不是 inline），否则重复符号。

---

## 3. 落地结构

```
src/cli/                     前端控制器（唯一进程入口）
  cli_action.h / .i          Ccli 的动作：help list version describe tables run
  cli_arg.h  / .cpp          Carg：--key=value / --flag / -abc / -- / -
  cli_out.h  / .cpp          out::data/info/warn/error + --json 信封 + UTF-8 控制台
  cli.h      / .cpp          Ccli：注册表 + 索引 + run() + 六步协议

src/class/                   命令对象：造类
  class_action.h / .i        create h cpp main exist list check help
  class.h / class.cpp        协议实现（--path / --force / --dry-run）

src/command/                 命令对象：执行外部命令
  command_action.h / .i      run exec spawn exit esc status help
  command.h / command.cpp    协议实现（Crun/Cexec/Cexit 仍作 worker）

src/action/                  命令对象：动作表自省（把 Action[] 变成可查询数据）
  action_action.h / .i       list describe find bit help
  action.h / action.cpp      注册表 + 查询实现
```

### 3.1 Ccli —— 前端控制器

职责三件：**装配对象宇宙 → 建索引 → 把命令行路由给对应对象**。

```cpp
int Ccli::run(int argc, char *argv[])
{
    Ccli cli;
    cli.add_global_objects();   // 挂 g_code.i 里的全局对象（今天 62 个）
    cli.register_family(&cli);  // name/alias -> Object* 索引，O(1) 查找
    Caction::register_table("cli", cli_action, (int)CLI_ACTION_COUNT);
    return cli.run_cmd(argc, argv);
}
```

路由规则与 `Object::dispatch_cmd` 同语义，但不再是线性递归：

```
iwant <object> <action> [param...] [--json|--quiet|--verbose]
  ↓ 索引命中
o->deal_cmd(n, &argv[1])       // 子对象看到 argv[0]=object, argv[1]=action
```

找不到对象时**报错 + 退出码 2**，不再静默返回 -1。

### 3.2 Cclass —— 把"造类"从裸 argv 变成动作表

改造前的问题：`deal_cmd` 直接 `for(argv) create(argv[i])`，于是 `code class help` 会生成 `help.h/help.cpp`。

改造后：

| 动作 | 命令 | 行为 |
| --- | --- | --- |
| create | `iwant class create car_door` | 写 `.h`+`.cpp`（已存在则跳过，除非 `--force`） |
| h / cpp | `iwant class h car_door` | 只写其中一种 |
| main | `iwant class main car_door` | 既有文件无 `main` 时追加 `#if CAR_DOOR_TEST` 块 |
| exist / list / check | 同上 | 报告存在性 / 打印目标路径 / 校验标识符 |
| help | `iwant class help` | 打印动作表，不再产文件 |

兼容：`iwant class car_door`（无动作词）仍等同 `create`，走 `compat=1` 分支，老脚本 `batch/*.bat` 不受影响。

顺带修的两处：
- 写入改用 `std::ofstream` + `is_open()` 校验，避开 `fstream::in|out|trunc` 在新文件上失败（13-defects S2-6）；
- `--dry-run` 只打印 `[dry-run] write xxx`，不落盘。

### 3.3 Ccommand —— 让"执行命令"也成为命令对象

| 动作 | 命令 | 实现 |
| --- | --- | --- |
| run / exec | `iwant command run dir` | `Crun::func` → `system()`，退出码进 `this->code` |
| spawn | `iwant command spawn ping -n 2 127.0.0.1` | `std::thread([cmd]{system(...)}).detach()`（按值捕获，避免悬空） |
| exit | `iwant command exit 3` | 软退出：写 `main_return_value`，由 CLI 决定是否真退出（可测试） |
| esc | `iwant command esc a"b` | JSON/shell 转义 |
| status | `iwant command status` | 打印上次退出码 |

`Crun/Cexec/Cexit/Cesc` 保留为 worker，`Ccommand` 只做 CLI 门面，职责分离。

### 3.4 Caction —— 把动作表变成可查询的元数据

这是让"万能 CLI"能自解释的关键：**帮助不再靠文档，而是从 `Action[]` 里读**。

```cpp
Caction::register_table("class", class_action, (int)CLASS_ACTION_COUNT);
```

注册表用**函数内静态**（`table_map()`）而不是全局静态对象，规避跨 TU 初始化顺序问题。

| 命令 | 输出 |
| --- | --- |
| `iwant tables` | 已注册的动作表及动作数 |
| `iwant describe file` | file 对象全部动作 + 帮助串 |
| `iwant action describe cat` | 哪个表提供 cat、bit 值、帮助 |
| `iwant action bit 4` | 反解位掩码 → 动作名 |

已注册：`cli / file / main / class / command / action`（file、main 在各自 `my_init` 里只注册一次）。

---

## 4. 五个命令对象的协议对照

| 项 | Cfile | Cclass | Ccommand | Caction | Ccli |
| --- | --- | --- | --- | --- | --- |
| 动作枚举 | FileAtcion(45) | ClassAtcion(8) | CommandAtcion(7) | ActionAtcion(5) | CliAtcion(6) |
| 参数槽 | f_name/range/... | tags/s_path/force/dry_run | args/s_cmdline/code | s_table/s_action/n_bit | index/arg/forward_arg |
| 六步 deal_cmd | 有 | 有 | 有 | 有 | 有 |
| 帮助宏 | 有 | 有 | 有 | 有 | 有 |
| 未知动作 | 返回 -1 | 报错+帮助 | 报错+帮助 | 报错+帮助 | 退出码 2 |
| 副作用保护 | 无 | --force/--dry-run | 无 | 只读 | 只读 |

---

## 5. 用法

```bash
# 自省
iwant                              # 用法 + 对象列表
iwant list --json
iwant describe class
iwant action describe create
iwant tables

# 造类（新写法）
iwant class create car_door --path src/car --dry-run
iwant class create car_door car_wheel --path src/car
iwant class main car_door --path src/car

# 老写法仍然可用（batch 脚本不动）
code class car_door

# 既有对象直接复用
iwant file cat src/car/car.h --hex
iwant my_sql query "show databases"

# 执行外部命令
iwant command run dir
iwant command spawn ping -n 2 127.0.0.1
```

> 对象名是第一个词：`iwant class create x` 里 `class` 是对象、`create` 是动作——与 `dispatch_cmd` 的 `isMe(argv[1])` 语义一致。

---

## 6. 兼容与破坏面

| 项 | 状态 |
| --- | --- |
| `batch/*.bat`（`code class xxx`） | 保持可用（Cclass compat 分支） |
| `make main=CODE` 产出的 `iwant` | 行为不变（Ccode 自身 CLI 未改） |
| 新增 `make main=CLI` | 产出统一入口 `iwant` |
| `.i` 单 TU 规则 | 每个 `*_action.i` 仍只被对应 `.cpp` include |
| 新增 .cpp 参与编译 | `src/Makefile` 的 `source_code` 已追加 `cli/ class/ command/ action/` |

---

## 7. 构建与自检

```bash
cd src
make main=CLI          # 生成 ./iwant，入口是 cli.cpp 的 main
./iwant
./iwant list
./iwant describe class
./iwant class create demo_t --path /tmp --dry-run
```

**编译前确认三件事**（本机无编译器，未实测）：

1. `all/all_h_include.h` 还没包含新头文件——但 `cli.cpp` 自带 `#include "cli.h"`，不依赖总头；只有测试 main 需要总头，可用 `batch/build-all_h_include.sh` 重建。
2. `src/Makefile` 已加 4 个包；若用 Windows 工程，需把 `src/cli/*.cpp` 加入 `.vcxproj`。
3. `class_action.i` 只在 `class.cpp` 里 include，不要放到头文件。

---

## 8. 新增第 4 个命令对象的 5 步

1. 建 `src/<pkg>/<pkg>_action.h`：两个 enum（分组 + 动作位）。
2. 建 `<pkg>_action.i`：帮助宏 + `Action <pkg>_action[]` + `<PKG>_ACTION_COUNT`。
3. 在 `<pkg>.h` 加参数槽字段；在 `<pkg>.cpp` 实现 `set_action_parameter` / `do_action` / `deal_cmd`（照抄 Cclass）。
4. 构造函数里 `Caction::register_table("<pkg>", ...)`，这样 `iwant describe <pkg>` 自动可用。
5. 把 `<pkg>/*.cpp` 加进 `src/Makefile` 的 `source_code`；若要在 `iwant list` 里常驻，再挂进 `g_code.i/g_code_func.i`。

---

## 9. 这次落地覆盖了 14-cli-roadmap 的哪些项

| 路线图项 | 状态 |
| --- | --- |
| Phase 0 单一入口 | 已做（`Ccli::run` + `main`） |
| Phase 0 help/list/version | 已做（`help/list/version/describe/tables`） |
| Phase 0 未知命令报错且零副作用 | 已做（对象/动作/标签三层校验） |
| Phase 0 保留 code 别名 | 已做（compat 分支） |
| Phase 1 参数解析 | 已做（`Carg`：`--k=v`/`-abc`/`--`/`-`） |
| Phase 1 输出分流 | 已做（`out::data/info/error`；核心 4 包替换待做） |
| Phase 1 退出码 | 已做（`ErrorCode` + `main_return_value` 翻译） |
| Phase 1 --json | 已做（信封 `{ok,object,action,data,error}`） |
| Phase 2 注册表 + 索引 | 已做（`index` + `Caction` 表注册） |
| Phase 2 懒加载 | 未做 |
| Phase 2 stdin `-` | 未做（`Carg` 已保留 `-` 为位置参数） |
| Phase 3 install/补全/测试 | 未做 |

---

## 10. 下一步（按优先级）

1. **编译一次**（`make main=CLI`），把报错发我收敛（重点看 `action.cpp` / `cli.cpp` 的命名空间与 using）。
2. 把 `Cfile::deal_cmd` 也切到 `Object::deal_cmd(5 参)` 的通用六步，减少重复。
3. `Ccli::run_object` 在 `--json` 时把子对象输出聚合成信封（当前是子对象直接打印）。
4. 给 `Carg` 补 `--key value` 形式与类型校验。
5. 用 `tests/cli/cases` 固化 10 条断言（help/未知对象/未知动作/dry-run/exit code）。
