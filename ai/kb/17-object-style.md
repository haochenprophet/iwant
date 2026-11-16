# 17 Object 代码风格约束

> 这些约束不是审美偏好，而是**从 `Object` 的实现里反推出来的硬性合同**：违反它们不会编译失败，会在运行时变成一个空指针、一次双重释放、或一个永远匹配不到的命令。
> 每条都标注了来源行号（`src/object/object.cpp` / `object.h`），规格细节见 `16-object.md`。
> 级别：**M** = 必须（Must）；**N** = 禁止（Must Not）；**S** = 建议（Should）。

---

## 一、必做（M）

### M1 一切类必须继承 Object（或经 Osetting）

```cpp
class Cfoo : public Object { ... };   // 直接
class Cbar : public Cfile  { ... };   // 间接（Cfile : CmyMemory : Object）
```

理由：id/uuid/name/alias/时间/空间/动作位/家族/内存账本全部由 `Object` 提供，脱离它就没有任何框架能力。
来源：`object.h:246` `class Object:public Osetting`；README Coding rule 3。

### M2 构造函数必须设 `name` 与 `alias`，且两者都非空

```cpp
Cfoo::Cfoo() { this->my_init(); }
int Cfoo::my_init(void *p)
{
    this->name  = "Cfoo";   // C + 文件名
    this->alias = "foo";    // 去 C 前缀的 tag
    return 0;
}
```

**为什么不能为空**：`isMe()` 用 `return (int)this->name.length();` 表示命中（`object.cpp:268-287`），空串长度为 0 = "不匹配"。名字为空的对象在 `dispatch_cmd` 里永远找不到。
**为什么 alias 不等于 name**：README 示例写 `alias = this->name`，但全库实际是 `alias` = 去 C 的 tag；照抄 README 会让 `isMe("foo")` 失效（00-readme D3）。

### M3 一个文件一个主类，类名 = 文件名 + C

`car_door.h/.cpp` ↔ `class Ccar_door`（名字里带下划线、数字都一样处理）。
来源：README Coding rule 4；全库 3117 类一致。

### M4 `my_init()` 必须覆盖并返回 0

基类 `Object::my_init` 返回 **-1**（`object.cpp:1396`）。派生类不覆盖就等于"这个对象没初始化"，且所有依赖 `my_init` 的模板函数（如 `tag_temp`）行为异常。

### M5 返回码三态：`<0` 无事可做 / `==0` 成功 / `>0` 失败

```cpp
int Cfoo::do_something(void *p)
{
    if (!p) return -1;    // 无事可做
    ...
    return 0;             // 成功
}
```

来源：`object.h:44` 的 `MyFunc` 注释；`deal_cmd` 一律 0/-1。
**例外警告**：`runme` 的 -1 有特殊含义（"继续在 family 中搜索"，`object.cpp:1317-1332`），实现 `runme` 时不要用它表示"失败"。

### M6 成员资源只走 `allot` / `delete_allot` 或 `CmyMemory`

```cpp
this->code_buf = nullptr;
if (0 == this->allot(CODE_BUF_LEN, (void **)&this->code_buf)) return -1;  // 0 = 失败
...
this->delete_allot((void **)&this->code_buf);                             // 置空
```

`allot` 成功返回**长度**、失败返回 **0**（`object.cpp:567-597`）；分配用 `new char[]`，必须配 `delete[]` 且类型一致。

### M7 解绑用 `remove_exist_family()` / `clear_exist()`，不要只调 `removeMe()`

```
addMe(o)          : family += o        &  o->exist_family += this     (对称)
removeMe(o)       : family -= o        &  (不动 exist_family)          (不对称!)
remove_exist_family(): 逐个父调 removeMe + 清空 exist_family            (正确)
```

来源：`object.cpp:216-252`。直接 `removeMe` 会在父对象里留下悬挂反指针。

### M8 动作表必须以终止项收尾，条数用 COUNT 宏

```cpp
Action foo_action[] = {
    { (int)FooAtcionClass::run, (ACTION_T)FooAtcion::run, EatcionRelation::equal,
      nullptr, (char *)"run", (char *)FOO_RUN_HELP },
    //end:0 is the table end anchor
    { 0,0,EatcionRelation::none,nullptr },
};
#define  FOO_ACTION_COUNT (sizeof(foo_action) / sizeof(Action))
```

`is_action_end()` 的判据是 `t==0 && action_class==0 && name==nullptr`（`object.cpp:915`）。

### M9 `deal_cmd` 六步顺序不可变

```
1 检查 argc < min_input   -> action_help() + return -1
2 存 this->cmd = {argc, argv}
3 get_cmd(argc, argv, "silent") -> this->silent
4 this->action = get_action(table, count, argv[1])   // 0 才允许 atoll 兜底
5 set_action_parameter(argc, argv)   // 失败 -> action_help + return -1
6 do_action()
```

