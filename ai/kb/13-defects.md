# 13 代码缺陷分析（C++ 视角）

> 分析方式：静态阅读 + 模式扫描（`grep` 全库 6,201 个源文件），逐个打开关键实现确认到行号。
> **局限**：机器上没有可用的 `g++/clang/cl`，无法编译验证，也无运行时；因此下面的结论都是**代码级可证的逻辑/语义缺陷**，不含"编译告警类"的推导。未逐类审计 3,117 个词条类（它们几乎同构），重点审计**内核 + 共享基础设施 + 有真实逻辑的包**。

## 结论摘要

| 级别 | 定义 | 数量 |
| --- | --- | ---: |
| **S1 严重** | 未定义行为 / 内存安全 / 必现崩溃 | 10 |
| **S2 逻辑** | 功能错误、状态不一致、静默失败 | 12 |
| **S3 资源与并发** | 泄漏、竞态、生命周期 | 6 |
| **S4 可移植与设计** | 平台相关、架构性隐患 | 7 |

一句话：**框架的"纸面设计"是自洽的，但落地实现里有一批经典 C++ 陷阱**——非虚析构、无拷贝控制、静态缓冲别名、未初始化成员、无界 `sprintf`、`delete[]` 类型不匹配。这些问题在"只造词条、不真正运行"的当前用法下被掩盖了；一旦开始真正实例化对象树，就会集中爆发。

---

## S1 严重缺陷（内存安全 / 未定义行为）

### S1-1 基类析构函数不是虚函数

`src/object/object.h:249-250`

```cpp
class Object {
public:
    Object();//set object name
    ~Object();//clears          // ← 没有 virtual
    virtual int func(...);      // ← 但有大量虚函数
```

`Object` 有 60+ 个虚函数，却没有虚析构。任何

```cpp
Object *o = new Ccar();   // 上转型持有
delete o;                 // ← 未定义行为：Ccar::~Ccar() 不会被调用
```

都会漏掉派生类析构。而框架的 `family` 恰好是 `std::list<void*>`，到处在"以基类视角持有派生对象"。

**修复**：`virtual ~Object();`（一行）。同时 `Cfile`、`CmyMemory` 等中间层也应显式 `virtual ~` 以表意。

### S1-2 无拷贝控制（Rule of Three 全面失守）

`Object` 拥有裸指针成员 `buf`/`cin_buf`，`CmyMemory` 拥有 `char *addr`，`Cfile` 拥有 `std::fstream ap_fs` + 多个 `char*`。三者都**没有**拷贝构造/拷贝赋值（全库 grep 无 `operator=`、无 `Object(const Object&`）。

于是默认浅拷贝 + 析构里 `delete[]` → **双重释放**：

```cpp
Object a;
Object b = a;   // b.buf == a.buf（隐式浅拷贝）
                // 两次 ~Object() → delete[] 同一指针 → heap corruption
```

同样：`CmyMemory m2 = m1;`、按值传递/返回 `Cfile`、`std::vector<Cfile>` 扩容，都会踩。

**修复**：`Object(const Object&) = delete; Object& operator=(const Object&) = delete;`——本项目几乎没有值语义需求，直接禁用最安全。

### S1-3 `localtime()` 静态缓冲区三重别名

`src/object/object.cpp:80-82`

```cpp
this->tm_start = localtime(&this->start_time);
this->tm_at    = localtime(&this->at_time);
this->tm_end   = localtime(&this->end_time);
```

`localtime` 返回**指向同一个静态 struct tm 的指针**。三个成员最终指向同一块内存，内容是最后一次调用的结果。`Otime` 的"起点/当前/终点"三个时间**永远相同**，且任何其它线程/代码再调 `localtime` 都会改写它们（非线程安全）。

**修复**：

```cpp
struct tm tm_start_s, tm_at_s, tm_end_s;   // 加三个实体成员
this->tm_start = localtime_r(&this->start_time, &tm_start_s);  // POSIX
// Windows: localtime_s(&tm_start_s, &this->start_time)
```

### S1-4 `ObjectRelation` 成员未初始化即入表

`src/object/object.h`（`class ObjectRelation { public: void *obj; Orelation *relation; };`，无构造函数）
`src/object/object.cpp:185`

