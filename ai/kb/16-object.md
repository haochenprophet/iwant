# 16 Object 规格说明书

> 依据：`src/object/object.h`（532 行）与 `object.cpp`（1666 行）逐函数通读，行号均可在源码核对。
> 定位：这是**内核的权威规格**——所有 3117 个类都继承自它，所以它的合同就是全库的合同。风格约束见 `17-object-style.md`，缺陷清单见 `13-defects.md`。

---

## 1. 继承链与组成

```
Object : public Osetting
Osetting : public Ouuid, public Otime, public Orange
```

| 组件 | 位置 | 职责 |
| --- | --- | --- |
| `Ouuid` | `uuid/uuid.h` | 身份：uuid 字符串（`GUID_LEN=64`） |
| `Otime` | `object.h:132` | 时间：`tm_start/tm_at/tm_end` + `start/at/end_time` + clock |
| `Orange` | `object.h:146` | 空间：`range_start/range_amount/range_end`（`Udata`） |
| `Cparameter` | `object.h:54` | 调用参数：in/out + size + 参数栈 |
| `CKeywordParam` | `object.h:67` | 词法游标：start/current/end |
| `CtagItem` | `object.h:77` | 模板规则：tag/temp/replace/status |
| `Cmyfunc` | `object.h:91` | 外部函数项：name/alias/p_func/priority |
| `Otimeline` | `object.h:114` | 轨迹：now/past/future + `multimap<void*,void*>` |
| `Ccmd` | `object.h:122` | `argc/argv` 存档 |
| `Ocoord` | `object.h:162` | 三维坐标 |
| `ObjectRelation` | `object.h:154` | 关系项：obj + relation（**无构造函数**） |

---

## 2. 生命周期

### 构造（`object.cpp:88-134`）

```cpp
long object_id = 0;
Object::Object() {
    this->id = ++object_id;              // 全局自增，非原子
    this->name = "Object"; this->alias = this->name; this->symbol = this->name;
    this->s_tag = "[tag]";
    this->name += std::to_string(object_id);   // name 变成 Object1/Object2...
    this->description = this->name;
    this->add_ex_func("objec_func", object_func);  // 注意拼写，少一个 t
    this->add_ex_func("runcmd", runcmd);
    this->register_all_signal();          // 默认接管 6-8 个信号
    this->main_return_value = -1;
    ...
}
```

**关键顺序**：`alias` 在 `name` 追加 id **之前**赋值 → `alias` 保持干净（`Object`），`name` 带后缀。子类 `my_init()` 再把两者覆盖成 `Ccar`/`car`。

### 析构（`object.cpp:136-158`）

清空顺序：`family → ex_func → l_tag_rule → l_audio/l_image/l_url/l_style → exist_family → clear_my_memory → clear_relation → my_mem → clear_exist → exist_list → delete[] cin_buf → delete[] buf`。

注意：`remove_exist_family()` **被注释掉**，原注释写着 `// error exception !!` —— 说明作者踩过 UAF。

### 初始化钩子

| 钩子 | 默认返回 | 语义 |
| --- | --- | --- |
| `my_init(void*)` | -1（基类） | 设置 name/alias/syntax/temp，派生类必须覆盖 |
| `my_exit(void*)` | 0 | 退出前清理 |
| `my_clear(void*)` | 0 | 重置状态 |
| `create(void*)` | -1 | 自我创建（"No gun, no cannons" 的落点） |

---

## 3. 字段地图（`Osetting`，`object.h:172-245`）

| 分组 | 字段 | 说明 |
| --- | --- | --- |
| 身份 | `id` / `uuid` / `name` / `alias` / `symbol` / `description` / `package` | `isMe()` 匹配 name/alias/id |
| 时空 | `Otime` 三组 / `Orange` 三值 / `Ocoord coord` | 生命周期与空间范围 |
| 动作 | `ACTION_T action` / `ActionInfo*` / `Action* action_table` / `count_of_action_table` | 当前动作与表 |
| 状态 | `Udata udata/status`、`value/velocity/direction`、`error`、`count/execute_count`、`priority` | 通用槽位 |
| 家族 | `std::list<void*> family / exist_family` | 我的孩子 / 我在谁那里 |
| 关系 | `LIST_OBJ_RELATION l_relation` | 对象间关系 |
| 资源 | `l_url/l_style/l_image/l_audio/l_video`、`s_url/ws_url`、`s_cmd` | 富媒体 |
| 缓冲 | `buf/buf_len/buf_owner`、`cin_buf/cin_buf_len` | `allot` 管理 |
| 账本 | `my_mem`（我持有的）/ `exist_list`（持有我的） | 与家族对称 |
| 文本 | `syntax/temp/s_tag/s_rep/upper_str`、`l_tag_rule` | 代码生成 |
| 流程 | `before/after`、`locate`、`row/column/line`、`Ccmd cmd`、`Oinput* input`、`Omove* move` | 钩子与定位 |
| 结果 | `main_return_value` | 进程退出码来源 |

