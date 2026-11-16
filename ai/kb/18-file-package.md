# 18 file 包解剖：package → namespace → class → command → action

> 标本：`src/file/`（6 个源文件 + 1 个 Makefile，共 1,370 行；3 个类；43 条动作）。
> 为什么选它：它是全库**五层结构最完整**的包——同时具备"命令对象 + worker + POD"三种角色，被 9 个文件依赖，自己依赖 7 个包，且是 `Ccode`/`Cclass`/`Cmain` 继承链的上游。
> 机器可读版：`file-actions.json`（43 条动作的 enum/命令词/help/argv 全表）。

---

## 1. 五层总图

```
src/file/                              L1  package（目录 = 包 = alias = MK_TAG）
  file.h  file.cpp                     L2/L3  namespace n_file + class Cfile
    file_action.h                      L4  command：enum FileAtcionClass / FileAtcion
    file_action.i                      L5  action：HELP 宏 + Action file_action[] + COUNT
  fileAllot.h  fileAllot.cpp           L3  辅助类 CfileAllot（worker）+ CfileMem（POD）
  Makefile                             L1  包级构建
```

层级职责一句话：

| 层 | 回答的问题 | file 包中的落点 |
| --- | --- | --- |
| package | 这个能力属于哪个域？ | `src/file/` |
| namespace | 符号如何避免冲突？ | `n_file` + 文件尾 `using namespace n_file;` |
| class | 谁承载状态和行为？ | `Cfile`（命令对象）/`CfileAllot`（worker）/`CfileMem`（POD） |
| command | 能被命令行怎么调？ | `file_action.h` 两个 enum + `deal_cmd` 六步 |
| action | 每个命令具体做什么？ | `file_action.i` 的 43 条 `Action` + `do_action` 分派 |

---

## 2. L1 package

| 文件 | 行 | 角色 |
| --- | ---: | --- |
| `file.h` | 85 | `Cfile` 声明：12 个字段 + 50 个方法声明 |
| `file.cpp` | 834 | `Cfile` 实现：业务方法 + 协议三件 |
| `file_action.h` | 77 | 两个动作枚举 |
| `file_action.i` | 135 | 帮助宏 + 动作表 + `FILE_ACTION_COUNT` |
| `fileAllot.h` | 46 | `CfileAllot` + `CfileMem` |
| `fileAllot.cpp` | 172 | 整文件读入 / 释放 / 分词 |
| `Makefile` | 21 | `MK_TAG = file` |

包的四个"同一"：**目录名 = 包名 = 类名去 C = alias = MK_TAG**（`file`）。
包内**没有** `file_g_code.i`：file 不属于全局宇宙，靠调用方 `Cfile f;` 实例化使用（对比 `cstdio` 等 7 个已注册包）。

---

## 3. L2 namespace

```cpp
namespace n_file {
    class Cfile : public CmyMemory { ... };
}
using namespace n_file;
```

三条实证：
1. 命名空间名 = `n_` + 包名，与目录名严格一致。
2. 头文件在关闭命名空间后立即 `using namespace n_file;`，让调用方无需限定。
3. 头文件守卫**并不统一**：`FILE_H`、`FILE_ACTION_H` 规范，但 `fileAllot.h` 用 `FILEALLOT_H`、`move.h` 用 `MOVE_H` —— 守卫命名没有强制机制。

---

## 4. L3 class（包内三种角色）

| 类 | 角色 | 基类 | 位置 | 是否命令对象 |
| --- | --- | --- | --- | --- |
| `Cfile` | 命令对象 + 服务提供者 | `CmyMemory` → `Object` | `file.h/.cpp` | ✅ 有 `deal_cmd` |
| `CfileAllot` | worker（只被内部用） | `Object` | `fileAllot.h/.cpp` | ❌ |
| `CfileMem` | POD（纯数据） | 无 | `fileAllot.h` | ❌ |

**继承链**：`Cfile : CmyMemory : Object` —— 所以 `Cfile` 既有对象体系（id/uuid/name/alias/动作/家族），又有 `CmyMemory` 的 `addr/size/type/allot()`（文件内容缓冲）。

### Cfile 的 12 个字段（参数槽）

| 字段 | 类型 | 用途 | 谁写它 |
| --- | --- | --- | --- |
| `f_name` | string | 目标文件名 | 几乎所有动作 |
| `s_output_fname` | string | 输出文件名 | cut/copy/rn/mv/swap |
| `ap_fs` | fstream | 追加写句柄 | f_append/create |
| `src_file` / `target_file` | char* | swap 的源/目标 | swap |
| `fname_left` / `fname_right` | char* | compare/diff 的两侧 | compare/fc/diff |
| `diff_file` | char* | diff 输出 | different |
| `crc_func` | char* | crc 算法名 | crc |
| `swap_start` / `swap_size` | size_t | swap 区间 | swap |
| `display_type` | DisplayType | cat 的显示格式 | cat |