```cpp
ObjectRelation * obj_r = new ObjectRelation();   // obj / relation 是野指针
this->l_relation.push_back(obj_r);
// 入参 o、r 校验了，却从来没赋给 obj_r->obj / obj_r->relation
```

任何后续遍历 `l_relation` 的代码都会解引用垃圾地址。

**修复**：`ObjectRelation *obj_r = new ObjectRelation{o, r};`（需给结构体加构造函数）。

### S1-5 `Cpath::my_clear` 的 `delete[]` 类型不匹配

`src/path/path.cpp:34`（分配）与 `:267`（释放）

```cpp
this->allot((int)size, (void**)&p_name);   // Object::allot → new char[size]
...
if(i) delete[](i);                          // i 是 DIR_T*（Windows 下 = wchar_t*）
```

以 `char[]` 分配、以 `wchar_t[]` 释放——**类型不匹配的 `delete[]`，标准定义为未定义行为**，Windows/UNICODE 构建下是堆破坏级别的问题。

**修复**：统一用 `char*` 存/放，或让 `allot` 按 `sizeof(DIR_T)` 走 `new TCHAR[]` 并由同一类型释放。

### S1-6 `Cfile::is_exist_func` 越界读 `*(cp-1)`

`src/file/file.cpp:348-353`

```cpp
cp = this->f_find(f_name, func_name, cp);
if(!cp) return 0;
if( *(cp-1)!=' ' && *(cp-1)!='\t' )   // ← 匹配位于文件首字节时，读 buf[-1]
```

函数名出现在文件最开头（很常见：`main.cpp` 第一行 `#include` 之后紧接 `int main`，但若文件以 `main` 开头则命中）→ 读取缓冲区前一个字节，UB，ASan 必报。

**修复**：`if (cp > this->addr && *(cp-1) != ' ' && *(cp-1) != '\t')`。

### S1-7 KMP 的 `next` 数组越界

`src/algorithm/search.cpp:54, 62-64`

```cpp
tlen = (int)strlen(str);
next = (int*)malloc(tlen*sizeof(int));   // 只有 0..tlen-1
...
while (i<len && j<=tlen) {
    if (j==0 || start[i]==str[j-1]) { i++; j++; }
    else j = next[j];                    // ← j==tlen 时读 next[tlen] 越界
}
```

`j` 可以等于 `tlen`，此时 `next[tlen]` 越界读；同时 `i<len` 的边界与 `strlen` 的 `int` 截断（`len` 是 `long`）都不严谨。

**修复**：`malloc((tlen+1)*sizeof(int))` 并让 `get_next` 使用 1-based 约定；`tlen` 检查 `> INT_MAX`。

### S1-8 Windows 分支把 `nullptr` 传给 `strrchr`

`src/main/main.cpp:36-45`

```cpp
char * str_tag=nullptr;          // 外层，未使用
...
char * str_tag=(char *)argv[argc];   // 内层，遮蔽外层
if(false==this->is_identifier(str_tag)) {
    if(false==this->is_path(str_tag)) return -1;
    str_tag=strrchr(str_tag,'/');            // 无 '/' 时 → nullptr
#if WINDOWS_OS
    if(!str_tag) str_tag=strrchr(str_tag,'\\');  // ← strrchr(nullptr, ...) → UB/崩溃
#endif
    if(!str_tag) return -1;
```

Windows 下传入纯 Windows 路径（`src\\car\\car_door`）必然走到 `strrchr(nullptr, '\\')`。Linux 下反而因为 `#if` 屏蔽而"看起来正常"。

**修复**：先保存原指针，再分别探测两个分隔符：

```cpp
const char *p = std::max(strrchr(str_tag,'/'), strrchr(str_tag,'\\'));
```

### S1-9 `wait_char_abcd` 在 EOF 上死循环

`src/ex_func/ex_func.cpp:55-64`

```cpp
while(1) {
    c=getchar();
    if(c=='A'||c=='a') return 1;
    ...
}
```

`getchar()` 在 stdin 关闭/重定向耗尽后**永远返回 EOF(-1)**，四个分支都不命中 → 100% CPU 空转，程序挂死。非交互运行（管道、CI、脚本）必现。

**修复**：`if (c == EOF) return -1;`，并考虑 `return 0` 而非 `exit(0)`。

### S1-10 `s_toupper` 把负值传给 `toupper`

`src/object/object.cpp:660-665`