来源：`object.cpp:1470-1504`（通用版）与 `file.cpp:790-820`（最完整实例）。

### M10 每个 `.cpp` 末尾保留 `#if <TAG>_TEST` 测试 main

```cpp
#ifndef CAR_DOOR_TEST
#define CAR_DOOR_TEST 0//1
#endif

#if CAR_DOOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[]) { WHERE_I; return 0; }
#endif
```

这是项目唯一的测试形态，也是 `make main=XXX` 选入口的机制（见 06-build-run）。

---

## 二、禁止（N）

### N1 禁止使用单参数 `get_action(char*)`

`object.cpp:944-955` 里是 `this->action_table++`——**它会把成员指针永久前移**，第二次调用就从错误位置开始。用四参数版本 `get_action(table, count, name)`。

### N2 禁止使用 `EatcionRelation` 的 `and_ / or_ / not_ / bit_or / bit_not`

`is_action`（`object.cpp:866-884`）里它们是按"逻辑运算"实现的：
- `and_` → `a && t`、`or_` → `a || t`（把位掩码当布尔）
- `bit_or` → `(a | t) != 0` 几乎恒真
- `bit_not` → `(~a) != 0` 几乎恒真
- `not_` 忽略 `t`

**只用 `equal` 与 `bit_and`。**

### N3 禁止把 `ACTION_T` 截断成 `int` 输出

`action_help` 打印 `printf("%d", (int)a[i].t)`（`object.cpp:927`），位 32-63 直接丢失。新代码用 `%llu` + `(unsigned long long)`。

### N4 禁止在可能为 null 的指针上裸调 `strrchr/strcmp/strlen/strstr`

框架自己就踩了两次：
- `Object::is_definable`：`s=strrchr(s,'/'); if(!s) s=strrchr(s,'\\');` → 第二次传 null（`object.cpp:1592`）
- `Cmain::create_main_cmd`：同样模式（`main.cpp:40-42`）
- `is_identifier/is_path` 本身也不判空（`:1564/1575`）

正确写法：先保存原指针，再分别探测；入口处统一判空。

### N5 禁止在库代码里 `exit()`

全库仍有 6 处（`code.cpp:23`、`search.cpp:57`、`ex_func.cpp:62` 等）。库函数必须返回错误码，由 `main` 决定退出码。

### N6 禁止用 `fstream::in|out|trunc`（或 `in|out|app`）创建新文件

POSIX 语义等价于 `fopen("r+")`，文件不存在就失败，而调用方几乎不检查 → 静默不写（13-defects S2-6）。用 `std::ofstream(path, std::ios::out|std::ios::trunc)` 并检查 `is_open()`（`Cclass::file_write` 已示范）。

### N7 禁止 `std::thread(...).detach()` 携带栈上指针

`Object::execute(MyFunc, p, true)` 直接把 `p` 交给分离线程（`object.cpp:518-525`）。传栈地址 = 悬空读。

### N8 禁止拷贝 `Object` 及其派生

类里有裸指针 `buf/cin_buf`、`CmyMemory::addr`、`Cfile` 的 fstream，却没有拷贝构造/赋值 → 浅拷贝 + 双重释放。要么禁用拷贝（`= delete`），要么显式实现深拷贝。

### N9 禁止在 `name` 里手写 id

`Object` 构造已经 `name += std::to_string(id)`（`object.cpp:100`），子类再拼会让 `isMe` 行为不可预测。

### N10 禁止复制粘贴 `Cfile::deal_cmd` 全文

通用六步已经封装成 `Object::deal_cmd(argc, argv, action, count, min_input)`（`object.cpp:1470`），新对象直接调用即可；复制会导致六步顺序漂移。

---

## 三、建议（S）

| # | 建议 | 理由 |
| --- | --- | --- |
| S1 | 覆写虚函数一律写 `override`，终态类写 `final` | 全库几乎不用 `override`，签名写错只会"悄悄新增函数" |
| S2 | 每个类提供 `size_t my_size() { return sizeof(Cxxx); }` | 便于内存统计；`batch/insert-my_size.bat` 就是批量补它 |
| S3 | 字符串一律抽成宏/常量 | README rule 6；模板放 `temp_def.h`、语法放 `syntax_def.h`、帮助放 `*_action.i` |
| S4 | 错误计数用 `inc_error()` / 判断用 `is_error()` | 已有设施，别自己再发明返回值 |
| S5 | 输出走 `out::data/info/error`（新代码） | 老代码 671 处 `cout/printf` 无法支持 `--json`/`--quiet` |
| S6 | 命令参数落在对象字段（参数槽），不要留在局部变量 | `set_action_parameter` 与 `do_action` 是两个函数，局部变量传不过去 |
| S7 | 字符串参数用 `const string&`，避免按值拷贝 | 与框架的 `string` 习惯一致 |
| S8 | 格式化用 `snprintf`，长度用 `sizeof(buf)` | 全库 74 处 `sprintf` 是溢出源 |
| S9 | 新增动作必须同时写 `XXX_HELP` | `action_help` 靠它生成帮助；Caction 靠它做 `describe` |
| S10 | 新命令对象在构造里 `Caction::register_table("<pkg>", ...)` | 这样 `iwant describe <pkg>` 自动可用 |

