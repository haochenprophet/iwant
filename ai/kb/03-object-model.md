# 03 Object 内核

> 源码：`src/object/object.h`（20.9 KB）、`src/object/object.cpp`（34.4 KB, 1666 行）、`src/object/object_def.h`、`src/object/move.h`

## 类族

```
Ouuid ─┐
Otime ─┼─→ Osetting ─→ Object ─→ Cobject
Orange─┘        │
                ├─ Cparameter（in/out 缓冲 + 参数栈）
                ├─ Cmyfunc（extern 函数登记项）
                ├─ CtagItem（tag/temp/replace 三元组）
                ├─ Otimeline（时间轴：now/past/future + 指针映射）
                ├─ Ccmd（argc/argv）
                └─ ObjectRelation · Ocoord
```

`Object` 的构造顺序决定了它的"出生证明"：

```cpp
long object_id = 0;
Object::Object() {
    this->id = ++object_id;                  // 全局自增 id
    this->name = "Object";
    this->alias = this->name;
    this->symbol = this->name;
    this->s_tag = "[tag]";
    this->name += std::to_string(object_id); // 名字后缀 id → 唯一
    this->description = this->name;
    this->add_ex_func("objec_func", object_func); // 注意源码拼写 objec_func
    this->add_ex_func("runcmd", runcmd);
    this->register_all_signal();             // 默认接管信号
    this->main_return_value = -1;
    ...
}
```

## `Osetting` 字段地图（"一个对象拥有什么"）

| 分组 | 字段 | 用途 |
| --- | --- | --- |
| 身份 | `long id`、`uuid`(继承)、`string name/alias/symbol/description` | 唯一标定；`isMe()` 靠 name/alias/id 命中 |
| 时空 | `Otime`(start/at/end + clock)、`Orange`(range_start/amount/end)、`Ocoord`(x,y,z) | 生命周期与空间范围 |
| 动作 | `ACTION_T action`(64 位位掩码)、`ActionInfo *action_info`、`Action *action_table`、`count_of_action_table` | 命令解析与执行状态 |
| 状态 | `Udata udata`、`Udata status`、`int value/velocity/direction`、`int error`、`int count/execute_count`、`long long priority` | 通用槽位（union 承载任意类型） |
| 家族 | `std::list<void*> family`、`exist_family` | 子对象树；`addMe/removeMe` |
| 关系 | `LIST_OBJ_RELATION l_relation` | `add_relation/clear_relation` |
| 资源 | `l_url/l_style/l_image/l_audio/l_video`、`s_url/ws_url`、`s_cmd` | 富媒体与命令字符串 |
| 缓冲 | `char *buf; int buf_len; void *buf_owner`、`cin_buf/cin_buf_len` | `allot/delete_allot` 管理的自有内存 |
| 内存账本 | `my_mem`（我持有的）、`exist_list`（我在谁那里） | `add_memory/clear_exist` |
| 文本/模板 | `string syntax/temp/s_tag/s_rep/upper_str`、`list<CtagItem> l_tag_rule` | 代码生成与解析 |
| 流程 | `void *before/after`、`int locate`、`size_t row/column/line`、`Ccmd cmd`、`Oinput *input`、`Omove *move` | 钩子与定位 |

**要点**：`Udata`（`src/data/data.h` 的 union）让同一个字段可当 `int/char*/double/...` 用；`void*` + `list<void*>` 让家族与关系无需模板。

## 虚函数合同

`Object` 定义了**一个"对象应该回答什么问题"的接口**，绝大多数是空实现（默认返回 0/-1），子类按需覆盖：

| 语义族 | 虚函数 |
| --- | --- |
| 身份/解释 | `where()`(自己的地址)、`who()`(自我介绍)、`when()`(时间)、`how()`(状态)、`my_size()`、`get_class()` |
| 生命周期 | `my_init()`、`my_exit()`、`my_clear()`、`create()` |
| 命令 | `deal_cmd(argc,argv)`、`deal_cmd(argc,argv,action,count,min_input)`、`set_action_parameter()`、`do_action()`、`runme(myname,p)`、`transfer()` |
| 执行 | `func()`、`execute(...)`(12 个重载)、`callback()`、`dispatch_runme()` |
| 时间 | `past/rollback/previous/current/future/next/reservation/condition` |
| 通信 | `message()`、`feedback()`、`event()`、`interrupt()`、`exception()`、`task()`、`transaction()`、`commit()` |
| 呈现 | `display()`、`ui()`、`vray()`、`style()`、`image()`、`audio()`、`video()`、`url()` |
| 外部 | `get()`、`deploy()`、`different()`、`secure()`、`environment()`、`context()`、`depend()`、`go()` |
| 其他 | `help()`、`question()`、`before_object()`、`after_object()`、`register_signal()` |

这套接口是**面向"实体"而不是"算法"**的：它预设每个对象都能被问"你是谁/你在哪/你何时/你如何/你的过去未来"。

## 回调与函数登记