---

## 4. 虚函数合同

`Object` 定义了约 **70 个虚函数**，绝大多数是"空实现 + 返回 -1/0"。按语义族：

| 族 | 函数 | 默认 |
| --- | --- | --- |
| 身份 | `where() who() when() how() get_class() my_size()` | 返回自身 / 打印 / -1 |
| 生命 | `my_init() my_exit() my_clear() create()` | -1 / 0 / 0 / -1 |
| 命令 | `deal_cmd(2/5参) set_action_parameter() do_action() runme() transfer()` | -1 / 0 / 0 / -1 |
| 执行 | `func() execute() callback()` | -1 |
| 时间 | `past() rollback() previous() future() next() reservation() current() condition()` | -1 |
| 情境 | `depend() environment() context() secure()` | -1 |
| 通信 | `message() feedback() event() interrupt() exception() task() transaction() commit()` | -1 |
| 呈现 | `display() ui() vray() style() image() audio() video() url()` | -1 |
| 外部 | `get() deploy() different() go()` | -1 |
| 其他 | `help() question() before_object() after_object()` | -1 |

**合同要点**：这些函数不是"必须实现"，而是"可以被询问"。派生类只覆盖有意义的少数几个（通常 `my_init` + `func`/`do_action`）。

---

## 5. 四张表的一致性协议

```
family        : 我的子对象（void* 列表）
exist_family  : 我在谁的 family 里（反向）
my_mem        : 我持有的内存/对象账本
exist_list    : 谁把我记在 my_mem 里（反向）
```

| 操作 | 正向 | 反向 | 是否对称 |
| --- | --- | --- | --- |
| `addMe(o)`（`object.cpp:216`） | `family.push_back(o)` | `o->exist_family.push_back(this)` | ✅ |
| `removeMe(item)`（`:235`） | `family.remove(item)` | **不动** `exist_family` | ❌ 不对称 |
| `remove_exist_family()`（`:240`） | 对每个父调 `o->removeMe(this)` | 清空 `exist_family` | ✅ 正确的解绑路径 |
| `add_memory(m)`（`:302`） | `my_mem.push_back(m)` | `m->exist_list.push_back(this)` | ✅ |
| `clear_my_memory()`（`:308`） | 清空 `my_mem` | `p->exist_list.remove(this)` | ✅ |
| `clear_exist()`（`:326`） | 清空 `exist_list` | `o->my_mem.remove(this)` | ✅ |

**结论**：解绑要用 `remove_exist_family()` / `clear_exist()`，**不要直接 `removeMe()`**（会在对方留下悬挂反指针）。

### 派发（`object.cpp:1437`）

```cpp
dispatch_cmd(argc, argv):
  1) argv[1]=="runme" && argc>2  -> dispatch_runme(argv[2], &cmd)
  2) isMe(argv[1])               -> deal_cmd(argc-1, &argv[1]); return 0
  3) 遍历 family 递归            -> 第一个返回 0 的胜出
  4) 都不命中                    -> return -1   // 无提示
```

注意：子对象成功后外层仍返回 -1（13-defects S2-1）。

---

## 6. 动作系统

### 数据结构（`action/action_type.h`）

```cpp
typedef unsigned long long ACTION_T;   // 64 位，每位一个动作
struct Action { int action_class; ACTION_T t; EatcionRelation r; void *action; char *name; char *help; };
```

### 关系语义（`is_action`，`object.cpp:866-884`）

| 关系 | 实现 | 可用性 |
| --- | --- | --- |
| `equal` | `a == t` | ✅ |
| `large/large_equal/small_/small_equal` | 数值比较 | ✅（位掩码下无意义） |
| `bit_and` | `(a & t) != 0` | ✅ 推荐用于"是否包含某动作" |
| `bit_xor` | `(a ^ t) != 0` | ⚠️ 易误用 |
| `and_` | `(a && t)` | ❌ 逻辑与，不是位运算 |
| `or_` | `(a \|\| t)` | ❌ 同上 |
| `not_` | `(!a)` | ❌ 忽略 t |
| `bit_or` | `(a \| t) != 0` | ❌ 几乎恒真 |
| `bit_not` | `(~a) != 0` | ❌ 几乎恒真 |