```cpp
for (i=0; i<len; ++i)
    str[i]=toupper(str[i]);     // char 若为负（UTF-8 中文/扩展 ASCII）→ UB
```

`toupper` 的形参必须是 `unsigned char` 范围内或 `EOF`。本项目大量字符串是 UTF-8 中文（`name`、`alias`、`package` 可能含中文），一旦对含中文的串调用 `set_upper_str`/`toupper_replace` 就是 UB（glibc 上多为查表越界）。

**修复**：`str[i] = (char)std::toupper((unsigned char)str[i]);`

---

## S2 逻辑缺陷

### S2-1 子对象处理成功，`dispatch_cmd` 仍返回 -1

`src/object/object.cpp:1437-1468`

```cpp
for (it = this->family.begin(); ...) {
    ret = o->dispatch_cmd(argc, argv);
    if (ret) continue;      // 子对象返回 0 才 break
    break;
}
return -1;                  // ← 无论如何都返回 -1
```

子孙命中并成功执行后，最外层调用者收到的仍是"失败"。上层若据返回值决定后续动作，会误判。

### S2-2 `execute(string fun_name, ...)` 无 `break`，同签名函数全部被执行

`src/object/object.cpp:545-560`

```cpp
for (it = this->ex_func.begin(); ...) {
    if (it->isMe(fun_name)) ret = it->runMe(p, new_thread);  // 命中后继续遍历
}
```

同名的多个登记项会被**依次全部调用**，且 `ret` 只保留最后一次。`add_ex_func` 不做去重，重复注册即重复副作用。

### S2-3 `removeMe` 破坏双向链，留下悬挂反指针

`src/object/object.cpp:216-238`

```cpp
addMe(o):   family.push_back(o);  o->exist_family.push_back(this);   // 双向登记
removeMe(i): family.remove(i);                                        // 只删单向！
```

被移除对象 `exist_family` 里仍保留指向父对象的指针；父对象析构后该指针悬空，`remove_exist_family()`/`clear_exist()` 再访问就是 UAF。注意 `~Object()` 里 `remove_exist_family()` 是被注释掉的（注释写着 `error exception !!`），说明作者自己踩过。

### S2-4 `Object::execute` 在线程里跑栈上指针

`src/object/object.cpp:519-525`

```cpp
std::thread(func, p).detach();
```

`p` 是裸 `void*`，调用方经常传栈地址。仓库自己的测试就是这么用的：

```cpp
char cmd[]="dir";
i.execute((char *)"runcmd", cmd, true);   // cmd 是栈数组，函数在另一线程读它
```

若 `cmd` 所在作用域先退出 → 线程读悬空内存。且线程内异常未捕获 → `std::terminate`。

### S2-5 `Cfile::f_read` 不更新 `f_name`

`src/file/file.cpp:114-144`

读了 `f_name` 参数指向的文件，却没有 `this->f_name = f_name;`。于是 `f_find()` 的缓存判断 `this->f_name != f_name` **永远成立**（`f_name` 为空），每次都重新读盘；`is_exist()`/`f_size()` 也仍指向旧文件。

### S2-6 `Cfile::create`/`f_append` 的打开模式依赖平台，新文件可能建不出来

`src/file/file.cpp:69` 与 `:396-404`

```cpp
ap_fs.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);
// -------------------------------------------------------
ap_fs.open(f_name, std::fstream::in | std::fstream::out | std::fstream::trunc);
```

带 `in` 的打开在 POSIX/libstdc++ 语义下等价于 `fopen("r+")`——**文件不存在就失败**。而返回值从不检查，调用方（`Cclass::deal_cmd`）直接 `f_append`，于是"生成新类文件"可能**静默失败**（流处于 fail 状态，什么也不写）。

这解释了一个现象：仓库里大量生成物是既存文件，真正"从零创建"的路径缺乏保障。**建议在目标平台实测**（MSVC 对 `in|out|trunc` 的映射与 libstdc++ 不同），并把创建逻辑改为 `out|trunc` 或 `std::filesystem`。

### S2-7 `Cmy_sql` 默认构造后 `host/user/password` 是野指针

`src/my_sql/my_sql.cpp:43-47`

```cpp
Cmy_sql::Cmy_sql() { this->use_db = nullptr; this->my_init(); }
int Cmy_sql::my_init(void *p) { name/alias; mysql=nullptr; is_connect=false; ... return 0; }
// host / user / password / db_name / tab_* 全部未初始化
```

