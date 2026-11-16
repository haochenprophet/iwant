# 19 包级代码约束（package / namespace / class / command / action）

> 上一层：`17-object-style.md` 管"单个对象/类怎么写"。
> 本层：管"一个包怎么组织"——目录、命名空间、类角色、命令定义、动作表、依赖方向、构建。
> 全部规则从 `src/file/` 的实证提炼（对照包：`code`、`main`、`cstdio`），反例会明确标注。
> 级别：**P** 必做 / **Q** 禁止 / **R** 建议。

---

## 0. 五层约束速查

| 层 | 约束锚点 | 一句话 |
| --- | --- | --- |
| package | `src/<pkg>/` + `Makefile` | 目录即包，包名四处一致 |
| namespace | `n_<pkg>` | 一包一命名空间，关闭后 `using` |
| class | `C<pkg>` / `C<pkg>_<noun>` | 包根类 + 可选 worker/POD |
| command | `<pkg>_action.h` + `deal_cmd` | 一包一个命令对象 |
| action | `<pkg>_action.i` | BITn 位值 + 命令词 + HELP 宏 |

---

## 一、必做（P）

### P1 目录即包：`src/<pkg>/`

包名在四个地方必须完全一致：**目录名 = 命名空间后缀 = `alias` = Makefile 的 `MK_TAG`**。
file 证据：`src/file/` ↔ `n_file` ↔ `alias="file"` ↔ `MK_TAG = file`。

### P2 包根类 = 包名

```
src/file/file.h        -> class Cfile
src/file/file.cpp      -> Cfile 的实现
```

类名 = `C` + 包名；`my_init()` 里 `name="Cfile"`、`alias="file"`。
**不要**给包根类起别的名字（如 `CFileManager`），否则 `dispatch_cmd` 的 `isMe("file")` 找不到它。

### P3 一包一命名空间，关闭后立即 `using`

```cpp
namespace n_file { class Cfile : public CmyMemory { ... }; }
using namespace n_file;
```

### P4 一个包只有一个"命令对象"

判据：**是否实现 `deal_cmd` 并持有动作表**。
file：`Cfile` 是唯一命令对象；`CfileAllot`/`CfileMem` 只是 worker/POD。
新包若要多个命令对象，应拆成多个包（如 `my_sql` 与 `stock` 分开）。

### P5 动作枚举拆两个

```cpp
enum class FileAtcionClass { none, create, remove, ... };   // 处理器分组
enum class FileAtcion      { none, read, cat, ... };        // 动作位
```

- 前者对应 `Action.action_class`（谁负责执行）
- 后者对应 `Action.t`（动作值）

### P6 动作值必须是 `BITn` 位掩码

```cpp
enum class CodeAtcion { create_h = BIT0, create_c = BIT1, create_func = BIT2, set_package = BIT3 };
```

**file 是反例**：它写的是 `none, read, cat, cut…`（顺序值 0,1,2…）。后果：

- 动作无法组合（`+` 与 `merge` 不能位或）
- `is_action(a, t, EatcionRelation::bit_and)` 在 file 上失效
- 一旦有人给表项错位赋值，`==` 比较会静默命中错误动作

**新代码一律 `= BITn`**，并在表里继续用 `(ACTION_T)` 转换。

### P7 动作表三段式 + 锚点

```cpp
#define FILE_CAT_HELP "cat <FileName> [start] [size] [type]"   // 1 帮助宏
Action file_action[] = {                                        // 2 表
    { (int)FileAtcionClass::read, (ACTION_T)FileAtcion::cat,
      EatcionRelation::equal, nullptr, (char *)"cat", (char *)FILE_CAT_HELP },
    { 0,0,EatcionRelation::none,nullptr },                      //   锚点
};
#define FILE_ACTION_COUNT (sizeof(file_action)/sizeof(Action))   // 3 条数
```

### P8 命令词独立于 enum 标识，别名成组

| enum | 命令词 | 说明 |
| --- | --- | --- |
| `FileAtcion::_delete` | `delete` | 关键字冲突时用前缀/后缀绕开 |
| `FileAtcion::merge_op` | `+` | 符号命令合法 |
| `FileAtcion::find_replace` | `find_relpace` | **反面教材**：拼写错误被固化 |

命令词是**用户契约**，改名等于破坏兼容；拼错也要写注释说明（file 没写，导致 13 处文档跟着错）。

### P9 `argv[2]` 恒为主参数；参数落字段