**实用结论**：只用 `equal` 与 `bit_and`；其余关系在工程上不可用（13-defects S2）。

### 表约定

- 必须以 `{0,0,EatcionRelation::none,nullptr}` 结尾；`is_action_end()` 判据是 `t==0 && action_class==0 && name==nullptr`（`:915`）。
- 动作名/帮助都是 `char*` 字面量，条数用 `#define COUNT (sizeof(tab)/sizeof(Action))`。

### 六个动作 API

| API | 行 | 行为 | 陷阱 |
| --- | --- | --- | --- |
| `set_action(Action*,int)` | 852 | 挂表 | 只存指针，表必须比对象活得久 |
| `clear_action()` | 860 | 清表指针 | — |
| `get_action(Action*,int,name)` | 934 | 名称→位 | `strcmp(a[i].name,...)` 未判空 |
| `get_action(name)` | 944 | 用 `action_table` 查 | **会自增 `action_table` 指针**，第二次调用即错位 |
| `get_action(...,out)` | 957/971 | 带返回值的版本 | 同上第二个重载有同样问题 |
| `deal_action(Action*,int,o)` | 886 | 命中则 `do_action` | 以 `a[i].t==0` 结束，而不是 `is_action_end` |
| `action_help(Action*,int)` | 921 | 打印帮助 | `printf("%d", (int)t)` 截断高 32 位 |

---

## 7. 执行系统

### execute 家族（`object.cpp:432-565`）

| 重载 | 语义 |
| --- | --- |
| `execute()` / `execute(void*)` / `execute(void*,void*)` / `execute(void*,void*,void*)` | 空实现（返回 -1），子类覆盖 |
| `execute(Object*)` | 转调 `o->execute()` |
| `execute(Object*, string obj_name, string fun_name, void *p, bool thread)` | 跨对象按名调用（`object.cpp:446`） |
| `execute(MyFunc, void*, bool)` | 直接调函数指针；`thread=true` 时 `std::thread(...).detach()` |
| `execute(ObjectFunc, in, out, bool)` | 双参函数版本 |
| `execute(string/char*/string*, void*, bool)` | 按名在 `ex_func` 链表中查找并调用 |

`ex_func` 是 `std::list<Cmyfunc>`，`Cmyfunc::runMe(p,new_thread)` 负责线程化。

### runme（`object.cpp:1340`）

`runme(myname, p)` 是一条 **40+ 分支的 `strcmp` 链**，把字符串名映射到虚函数（go/past/future/message/callback/...）。找不到返回 **-1**。

`dispatch_runme`（`:1313`）把 -1 当作"继续在 family 里找"，所以：**回调返回 -1 会触发全树搜索**。这是隐含合同——不打算被搜索的 runme 实现不要返回 -1。

---

## 8. 内存

```cpp
int  allot(int size, void **o_addr);                        // new char[size]，返回 size 或 0
int  allot(int old, void **addr, int new, bool mem_cpy);    // 扩容（复制+释放旧）
int  allot(int size, void *buf_owner);                      // 分配 this->buf
int  delete_allot(void **addr);                             // delete[] 并置空
int  delete_allot(void *buf_owner);                         // 仅 owner 匹配时释放
```

- 单位常量：`PAGE_4K (4*1024)`、`O_BUF_LEN = PAGE_4K`（`object_def.h:4-5`）。
- 成功返回 **size**（不是指针），失败返回 **0**——所以判断写法是 `if (0 == allot(...))`。
- 分配用 `new char[]`，释放必须 `delete[]` 且类型一致（`Cpath::my_clear` 用 `delete[](wchar_t*)` 释放 `char[]`，是 UB，见 13-defects S1-5）。

---

## 9. 字符串与模板

| API | 行 | 说明 |
| --- | --- | --- |
| `s_replace(base, tag, rep)` | 673 | 循环替换；任一参数为空直接返回 -1（**不能替换成空串**） |
| `toupper_replace(...)` | 706 | 先把 tag/rep 转大写再替换（用于 `[TAG]`） |
| `replace_temp(int upper)` | 734 | `upper=1` 时先 `[TAG]` 再 `[tag]`，一次搞定 |
| `tag_temp(char* tag, int upper)` | 740 | `my_init()` + 设 `s_rep` + `replace_temp` |
| `add_tag_rule(...)` | 749 | 追加自定义 `CtagItem` 规则 |
| `set_upper_str(string&)` | 667 | 生成 `upper_str`（包名大写） |

模板占位符约定：`[tag]` 小写名、`[TAG]` 大写名、`[tag%d]` 带序号、`[TAG]` 用于头文件守卫。