若先默认构造再调 `connect()`，`mysql_real_connect(..., this->host, this->user, this->password, ...)` 收到垃圾指针 → 崩溃或连到随机主机。只有走 `my_init(password,user,host,...)` 才安全，但类型系统不阻止错误用法。

### S2-8 4 KB 固定 SQL 缓冲 + 无界 `sprintf`

`src/public/sql.cpp`（`sql_buf_len = allot(PAGE_4K, &sql_buf)`）+ `src/my_sql/my_sql.cpp:282-456`

24 处 `sprintf(this->sql_buf, FMT, db_name, tab_name, ...)`，其中 `db_name/tab_name/col_value` 可能来自命令行参数（`deal_cmd` 的 argv）。库名稍长（>4 KB 总长）即**堆溢出**；同时这些值直接拼进 SQL 文本，构成 **SQL 注入**（`is_exist` 的 `col_value` 最典型）。

**修复**：`snprintf` + 长度校验；参数化查询或至少 `mysql_real_escape_string`。

### S2-9 `Ccode` 的 4 KB 缓冲 + `sprintf` + 失败即 `exit`

`src/code/code.cpp:23` 与 `:119-192`

```cpp
if (0 == this->allot((int)CODE_BUF_LEN, (void **)&this->code_buf)) exit(-1);
...
sprintf(this->code_buf, G_CODE_H_DEFINE_PACKAGE, this->upper_str.c_str(), this->upper_str.c_str());
```

包名来自命令行，长度无上限；`sprintf` 无界 → 溢出。另外**库代码里 `exit()`** 让调用方无法处理错误（正常应返回错误码）。

### S2-10 `CfileAllot::allot` 空文件时 `empty` 标志不重置

`src/file/fileAllot.cpp:83-85`

```cpp
if(p->file_size>0){ p->empty=false; }   // 只有 >0 才置 false
// file_size==0 时 p->empty 保持上一次的值 → 状态陈旧
```

复用同一个 `CfileMem` 读大文件再读空文件，`empty` 仍是 `false`，后续逻辑误判。

### S2-11 `Object::set_time` 的守卫条件写错位置

`src/object/object.cpp:791-815`

```cpp
if(tm_mon>12||...||tm_year<1900) return -1;
if(tm_mday) t->tm_year = tm_year - 1900;   // ← 判据是 mday，但前面已保证 mday>=1
...
mktime(t);                                  // t 未做空指针检查
```

`tm_year` 的赋值被 `tm_mday` 守卫（恒真），而 `t == nullptr` 会直接解引用崩溃；`tm_mon>12` 应为 `>12` 但注释与 `mon-1` 之间容易差一。

### S2-12 `is_exist()` 带打印副作用

`src/file/file.cpp:53`

```cpp
if (this->silent == 0) std::cout << "is_exist=" << ret << endl;
```

一个**查询谓词**往 stdout 打日志。生成器在循环里调用它，输出噪声会污染管道（脚本解析 stdout 的场合直接坏掉）。

---

## S3 资源与并发

| 问题 | 位置 | 说明 |
| --- | --- | --- |
| `object_id` 非原子自增 | `object.cpp:88-90` | `this->id = ++object_id;` 在构造中执行；配合 `execute(..., true)` 的线程，构成数据竞争，可能产生重复 id |
| 全局对象静态初始化顺序 | `object.cpp:1240` `Object object_global;` | 与 `g_code.i` 里的全局实例存在跨 TU 初始化顺序问题；信号处理器可能在 `object_global` 构造前被触发 |
| 每条 `std::thread(...).detach()` 无线程池、无背压 | `object.cpp:63,524,533` | 高频调用会瞬间创建大量线程；异常逃逸 → `terminate` |
| `f_append` 每次 open/close | `file.cpp:67-74` | 每写一行开关一次文件；生成器写几千行时性能极差，且 open 失败无感知 |
| 库代码里 `exit()` | `code.cpp:23`、`search.cpp:57`、`ex_func.cpp:62` | 失败策略是"杀进程"，无法被上层捕获 |
| 裸 `new`/`delete` 遍布 | `object.cpp:185,206`、`path`、`code` | 无 RAII；异常路径下泄漏（`add_relation` 的 `new` 与 `catch` 不配对） |

---