```cpp
typedef int (*MyFunc)(void *p);          // 主约定：<0 无事, 0 成功, >0 失败
typedef int (*ObjectFunc)(void *input, void *output);
```

- `add_ex_func(name, fn)` 把外部函数登记进 `ex_func`（`Cmyfunc` 链表，带 alias 与 priority）。
- `execute(char *fun_name, void *p, bool new_thread)` 按名字在 `ex_func` 中查找并调用；`new_thread=true` 时 `std::thread(fn,p).detach()`（`Cmyfunc::runMe`）。
- `Object` 出生即自带 `objec_func`（源码拼写如此）与 `runcmd` 两个 extern 函数。

## action 位掩码与命令解析

```cpp
typedef unsigned long long ACTION_T;   // 64 位，每位一个动作
enum class EatcionRelation { none, equal, large, large_equal, small_, small_equal,
                             and_, or_, not_, bit_and, bit_or, bit_not, bit_xor, not_and, not_or };
struct Action { int action_class; ACTION_T t; EatcionRelation r; void *action; char *name; char *help; };
```

动作表以 `{0,0,EatcionRelation::none,nullptr}` 结尾，数量用 `#define COUNT (sizeof(tab)/sizeof(Action))` 算：

```cpp
// src/main/main_action.i
Action main_action[] = {
  { (int)MainAtcionClass::create, (ACTION_T)MainAtcion::create_main,
    EatcionRelation::bit_and, nullptr, (char*)"create_main" },
  { 0,0,EatcionRelation::none,nullptr },   // 结束锚点
};
#define MAIN_ACTION_COUNT (sizeof(main_action) / sizeof(Action))
```

六步解析（`Object::deal_cmd`，`object.cpp:1470`）：

1. `argc < min_input` → `action_help()` 并返回 -1
2. `this->cmd = {argc, argv}` 存档
3. `get_cmd(argc, argv, "silent")` → 置 `silent`（不打印）
4. `get_action(table, count, argv[1])`；名字没命中则 `atoll(argv[1])` 当数字动作位
5. `set_action_parameter(argc, argv)`（虚函数，子类可自定义参数位置）
6. `do_action()`

## 内存管理

```cpp
int  allot(int size=O_BUF_LEN, void *buf_owner=nullptr);
int  allot(int size, void **o_addr);
int  allot(int old_size, void **o_addr, int new_size, bool mem_cpy=false);
int  delete_allot(void **addr);
void add_memory(Object *m);          // 记入 my_mem，析构时统一释放
```

	extbf{不要用裸 `new/delete` 管理对象内部缓冲}：`Ccode` 就是 `allot(CODE_BUF_LEN=4KB, &code_buf)` + `delete_allot` 的范例。

## tag 模板替换（元编程的字符串引擎）

```cpp
int tag_temp(char *tag_value, int upper_s=1);   // 由 tag 同时生成 [tag] 与 [TAG] 的替换值
int replace_temp(int upper_s=0);                 // 用 s_tag/s_rep 替换 this->temp
int s_replace(string *base, string *tag, string *rep);
int s_replace(string *base, char *tag, char *rep);
int add_tag_rule(string tag, string temp, string replace);  // 自定义 tag 规则
```

规则（`doc/keyword_syntax.txt` + 源码实证）：

- `[tag]` → 原样小写名；`[TAG]` → 大写名；`[TAG%d]`/`[tag%d]` → 带序号（`doc` 里写明 `[TAG];TAG%d;tag;tag%d`）。
- 转义沿用 C 语言习惯（`\` 与 `%`）。
- `<>` 表示必选、`[]` 表示可选（模板语法约定）。

## 家族与全局装配

```cpp
void Object::addMe(Object *o=nullptr);           // 把 o 挂到自己 family
void Object::add_global_objects();               // 调用 g_code_func.i 的 add_objects(this)
void Object::add_global_objects(Object *p);
```

`add_global_objects()` 会 `#include "global/g_code.i"`（`object.cpp:2`），因此**任何 `Object` 都能一键挂载全宇宙**——这也是 `code.cpp` 的 `main` 里 `c.add_global_objects();` 的意义。

## 已发现的实现细节/瑕疵（据实记录）

| 现象 | 位置 | 影响 |
| --- | --- | --- |
| 外部函数名拼写为 `objec_func`（少一个 t） | `object.cpp` 构造函数 | 调用必须写 `objec_func` |
| `Ccode` 构造里 `if (0 == allot(...)) exit(-1);` | `code.cpp` | 4 KB 缓冲分配失败直接进程退出 |
| `Ccode::create()` 只 `std::cout<<cp`，无实际产出 | `code.cpp` | 真正干活的是 `create_cmd/create_head/create_tail` |
| `Object::~Object()` 注释掉 `remove_exist_family()`（标注 "error exception!!"） | `object.cpp` | 析构时存在悬挂登记风险 |
| `dispatch_cmd` 命中失败后仍返回 -1（外层继续 `continue`） | `object.cpp:1437` | 递归寻找同名类时会遍历整棵树，O(n) |