所有 43 条 file 动作都遵守：`argv[2]` = 文件/目录（主语），后续位置按动作语义。
参数必须写进对象字段（`f_name`/`range_start`/`s_display`…），因为 `set_action_parameter` 与 `do_action` 是两个函数。

### P10 每个动作分支三件套

```cpp
if (this->action == (ACTION_T)FileAtcion::compare || ...)
{
    if (argc > 3) { this->fname_left = argv[2]; this->fname_right = argv[3]; }
    else { this->action_help(file_action, (int)FILE_ACTION_COUNT); return -1; }
}
```

**校验 + 默认值 + 帮助**，三者缺一就会让用户拿到一个没有上下文的 -1。

### P11 `do_action` 一对一 `set_main_ret`

```cpp
if (this->action == (ACTION_T)FileAtcion::md5) this->set_main_ret((int)this->md5());
```

别名在条件里合并（`a || b || c`），不要写多份实现。

### P12 包级 Makefile：只改 `MK_TAG`

```make
MK_TAG = file
source_code = *.cpp ../*.cpp ../math/*.cpp ../file/*.cpp ../code/*.cpp ...
CFLAGS += -std=gnu++11 -DLINUX_OS -D$(main)_TEST=1 ...
```

`source_code` 是"核心子集 + 本包 `*.cpp`"；不要改编译选项语义，否则同一份代码在不同包里行为不同。

### P13 测试 main 挂包根 cpp 尾部

```cpp
#if FILE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[]) { Cfile f; f.deal_cmd(argc, argv); return f.main_return_value; }
#endif
```

### P14 worker / POD 不写动作、不写 deal_cmd

`CfileAllot` 只有 `my_init` + 业务方法；`CfileMem` 连 `Object` 都不继承。
**worker 的接口是普通成员函数，不是命令**。

---

## 二、禁止（Q）

| # | 禁止 | 为什么 | 检查 |
| --- | --- | --- | --- |
| Q1 | 一个包塞多个命令对象 | 派发时同名/同 alias 会互相遮蔽 | `grep -l "::deal_cmd" ` |
| Q2 | 动作值用顺序值而非 `BITn` | 无法组合、`bit_and` 失效（file 的现状） | `grep "= BIT"` 应命中 |
| Q3 | 命令词与 enum 不一致却不注释 | file 的 `find_relpace` 让帮助/文档全跟着错 | 人工 review |
| Q4 | 在 `.h` 里定义 `Action` 数组 | 多次 include = 重复符号；必须放 `.i` 且单 TU | `grep "Action .*\[\] =" src/*/*.h` |
| Q5 | 基础包反向依赖领域包 | 破坏分层（object/file/math 不得 include car/satellite） | `grep '#include "(car|c|satellite)' src/object src/file` |
| Q6 | 同一块内存混用 `new[]`/`free` 或 `malloc`/`delete[]` | UB；file 包内两套并存但各自配对 | 人工 review |
| Q7 | 查询函数带输出副作用 | `is_exist` 打印污染管道（file.cpp:53） | `grep "printf\|cout" src/*/*.h` 无意义，查 .cpp 里的查询实现 |
| Q8 | 把"结果值"当返回码 | `checksum` 返回校验和，>0 被当失败（违反 R1） | 人工 review |
| Q9 | `system()` 拼接未转义参数 | `merge` 的 `cat f1 > out`（file.cpp:538） | `grep "system(" src/*/*.cpp` |
| Q10 | 复制 Makefile 时改 `CFLAGS` 语义 | 平台宏/链接库漂移 | diff 与 `src/Makefile` |

---

## 三、建议（R）

| # | 建议 | 理由 |
| --- | --- | --- |
| R1 | 新包先在 `batch/` 加生成脚本（`code class` 驱动） | 与既有 101 个包一致，可批量重生成 |
| R2 | 帮助文本统一格式 `<cmd> <必选> [可选]` | `action_help` 直接打印，格式一致才可读 |
| R3 | 别名每动作 ≤ 2 个 | file 有 4 个删除同义词（rm/delete/del/remove），噪声大于收益 |
| R4 | 大文件操作走流式 | `Cfile` 现在整文件入内存（`f_read`） |
| R5 | 摘要类用输出参数 + 返回 0/-1 | 避免 Q8 |
| R6 | 新包在 `05-modules.md` 登记一行 | 否则 101→102 时全库地图失真 |

---

## 四、包骨架（照抄）

