---
name: iwant-package
description: 在 iwant 里新建或改造一个 package 前加载。给出 package→namespace→class→command→action 五层的落地模板（范本 src/file）、动作表 BITn 规范、参数槽与六步协议、包内三角色、依赖分层与自检清单。
---

# iwant：建包 / 改包规程

## 何时用我

- 要新增一个包（`src/<pkg>/`）
- 要给已有包加动作、加类、加 worker
- 要判断"这个类该放在哪个包、该不该有 deal_cmd"
- 要 review 一个包是否符合仓库既有风格

范本：`src/file/`（43 条动作、3 个类、7 个依赖包）。深度解剖见 `ai/kb/18-file-package.md`，约束全文见 `ai/kb/19-package-constraints.md`。

## 五层速查

| 层 | 落点 | 铁律 |
| --- | --- | --- |
| package | `src/<pkg>/` | 目录名 = 命名空间后缀 = alias = MK_TAG |
| namespace | `n_<pkg>` | 关闭后立即 `using namespace n_<pkg>;` |
| class | `<pkg>.h/.cpp` → `C<pkg>` | 包根类名 = C+包名；worker/POD 另起文件 |
| command | `<pkg>_action.h` + `deal_cmd` | 一包一个命令对象 |
| action | `<pkg>_action.i` | `BITn` 位值 + 命令词 + HELP 宏 + 锚点 |

## 九步建包

```bash
mkdir src/<pkg>
# 1 枚举   src/<pkg>/<pkg>_action.h
# 2 表     src/<pkg>/<pkg>_action.i
# 3 声明   src/<pkg>/<pkg>.h
# 4 实现   src/<pkg>/<pkg>.cpp
# 5 构建   cp src/file/Makefile src/<pkg>/Makefile 并改 MK_TAG
# 6 编译   cd src/<pkg> && make main=<PKG>
# 7 接入   src/Makefile 的 source_code（若要进主程序）
# 8 登记   ai/kb/05-modules.md 一行；（可选）Caction::register_table
# 9 生成   在 batch/ 加 code class 脚本（批量造词条类时）
```

## 模板

### <pkg>_action.h

```cpp
#ifndef FOO_ACTION_H
#define FOO_ACTION_H
#include "bit/bits_def.h"
#include "action/action_type.h"

enum class FooAtcionClass { none, run, query };          // 处理器分组
enum class FooAtcion {
    none = 0,
    run  = BIT0,                                          // 必须是 BITn
    list = BIT1,
    help = BIT2,
};
#endif
```

### <pkg>_action.i

```cpp
#ifndef FOO_ACTION_I
#define FOO_ACTION_I
#include "foo_action.h"

#define FOO_RUN_HELP  "run <target> [--force]      run one job"
#define FOO_LIST_HELP "list                       list targets"
#define FOO_HELP_HELP "help                       show this help"

Action foo_action[] = {
    { (int)FooAtcionClass::run, (ACTION_T)FooAtcion::run, EatcionRelation::equal,
      nullptr, (char *)"run", (char *)FOO_RUN_HELP },
    { (int)FooAtcionClass::query, (ACTION_T)FooAtcion::list, EatcionRelation::equal,
      nullptr, (char *)"list", (char *)FOO_LIST_HELP },
    { (int)FooAtcionClass::query, (ACTION_T)FooAtcion::help, EatcionRelation::equal,
      nullptr, (char *)"help", (char *)FOO_HELP_HELP },
    { 0,0,EatcionRelation::none,nullptr },                 // 锚点，别省
};
#define FOO_ACTION_COUNT (sizeof(foo_action)/sizeof(Action))
#endif
```

### <pkg>.h

```cpp
#ifndef FOO_H
#define FOO_H
#include "object/object.h"
#include "foo_action.h"

namespace n_foo {
    class Cfoo : public Object {
    public:
        string s_target;      // 参数槽（argv[2]）
        int    force;         // 参数槽（--force）
    public:
        Cfoo();
        ~Cfoo();
        int my_init(void *p = nullptr) override;
        size_t my_size() override { return sizeof(Cfoo); }

        int run(void *p = nullptr);
        int list(void *p = nullptr);
        int help(void *p = nullptr);

        int set_action_parameter(int argc, char *argv[]) override;
        int do_action(void *a = nullptr) override;
        int deal_cmd(int argc, char *argv[]) override;
    };
}
using namespace n_foo;
#endif
```

### <pkg>.cpp 的必填段