---

## 四、类骨架模板（照抄即可）

### foo.h

```cpp
#ifndef FOO_H
#define FOO_H

#include "object/object.h"
#include "foo_action.h"

namespace n_foo {
	class Cfoo : public Object
	{
	public:
		string s_param;          // 参数槽：由 set_action_parameter 填写
		int    n_count;
	public:
		Cfoo();
		~Cfoo();
		int my_init(void *p = nullptr) override;
		size_t my_size() override { return sizeof(Cfoo); }

		int run(void *p = nullptr);

		int set_action_parameter(int argc, char *argv[]) override;
		int do_action(void *a = nullptr) override;
		int deal_cmd(int argc, char *argv[]) override;
	};
}
using namespace n_foo;
#endif
```

### foo.cpp

```cpp
#include "foo.h"
#include "foo_action.i"
#include "action/action.h"
#include "cli/cli_out.h"

Cfoo::Cfoo()
{
	this->s_param = "";
	this->n_count = 0;
	this->my_init();
	Caction::register_table("foo", foo_action, (int)FOO_ACTION_COUNT);
}

Cfoo::~Cfoo()
{
}

int Cfoo::my_init(void *p)
{
	this->name = "Cfoo";
	this->alias = "foo";
	this->silent = 1;
	return 0;
}

int Cfoo::run(void *p)
{
	if (this->s_param.empty()) return -1;   // 无事可做
	out::data("run: " + this->s_param);
	return 0;
}

int Cfoo::set_action_parameter(int argc, char *argv[])
{
	this->s_param = "";
	if (argc < 3) return -1;
	this->s_param = argv[2];
	return 0;
}

int Cfoo::do_action(void *a)
{
	if (this->action == (ACTION_T)FooAtcion::run) { this->set_main_ret(this->run()); return 0; }
	if (this->action == (ACTION_T)FooAtcion::help) { this->action_help(foo_action, (int)FOO_ACTION_COUNT); return 0; }
	return 0;
}

int Cfoo::deal_cmd(int argc, char *argv[])
{
	if (0 != Object::deal_cmd(argc, argv, foo_action, (int)FOO_ACTION_COUNT, 2)) return -1;
	return (this->main_return_value == 0) ? 0 : -1;
}

#ifndef FOO_TEST
#define FOO_TEST 0//1
#endif
#if FOO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	Cfoo f;
	f.deal_cmd(argc, argv);
	return f.main_return_value;
}
#endif
```

---

## 五、评审清单（可直接贴进 PR）

```
[ ] 类继承 Object / Osetting，my_init 设 name(="C"+文件名) 与 alias(=tag)，两者非空
[ ] 文件名 = 类名去 C；一个文件一个主类
[ ] 命名空间 n_<pkg> + 文件尾 using namespace n_<pkg>;
[ ] 覆写虚函数带 override；返回码符合 <0/0/>0
[ ] 资源只用 allot/delete_allot 或 CmyMemory；无裸 new/delete 成员
[ ] 解绑走 remove_exist_family / clear_exist，未直接 removeMe
[ ] 动作表有终止项 + COUNT 宏；每个动作有 HELP
[ ] 未使用 get_action(char*)；未使用 and_/or_/not_/bit_or/bit_not
[ ] 所有可能为 null 的指针先判空（尤其 strrchr/strcmp）
[ ] 未在库代码 exit()；未用 in|out|trunc 建文件
[ ] 线程不带栈指针；未拷贝 Object
[ ] 字符串抽成宏；格式化用 snprintf
[ ] 文件尾保留 #if <FILE>_TEST 测试 main
```

---

## 六、可自动化的风格体检

```bash
# N5 库层 exit()
grep -rn '\bexit(' src --include=*.cpp | grep -v _TEST

# N1 单参 get_action
grep -rn 'get_action([[:space:]]*"' src --include=*.cpp

# N6 危险打开模式
grep -rn 'fstream::in' src --include=*.cpp

# M8 动作表是否缺终止项
for f in src/*/*_action.i; do grep -q 'EatcionRelation::none,nullptr' "$f" || echo "MISSING END: $f"; done

# N3 ACTION_T 截断
grep -rn '%d.*\.t' src --include=*.cpp

# N8 拷贝 Object（粗筛）
grep -rn 'Object[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*=[[:space:]]*[a-zA-Z_]' src --include=*.cpp
```

> 这六条 grep 覆盖了最容易复发的坑；更完整的缺陷清单见 `13-defects.md`，Object 规格见 `16-object.md`。