另有继承来的参数槽：`range_start` / `range_amount`（`Orange` 的 `Udata`，被 cat/cut 当 start/size 用）、`before` / `after`（md5 的前后缀打印）。

### CfileMem —— POD 的写法

```cpp
class CfileMem {
public:
    char *start; char *current; char *end;   // 三指针
    size_t file_size; size_t read_size;
    bool empty;
    void clear();                            // 六字段全部归零
};
```

POD 不继承 `Object`，只做数据载体；它的生命周期由 worker 的 `freeMe()` 管理（`malloc/free`）。

---

## 5. L4 command

### 5.1 两个枚举（`file_action.h`）

```cpp
enum class FileAtcionClass {   // 20 项（含 none）：处理器分组，19 个实际分组
    none, create, remove, rename, read, write, rd_wr, exist, size,
    merge, replace, compare, insert, checksum, crc, md5, find, list, diff, swap
};

enum class FileAtcion {        // 44 项（含 none）：43 条动作，含别名
    none, read, cat, cut, copy, cp, create, add, remove, rm, _delete, del,
    rename, rn, move, mv, exist, ex, size, sz, merge, merge_op, replace, rp,
    compare, fc, insert, ins, checksum, chksum, crc, md5, find, fd,
    find_replace, fr, list, ls, dir, ll, different, diff, swap, sw
};
```

**关键实证：`FileAtcion` 用的是顺序值（0,1,2,...），不是 `BITn` 位掩码。**
对比 `code_action.h`：`create_h = BIT0, create_c = BIT1, create_func = BIT2, set_package = BIT3`。
后果：file 的动作**不能组合**，`do_action` 只能用 `==` 逐一比较；而 `is_action(..., bit_and)` 在 file 上语义失效。这是全库风格不统一的地方（见 19-constraints C5）。

### 5.2 动作表（`file_action.i`）三段式

```cpp
// 第一段：每个动作一条帮助宏
#define FILE_CAT_HELP  "cat  <FileName> [start] [size] [DisplayType={string,hex,hex_offset}]"

// 第二段：表项（action_class, 动作位, 关系, 回调, 命令词, 帮助）
Action file_action[] = {
    { (int)FileAtcionClass::read,(ACTION_T)FileAtcion::cat,
      EatcionRelation::equal, nullptr, (char *)"cat", (char *)FILE_CAT_HELP },
    ...
    { 0,0,EatcionRelation::none,nullptr },   // 结束锚点
};

// 第三段：条数
#define FILE_ACTION_COUNT (sizeof(file_action) / sizeof(Action))
```

### 5.3 "三个名字"必须分清

| 概念 | 例子 | 谁用 |
| --- | --- | --- |
| enum 标识符 | `FileAtcion::_delete` | 代码内部比较 |
| **命令词**（表里的第 5 列） | `delete` | 用户在命令行输入 |
| 帮助宏 | `FILE_DELETE_HELP` | `action_help` + 文档 |

三者**可以不同**，且 file 包里真的不同：

| enum 标识 | 命令词 | 备注 |
| --- | --- | --- |
| `_delete` | `delete` | 因为 `delete` 是 C++ 关键字 |
| `merge_op` | `+` | 运算符当命令 |
| `find_replace` | `find_relpace` | **拼写错误被固化进命令**（拼写 relpace），且帮助宏 `FILE_FIND_RELPACE_HELP` 同步拼错 |

### 5.4 六步 `deal_cmd`（`file.cpp:790-820`）

```
1  argc < 3            -> action_help(FILE_ACTION_COUNT) + return -1
2  cmd = {argc, argv}  -> 存档原始命令行
3  get_cmd("silent")   -> this->silent = 1
4  get_action(table, COUNT, argv[1]); 0 则 atoll(argv[1]) 兜底
5  set_action_parameter(argc, argv)   失败 -> return -1（注意：返回前没有统一 help）
6  do_action();  return 0
```

与 `Object::deal_cmd(5 参)` 的差异：file 是手写版（没有走通用函数），第 5 步失败时**不打印帮助**——用户只得到一个退出码。

### 5.5 `set_action_parameter`（`file.cpp:671-788`）

结构是**按动作分组**的 if 链：