```
src/<pkg>/
  <pkg>.h              包根类声明（字段=参数槽）
  <pkg>.cpp            my_init + 业务方法 + do_action + set_action_parameter + deal_cmd + 测试 main
  <pkg>_action.h       enum <Pkg>AtcionClass + enum <Pkg>Atcion（BITn）
  <pkg>_action.i       HELP 宏 + Action <pkg>_action[] + <PKG>_ACTION_COUNT
  <pkg>_<noun>.h/.cpp  子类（可选，词条型）
  <pkg>Allot.h/.cpp    worker（可选）
  Makefile             MK_TAG=<pkg>
```

---

## 五、新建包 9 步

```bash
# 1 建目录
mkdir src/<pkg>

# 2 写动作枚举（BITn）        src/<pkg>/<pkg>_action.h
# 3 写帮助宏 + 动作表 + COUNT  src/<pkg>/<pkg>_action.i
# 4 写包根类声明              src/<pkg>/<pkg>.h
# 5 写实现（my_init/业务/三件套/测试 main） src/<pkg>/<pkg>.cpp
# 6 复制 Makefile 并改 MK_TAG  src/<pkg>/Makefile
# 7 加入构建：src/Makefile 的 source_code（若进主程序）
# 8 编译：cd src/<pkg> && make main=<PKG>
# 9 登记：ai/kb/05-modules.md + （可选）Caction::register_table
```

---

## 六、动作设计六条

1. **位值**：`BIT0..BIT31` 顺序分配，`none = 0`。
2. **命名**：enum id 用 `load_file` 这类动词短语；命令词尽量与 id 同名，不同名必须注释。
3. **别名**：同一 `t` 值可挂多行（`rm`/`delete`），但 `do_action` 里仍是一个分支。
4. **参数**：`argv[2]` 主语，`argv[3..]` 依次；缺参 → `action_help + return -1`。
5. **互斥**：需要互斥的动作不要用同一位；需要组合的必须不同位（file 做不到，见 P6）。
6. **帮助**：一句话说清参数形态，含 `<>` 必选与 `[]` 可选（与 README 的语法约定一致）。

---

## 七、依赖分层矩阵

| 从 \ 到 | L0 object | L1 基元 | L2 基础设施 | L3 领域 | L4 工具链 |
| --- | --- | --- | --- | --- | --- |
| L0 object | — | ✗ | ✗ | ✗ | ✗ |
| L1 基元 | ✓ | ✓ | ✗ | ✗ | ✗ |
| L2 基础设施（file） | ✓ | ✓ | ✓（同层谨慎） | ✗ | ✗ |
| L3 领域 | ✓ | ✓ | ✓ | ✓ | ✗ |
| L4 工具链 | ✓ | ✓ | ✓ | ✓ | ✓ |

file 的实证：fan-out 到 memory/output/algorithm/math/path/text（全是 L1/L2），fan-in 来自 class/code/main/collect/stock（L3/L4）。**没有一条反向边**。

---

## 八、自动检查（贴进 CI）

```bash
# P4/Q1 一包一命令对象
for d in src/*/; do n=$(grep -l "::deal_cmd" $d*.cpp 2>/dev/null | wc -l); [ "$n" -gt 1 ] && echo "MULTI COMMAND: $d ($n)"; done

# P6/Q2 动作值必须是 BITn（本仓库 file 与 my_sql 是已知例外）
for f in src/*/*_action.h; do grep -q "= BIT" "$f" || echo "NO BIT VALUES: $f"; done

# P7 动作表必须有锚点
for f in src/*/*_action.i; do grep -q "EatcionRelation::none,nullptr" "$f" || echo "NO END ANCHOR: $f"; done

# Q4 Action 数组不得出现在 .h
grep -rn "Action .*\[\] *=" src --include=*.h

# Q5 基础包反向依赖
grep -rn '#include "\(car\|satellite\|security\|ocean\)/' src/object src/file src/math src/path src/text 2>/dev/null

# Q9 system() 拼接
grep -rn "system(" src --include=*.cpp | grep -v "system_c"

# P8 别名一致性（命令词与 enum 明显不同者，人工确认）
grep -rn 'find_relpace' src --include=*.i --include=*.cpp
```

---

## 九、与 17 的关系

| 17-object-style.md | 本文件 |
| --- | --- |
| 单个类的字段/构造/虚函数/返回码/内存 | 一个包怎么切目录、怎么分角色、怎么定义命令与动作 |
| M1-M10 / N1-N10 / S1-S10 | P1-P14 / Q1-Q10 / R1-R6 |
| 管"类内" | 管"包内 + 包间" |

两者叠加后才是完整的"iwant 代码风格"：**对象合规 + 包结构合规**。