## S4 可移植性与设计

1. **`all_h_include.h` 全是反斜杠路径**（3,067 条）——Linux/GCC 编不过（已在 KB 10-pitfalls P2 记录）。
2. **`TCHAR`/`wchar_t` 与 `char` 混用**：`Cpath` 用 `DIR_T`，`Object::allot` 用 `char`，二者交叉（S1-5）；Windows 下 `_stprintf`+`TEXT("%s\\%s")` 在 UNICODE 构建里依赖 MSVC 的 `%s` 宽字符语义，非标准。
3. **`-L/usr/lib/mysql` 硬编码**（`src/Makefile`）——发行版差异直接链接失败。
4. **`main` 靠宏选择**（`-D$(main)_TEST=1`）——同一份源码产出不同程序，构建系统与 IDE 都难以理解；漏传 `main=` 就没有入口。
5. **60+ 字段的万能 `Osetting`**：每个对象都背着 uuid/时间/空间/缓冲/富媒体列表，`sizeof(Object)` 很大；3,117 个类全实例化时的内存与 cache 表现堪忧。
6. **空实现的虚函数族**：`past/future/current/condition/secure/context/...` 几十个全是 `return -1`。它们构成"看起来能做一切"的 API 面，但没有任何契约保证；且全库几乎不用 `override` 关键字，签名写错时不会报错（只是悄悄变成新函数）。
7. **错误处理三套并存**：返回码（`<0/0/>0`）、`exit()`、`std::cout` 打印。调用方无法可靠判断失败。

---

## 修复优先级建议

### P0（改动小、收益最大，建议立刻做）

1. `object.h:250` → `virtual ~Object();`
2. `Object`/`CmyMemory`/`Cfile` 增加 `= delete` 的拷贝构造与赋值
3. `ObjectRelation` 加构造函数并真正赋值（`object.cpp:185`）
4. `localtime` → `localtime_r`/`localtime_s` + 三个实体 `tm`
5. `Cfile::is_exist_func` 加 `cp > this->addr` 边界判断
6. `wait_char_abcd` 加 `EOF` 退出
7. `main.cpp` 的 `strrchr(nullptr)` 与变量遮蔽

### P1（需要小重构）

8. 全库 `sprintf` → `snprintf`（55 处 SQL + 8 处 code + 其它），并给 `sql_buf` 加长度校验
9. `dispatch_cmd` 返回值语义修正；`execute(string)` 命中后 `break`
10. `removeMe` 同步维护 `exist_family`（或干脆删除这条反向链，改为弱引用）
11. `Cmy_sql` 所有指针成员在 `my_init(void*)` 里初始化为 `nullptr`
12. `Cfile::create/f_append` 改 `std::ofstream(path, std::ios::app)`，并检查 `is_open()`

### P2（架构层）

13. 引入 `std::unique_ptr`/`std::shared_ptr` 管理 `family` 与 `my_mem`，把 `void*` 家族表换成 `std::vector<Object*>` + 明确所有权
14. 线程执行改为线程池 + `std::future`，禁止 `detach` 携带裸指针
15. 用 `override`/`final` 标注，打开 `-Wall -Wextra -Wshadow -Wconversion`
16. 加 ASan/UBSan 的 CI 目标（`cmake` 或 `make test`），先在 `object/code/file/path/my_sql` 四个包上跑
17. 把"库代码 `exit()`"全部改为返回错误码

---

## 复核清单（建议后续实测）

| 待验证 | 方法 |
| --- | --- |
| `in|out|trunc` 在新文件上的行为 | 在 Linux(`g++`) 与 Windows(`cl`) 各写 10 行程序验证（S2-6） |
| ASan 能否复现 `*(cp-1)` 与 `next[tlen]` | `-fsanitize=address` 跑 `Cfile::is_exist_func`、`Csearch::searchKmp` |
| `localtime` 别名 | 打印 `tm_start/tm_at/tm_end` 指针与 `tm_sec` |
| `dispatch_cmd` 返回值 | 构造父子两个对象，子命中后看父的返回码 |
| 拷贝双重释放 | `Object a; Object b = a;` 在 ASan 下必报 |

> 本文件是 `ai/kb/` 的第 13 篇，与 `10-pitfalls.md`（工程/构建坑）互补：那里是"怎么用会踩坑"，这里是"代码本身哪里写错了"。