```
argv[2] -> this->f_name            // 所有动作的公共主参数
crc      : argv[3] 若含 "crc" -> crc_func
cut      : argv[3]=start  argv[4]=size  argv[5]=out
cat      : argv[3]=start  argv[4]=size  argv[5]=display_type(字符串枚举)
copy/rn/mv: argv[3]=out
compare/diff: argv[2]=left argv[3]=right argv[4]=diff_file；argc<=3 -> help + -1
find_replace/fr: 两段重复的 argc 检查（第二段才真正要求 argc>5）
md5      : argv[3]=before  argv[4]=after
swap     : argc<6 -> help + -1；argv[2..5]=src/target/start/size，argv[6]=out
```

三种写法同时存在：**默认值**（cut 的 start=0/size=-1）、**可选值**（crc_func）、**强制校验**（compare、swap）。这是该文件最"重"的部分，也是新增动作时最容易漏的地方。

### 5.6 `do_action`（`file.cpp:639-667`）

43 条 `if (this->action == ...) this->set_main_ret(this->method())`。
别名在条件里合并：`read||cat`、`rm||_delete||del`、`list||dir||ll||ls`。
返回值统一进 `main_return_value`，由 `main` 决定进程退出码。

---

## 6. L5 action：43 条动作的全貌

按语义分 10 组（完整参数见 `file-actions.json`）：

| 组 | 动作（命令词） | 主实现 |
| --- | --- | --- |
| 读取 | `read` `cat` | `f_read + Cdisplay::display` |
| 切片 | `cut` | 读入→写区间→存盘 |
| 复制 | `copy` `cp` | 委托 `cut` |
| 创建 | `create` `add` | `f_append/create` |
| 删除 | `remove` `rm` `delete` `del` | `remove()` |
| 重命名 | `rename` `rn` `move` `mv` | `rename()` |
| 查询 | `exist` `ex` `size` `sz` | `is_exist/f_size` |
| 合并 | `merge` `+` | Linux: `system("cat … > out")` |
| 文本替换 | `replace` `rp` | 委托 `Creplace` |
| 比较/差异 | `compare` `fc` `different` `diff` | 逐字节 / `Ctext_line::diff` |
| 插入 | `insert` `ins` | 委托 `Cinsert` |
| 摘要 | `checksum` `chksum` `crc` `md5` | `Ccrc` / `Cmd5` |
| 查找 | `find` `fd` `find_relpace` `fr` | `Cpath::list + execute` |
| 列表 | `list` `dir` `ll` `ls` | `Cpath` |
| 交换 | `swap` `sw` | 三段拼接写新文件 |

**别名策略**（4 种）：
1. 同实现双名：`read`/`cat`（read 用默认参数）
2. 全拼 + 缩写：`remove`/`rm`、`checksum`/`chksum`
3. 危险操作的多个同义词：`remove`/`rm`/`delete`/`del`（4 个命令同一个动作）
4. 符号命令：`+` = merge

---

## 7. 参数槽映射（argv 位置约定）

| 动作组 | argv[2] | argv[3] | argv[4] | argv[5] | argv[6] |
| --- | --- | --- | --- | --- | --- |
| read/cat | file | start | size | display_type | — |
| cut | file | start | size | out_file | — |
| copy/rn/mv | file | out_file | — | — | — |
| compare/diff | file1 | file2 | diff_log | — | — |
| md5 | file | before | after | — | — |
| swap | src | target | start | size | out_file |
| find/fd | dir | term | — | — | — |
| find_relpace/fr | dir | term | find | target | — |
| list/ls/ll/dir | dir | term | — | — | — |
| replace/rp | in | out | find | replace | type |

**不变式**：`argv[2]` 永远是这个动作的"主语"（文件/目录）。新增动作必须遵守，否则与全库调用习惯冲突。

---

## 8. worker 与 POD：包内分层

```
Cfile（命令对象，new char[] 缓冲 via CmyMemory）
   └─ 用到 CfileAllot（worker，malloc 缓冲）
          └─ 用到 CfileMem（POD，三指针 + 尺寸）
```

| 维度 | Cfile | CfileAllot |
| --- | --- | --- |
| 基类 | `CmyMemory : Object` | `Object` |
| 缓冲 | `addr/size`（`new char[]`） | `file_m.start/end`（`malloc`） |
| 释放 | `~CmyMemory` → `delete_me()` | `freeMe()` → `free()` |
| 入口 | `deal_cmd` | 无命令接口，只被调用 |
| 典型用法 | 命令行的每个动作 | 整文件读入 + 分词（`token()`） |

**教训**：同一个包里可以并存两种内存风格，但**不能混用于同一块内存**（`new[]` 用了 `free` 就是 UB）。

---

## 9. 依赖关系

### 它依赖谁（fan-out，`#include` 统计）