```cpp
#include "foo.h"
#include "foo_action.i"
#include "action/action.h"
#include "cli/cli_out.h"

Cfoo::Cfoo() { this->my_init(); Caction::register_table("foo", foo_action, (int)FOO_ACTION_COUNT); }
int Cfoo::my_init(void *p) { this->name="Cfoo"; this->alias="foo"; return 0; }

int Cfoo::set_action_parameter(int argc, char *argv[])
{
    this->s_target.clear();
    if (argc > 2) this->s_target = argv[2]; else { this->action_help(foo_action, (int)FOO_ACTION_COUNT); return -1; }
    return 0;
}

int Cfoo::do_action(void *a)
{
    if (this->action == (ACTION_T)FooAtcion::run)  { this->set_main_ret(this->run());  return 0; }
    if (this->action == (ACTION_T)FooAtcion::list) { this->set_main_ret(this->list()); return 0; }
    if (this->action == (ACTION_T)FooAtcion::help) { this->set_main_ret(this->help()); return 0; }
    return 0;
}

// 六步：数量 -> cmd -> silent -> get_action -> set_action_parameter -> do_action
int Cfoo::deal_cmd(int argc, char *argv[])
{
    if (argc < 2) { this->help(); return -1; }
    this->cmd.argc = argc; this->cmd.argv = argv;
    if (this->get_cmd(argc, argv, (char *)"silent") > 0) this->silent = 1;
    this->action = this->get_action(foo_action, (int)FOO_ACTION_COUNT, argv[1]);
    if (this->action == 0) { this->help(); return -1; }
    if (0 != this->set_action_parameter(argc, argv)) return -1;
    this->do_action();
    return (this->main_return_value == 0) ? 0 : -1;
}
```

### Makefile

```make
MK_TAG = foo
source_code = *.cpp ../*.cpp ../math/*.cpp ../file/*.cpp ../code/*.cpp ...
CFLAGS += -std=gnu++11 -DLINUX_OS -D$(main)_TEST=1 ...
```

只需改 `MK_TAG`；`source_code` 从 `src/file/Makefile` 复制"核心子集 + 本包 *.cpp"。

## 动作设计六条

1. 位值 `BITn`，`none = 0`；需要组合的动作必须不同位。
2. 命令词是用户契约；与 enum 不一致时必须写注释（`file` 的 `find_relpace` 是反面教材）。
3. 别名 = 同一 `t` 挂多行，`do_action` 里仍只一个分支；每动作别名 ≤ 2。
4. `argv[2]` 恒为主参数，`argv[3..]` 依次；缺参 → `action_help + return -1`。
5. 每个动作在 `set_action_parameter` 里三件套：**校验 / 默认值 / 帮助**。
6. 帮助文本 `<必选> [可选]`，与 README 的语法约定一致。

## 包内三角色

| 角色 | 判据 | file 例子 | 规则 |
| --- | --- | --- | --- |
| 命令对象 | 有 `deal_cmd` + 动作表 | `Cfile` | 一包一个 |
| worker | 普通成员函数，被内部调用 | `CfileAllot` | 不写动作、不注册 |
| POD | 不继承 Object 的数据结构 | `CfileMem` | 只放数据 + clear() |

## 依赖分层

```
L0 object ← L1 基元(keywords/instruction/operator/cstdio…) ← L2 基础设施(file/math/path/text/…) ← L3 领域 ← L4 工具链
```

- L2 可依赖 L1/L0；**不可**依赖 L3（`src/file` 不得 include `car/`）。
- 新包若依赖领域包，说明它属于 L3 或 L4。

## 自检清单

```
[ ] 目录名 = 命名空间后缀 = alias = MK_TAG
[ ] 包根类 C<pkg>，name/alias 正确，my_init 返回 0
[ ] 一包一个命令对象（只有它实现 deal_cmd）
[ ] 动作值全部 = BITn（不是顺序值）
[ ] 动作表有锚点 + COUNT；HELP 宏齐全
[ ] 命令词与 enum 不一致处有注释
[ ] argv[2] 是主参数；参数写进字段
[ ] set_action_parameter 三件套齐全
[ ] do_action 一对一 set_main_ret，别名合并
[ ] worker/POD 无动作、无 deal_cmd
[ ] 包级 Makefile 只改了 MK_TAG
[ ] 文件尾有 #if <PKG>_TEST main
```

## 常见错误（file 包踩过的）

| 错误 | 后果 | 正确做法 |
| --- | --- | --- |
| 动作用顺序值 | 无法组合、`bit_and` 失效 | `= BITn` |
| `swap` 对 `size==-1` 仍算 `start+size` | 越界读 1 字节 | 先用默认值替换 size 再算 |
| `merge` 用 `system("cat … > out")` | 文件名注入 | 逐块 fwrite |
| 查询函数里 printf | 污染管道 | 让调用方决定输出 |
| 返回"结果值"当状态码 | `checksum` 的 >0 被当失败 | 输出参数 + 0/-1 |
| `Action` 数组写在 `.h` | 重复符号 | 放 `.i`，单 TU |

## 参考

- `ai/kb/18-file-package.md` —— 五层解剖 + 43 条动作全表
- `ai/kb/19-package-constraints.md` —— P/Q/R 约束全文 + CI 检查
- `ai/kb/17-object-style.md` —— 对象级约束（类内怎么写）
- `ai/kb/file-actions.json` —— 动作表机器可读版