---

## 10. 时间

- `Otime` 构造（`object.cpp:75`）初始化三组时间并调用 `localtime`。
- `set_time(tm*, mon, day, year, hour, min, sec, wday, yday)`（`:791`）：校验范围后写字段并 `mktime`。
- `cmp_time(t1,t2)`（`:818`）：返回 1/0/-1。
- `delay_clock(clock_t)` / `delay(clock_t)`（`:841/:847`）：忙等。

**已证缺陷**：三处 `localtime` 返回同一静态结构体（13-defects S1-3），且 `set_time` 不判空 `t`。

---

## 11. 系统与输入

| API | 行 | 说明 |
| --- | --- | --- |
| `sys_cmd(char*/string*/wchar_t*/wstring*/void)` | 1619-1647 | `system()`，带重试次数；无返回值校验 |
| `get_cmd(argc, argv, cmd)` | 1649 | 在 argv 中找标记词，返回下标（找不到 -1） |
| `get_s(char**, int)` | 394 | `std::cin.get` 到缓冲 |
| `wait_cin(int)` | 405 | 按需扩容 `cin_buf` 后读一行 |
| `at_cin_buf(char*)` | 421 | 在 `cin_buf` 里 `strstr` |
| `is_identifier` | 1564 | `[A-Za-z_][A-Za-z0-9_]*`；**不判空** |
| `is_path` | 1575 | 含 `/`（Windows 下也认 `\`）；**不判空** |
| `is_definable` | 1586 | 标识符或路径；**无 `/` 时对 null 调 `strrchr`**（13-defects S1-8 同类） |

---

## 12. 信号

```cpp
Object object_global;                              // 文件级全局对象
void signal_handler(int s) { object_global.rejoin_signal(s); ... exit(s); }
int Object::register_all_signal() { SIGINT/SIGILL/SIGFPE/SIGSEGV/SIGTERM/SIGABRT (+Windows 两个); }
int Object::register_signal(signum) { signal(signum, signal_handler); }
int Object::rejoin_signal(signum) { OUT_LINE_N(signum); return -1; }   // 空实现
```

即：**每个对象都"注册"了信号，但处理器只转发给 `object_global`**，对象级信号处理实际不生效（13-defects P7）。

---

## 13. 调试宏（`object_def.h`）

| 宏 | 作用 |
| --- | --- |
| `AT_LINE` | 打印 文件/函数/行 |
| `OUT_LINE` | 同上 + 换行 |
| `OUT_LINE_N(n)` | 带一个数值 |
| `WHERE_I` / `I_AM_HERE` | 位置断言（测试 main 常用） |
| `OUT_ERROR` / `OUT_ERROR_N(n)` | 错误打印（后者宏体有语法错误，多一个 `);`） |
| `ERROR_EXIT` / `ERROR_EXIT_N` | 打印后 `exit` |
| `PAGE_4K` / `O_BUF_LEN` / `BUF_SIZE` | 缓冲区尺寸 |

---

## 14. 调用关系速览

```
        +-------------------+
        |      Object       |<---- 3117 个子类
        +-------------------+
          |    |     |    |
   addMe  |    |     |    |  execute("name", p)
          v    |     v    v
      family   |   ex_func[Cmyfunc] ---> MyFunc
          |    |     |
          |    |     +--> runme(name,p) --40+ strcmp--> 虚函数
          |    |
          |    +--> action_table[Action] --get_action--> ACTION_T
          |
          +--> dispatch_cmd 递归查找同名对象
```

---

## 15. 缺陷索引（详见 13-defects.md）

| 编号 | 问题 | 位置 |
| --- | --- | --- |
| S1-1 | 析构非虚 | `object.h:250` |
| S1-2 | 无拷贝控制（裸指针成员） | 全类 |
| S1-3 | `localtime` 三别名 | `object.cpp:80-82` |
| S1-4 | `ObjectRelation` 未初始化 | `object.cpp:185` |
| S2-1 | `dispatch_cmd` 恒返 -1 | `:1465` |
| S2-3 | `removeMe` 不对称 | `:235` |
| P7 | 信号全局假象 | `:1238-1283` |
| 新增 | `get_action(char*)` 自增表指针 | `:944` |
| 新增 | `is_action` 的 and_/or_/not_/bit_or` 语义错 | `:866` |
| 新增 | `action_help` 截断 ACTION_T | `:921` |
| 新增 | `is_definable` 对 null 调 `strrchr` | `:1592` |
| 新增 | `is_identifier/is_path` 不判空 | `:1564/1575` |