| 被依赖包 | 头文件 | 用途 |
| --- | --- | --- |
| `memory` | `myMemory.h` | `CmyMemory` 基类 |
| `output` | `display.h` | `cat` 的十六进制/字符串显示 |
| `algorithm` | `search.h` `replace.h` `insert.h` | 查找/替换/插入 |
| `math` | `crc.h` `md5.h` | 摘要算法 |
| `path` | `path.h` | 目录遍历 `find/list` |
| `text` | `text_line.h` | 行级 diff |
| `object`（间接） | 经 memory | Object 内核 |

### 谁依赖它（fan-in，9 个文件）

`class.h`、`code.h`、`main.h`、`collect_file.h`、`stock_question.h`、`algorithm/insert.cpp`、`algorithm/replace.h`、`math/sha.cpp`、`math/sum.cpp`

### 层次规则

```
L0 object ← L1 语言基元 ← L2 基础设施（file/math/path/text/…）← L3 领域 ← L4 工具链
file 属 L2：只向上依赖 L0/L1/L2，被 L3/L4 依赖，不反向依赖领域包。
```

---

## 10. 从 file 提炼的 12 条模式

| # | 模式 | 在 file 中的证据 |
| --- | --- | --- |
| P1 | 一个包只有一个命令对象 | 只有 `Cfile` 有 `deal_cmd` |
| P2 | 命令词独立于 enum 标识 | `_delete→delete`、`merge_op→+` |
| P3 | 同义命令成组注册 | 4 个删除命令指向同一实现 |
| P4 | `argv[2]` 恒为主参数 | 43 条动作全部如此 |
| P5 | 参数落在对象字段，不落局部变量 | 12 个字段 + `range_start`/`range_amount` |
| P6 | 每个动作三件套：argc 守卫 / 默认值 / 帮助 | cut/crc/compare/swap 的分支写法 |
| P7 | `do_action` 一对一 `set_main_ret` | 43 条 if，别名在条件里合并 |
| P8 | 包内可分命令对象 / worker / POD | Cfile / CfileAllot / CfileMem |
| P9 | 包级 Makefile 复制核心子集 | `MK_TAG=file` + 13 组 source_code |
| P10 | 没有全局注册也能工作 | 无 `file_g_code.i`，由调用方实例化 |
| P11 | 帮助文本宏化，动作表引用宏 | 43 个 `#define FILE_*_HELP` |
| P12 | 测试 main 挂在包根类文件尾 | `#if FILE_TEST` |

---

## 11. file 包自身的缺陷（补充 13-defects）

| # | 问题 | 位置 | 后果 |
| --- | --- | --- | --- |
| F1 | `swap` 在 `size==-1` 时尾部拼接分支仍用 -1 计算：`&target.addr[start-1]` | `file.cpp:617-626` | **越界读 1 字节 + 多写 1 字节** |
| F2 | `merge` 用 `system("cat … > out")` 拼命令 | `:538-552` | 文件名含空格/分号即命令注入；返回值丢给 `system` |
| F3 | `find`/`find_relpace` 的 argc 检查重复且第一段为空体 | `:742-759` | 逻辑冗余，易误改 |
| F4 | `find` 打印 `dir=%s\\%s`（硬编码反斜杠） | `:318` | Linux 输出错误分隔符 |
| F5 | `is_exist()` 查询函数带 stdout 副作用 | `:53` | 污染管道输出 |
| F6 | `f_read(f_name)` 不更新 `this->f_name` | `:114-144` | `f_find` 缓存判断永远失效，反复读盘 |
| F7 | `CfileAllot::fsize` 用 `ftell`（long） | `fileAllot.cpp:115-119` | >2 GB 溢出 |
| F8 | `checksum` 把"校验和"当返回值 | `:152-165` | 违反 R1（>0 被当失败），调用方无法区分成功/数值 |
| F9 | `md5()` 不判空 `f_name` | `:214-217` | 空名时用 "" 调算法 |
| F10 | `compare` 构造两个 `Cfile` 整文件入内存 | `:435-454` | 大文件内存翻倍 |

---

## 12. 与其它包对照（风格分歧点）

| 维度 | file | code | main |
| --- | --- | --- | --- |
| 动作值 | 顺序值 | `BIT0..BIT3` | `BIT0` |
| deal_cmd | 手写六步 | 手写（含 package 逻辑） | 手写 |
| 动作数 | 43 | 4 | 1 |
| 帮助 | 43 个宏 | 无 | 无 |
| 全局注册 | 无 | 无（cli 注册表运行时登记） | 无 |

结论：**file 是"命令对象"的完整范本，但动作位写法应向 code 看齐（BITn）**。这两点的取舍写在 `19-package-constraints.md`。
