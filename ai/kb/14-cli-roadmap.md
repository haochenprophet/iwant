# 14 通向"万能命令行工具"的差距与路线图

> 前提：作者目标是把它做成一个**万能命令行工具**。本文不谈业务功能，只谈"作为一个 CLI 工具"它还缺什么、怎么补、按什么顺序补。
> 证据全部来自代码实测（文件:行号），与 `13-defects.md` 互补：那篇是"代码写错了哪里"，这篇是"作为工具还缺哪些能力"。

---

## 0. 先给结论

**现在的它，是一个"能执行命令的库 + 一堆各自为政的 demo 入口"，还不是一个命令行工具。**

| CLI 应具备 | 现状 | 证据 |
| --- | --- | --- |
| 一个稳定入口 | ❌ 每种能力一个 `main`，靠 `-D<NAME>_TEST=1` 切换 | `src/Makefile` 的 `-D$(main)_TEST=1`；每个 `.cpp` 末尾都有测试 main |
| 命令可发现 | ❌ `iwant help` 无输出、退出码 255 | `dispatch_cmd` 未命中时 `return -1`，无提示（`object.cpp:1437-1468`） |
| 命令集稳定 | ⚠️ 只有 62 个全局对象可见，且**仅 `code` 入口注册了它们** | `g_code.i` 62 个 `g_xxx`；全库只有 `code.cpp:264` 调 `add_global_objects()` |
| 参数解析 | ❌ argv 裸取 + `atoll` 兜底 | `object.cpp:1490`、`code.cpp:231` |
| 输出规范 | ❌ 671 处 `std::cout/printf` 直写 | 全库计数 671 |
| 退出码 | ❌ `-1` 直接变成进程码 255 | `main.cpp` 的 `return m.deal_cmd(argc,argv)` |
| stdin/管道 | ❌ 无约定 | 仅 `getchar`/`cin` 零散使用 |
| 版本/补全/man/安装 | ❌ 全无 | 无 `--version`、无 install 目标 |
| 错误不产生副作用 | ❌ **未知子命令会创建文件** | `code class help` → `Cclass::create("help")` → 生成 `help.h/help.cpp` |

一句话：**内核已有"命令 → 对象 → 动作"的骨架，缺的是外壳（CLI 层）与契约（输出/退出码/帮助）。**

---

## 1. 把"万能"拆成 5 个可验收的能力

| # | 能力 | 验收命令 | 通过标准 |
| --- | --- | --- | --- |
| 1 | **可发现** | `iwant help` / `iwant help code` / `iwant --version` | 列出对象与动作、显示版本，退出码 0 |
| 2 | **可预测** | `iwant nosuchcmd` | stderr 报错 + 退出码 2 + **不产生任何文件** |
| 3 | **可组合** | `cat a.cpp | iwant file checksum - --json` | stdin 可作输入，stdout 纯 JSON，stderr 是日志 |
| 4 | **可扩展** | 新增包后不改 main | 新对象自动出现在 `iwant list` |
| 5 | **可分发布** | `make install && iwant --version` | 单文件进 PATH，无额外动态库 |

---

## 2. 逐维度差距（现状 → 差距 → 动作）

### A. 入口：从"N 个 demo"到"1 个程序"

**现状**

- `src/Makefile`：`CFLAGS += -std=gnu++11 -DLINUX_OS -D$(main)_TEST=1`
- `build.sh`：`make main=<大写参数> debug=...`
- 每个 `.cpp` 末尾：`#if CODE_TEST int main(...){...} #endif`

只有 `code.cpp` 的 main 里调了 `c.add_global_objects(); c.dispatch_cmd(argc,argv);`（`code.cpp:258-270`）。`car`、`satellite`、`file` 的 main 各自孤立，什么都调不到。

**动作**

1. 新建 `src/cli/` 包：`Ccli`（门面）+ `Carg`（解析）+ `out`（输出）+ `ErrorCode`（退出码）。
2. 固定一个 `main`：`return Ccli::run(argc, argv);`，不再用 `main=` 选入口。
3. `-Dx_TEST` 只保留给单元测试，不再承担"产出程序"的职责。
4. 保留 `code` 作为兼容别名，避免 `batch/*.bat` 全废。

**工作量**：2 天。

### B. 注册：62 个 vs 3,117 个

**现状**：`g_code.i` 只有 62 个全局实例；只有 7 个包（`cstdio/cstdlib/ctime/ctype/math/message/operator`）有 `*_g_code.i`。`car`(163 类)、`satellite`(168)、`instruction`(951) 都不在命令宇宙里。

**动作**

1. **分层注册**：core（约 20 个动作型对象：`code/class/main/file/path/text/my_sql/build/display/uuid/socket`）+ domain（按需加载）。
2. 统一注册接口，替代散落的 `add_objects(Object*)`：

   ```cpp
   struct IModule { virtual const char* name() = 0; virtual void add(Object* root) = 0; };
   ```

3. 建**索引**，别靠遍历：

   ```cpp
   std::unordered_map<std::string, Object*> index;   // name/alias → object
   ```

**为什么必须建索引**：`dispatch_cmd` 是线性递归（`object.cpp:1437`），注册 3,000 个对象后每条命令都要做上千次字符串比较。

**工作量**：3 天。

### C. 派发：把"魔法"变成"契约"

**现状**（`object.cpp:1437`）

```cpp
if (argc > 2 && strcmp(argv[1], "runme") == 0) return this->dispatch_runme(argv[2], &this->cmd);
if (this->isMe(argv[1])) { this->deal_cmd(argc-1, &argv[1]); return 0; }
for (it = family.begin(); ...) { ret = o->dispatch_cmd(argc, argv); if (ret) continue; break; }
return -1;      // 未知命令：静默失败
```

**三个硬伤**

1. 未知命令**没有任何提示**，用户不知道是打错了还是工具坏了。
2. 返回 `-1` 恒成立（子对象成功也返回 -1，见 13-defects S2-1）。
3. **副作用先于校验**：`code class help` 的 `help` 被当类名，直接生成 `help.h/help.cpp`（`class.cpp:44-70`）。

**动作**：三段式语法 + 白名单校验

```
iwant <object> <action> [options] [args...]
```

| 规则 | 实现 |
| --- | --- |
| `object` 必须命中索引 | 否则 `error: unknown object 'xxx'` + 提示 `iwant list` + **退出码 2** |
| `action` 必须命中动作表 | 否则列出该对象可用动作（动作表已有 `help` 字符串，见 `file_action.i`） |
| 破坏性动作默认干跑 | 写文件前 `--dry-run` 打印计划，真正执行要 `--force` |
| `--` 之后是位置参数 | 避免文件名以 `-` 开头被误判 |

**工作量**：2 天。

### D. 参数解析：现在没有解析器

**现状**

- `this->action = get_action(table, count, argv[1]); if (this->action == 0) this->action = atoll(argv[1]);`（`object.cpp:1489-1491`）
- 动作是 64 位位掩码（`ACTION_T`），帮助却打印成数字：`printf("%d %s", (int)a[i].t, a[i].name)`（`action_help`）。

**差距**：无 `-h/--help`、`--key=value`、`-abc` 合并、`--` 终止符、类型校验、缺参提示；用户要记动作数字。

**动作**：写约 120 行 `Carg`

```cpp
struct Carg {
  std::vector<std::string> pos;
  std::map<std::string, std::string> opt;
  std::set<std::string> flag;
  bool has(const char* k) const;
  std::string get(const char* k, const char* def="") const;
  int parse(int argc, char** argv);   // 失败返回 ErrorCode::Usage
};
```

位掩码保留在内部，对外只暴露动作名。

**工作量**：1.5 天。

### E. 输出：671 处直写

**现状**：`std::cout`/`printf` 共 671 处；连查询函数都打印（`file.cpp:53` 的 `is_exist` 打印 `is_exist=1`）。

**差距**：无法 `--json`、无法 `--quiet`，日志与数据都走 stdout（`2>/dev/null` 无效）。

**动作**

1. 输出门面：

   ```cpp
   namespace out {
     void data(const std::string&);   // stdout：机器可读
     void info(const std::string&);   // stderr
     void warn(const std::string&);   // stderr
     void error(const std::string&);  // stderr
   }
   ```

2. **只先替换核心 4 个包**（object/code/file/path，约 70 处），其余保持兼容。
3. `--json` 统一信封：

   ```json
   {"ok":true,"object":"code","action":"class","data":{"files":["car_door.h"]},"error":null}
   ```

**工作量**：核心 2 天。

### F. 退出码：现在只有 0 和 255

**现状**：`main` 直接 `return m.deal_cmd(...)`，返回 `-1` → 进程码 255；库里 6 处 `exit()`（`code.cpp:23`、`search.cpp:57`、`ex_func.cpp:62` 等）。

**动作**：定码表 + 禁止库层 exit

| 码 | 含义 |
| ---: | --- |
| 0 | 成功 |
| 1 | 通用失败 |
| 2 | 用法错误（未知对象/动作/缺参） |
| 3 | 未找到 |
| 4 | 权限 |
| 5 | IO |
| 6 | 数据库/网络 |
| 7 | 内部错误 |
| 130 | SIGINT 中断 |

**工作量**：1 天。

### G. 输入：没有 stdin 约定

**现状**：无 `-` 表示 stdin；`Cfile::f_read` 只吃路径；`CfileAllot` 整文件读入内存（`fileAllot.cpp:85`）。

**动作**

1. 输入源抽象：`CSource{ file | stdin | string }`。
2. 接受文件名的动作统一支持 `-` 与 `--input-`。
3. 大文件走流式。

**工作量**：1.5 天。

### H. 终端与编码：Windows 下中文必乱

**现状**：全库 grep 无 `SetConsoleOutputCP` / `_setmode` / `setlocale`。Windows 控制台默认 GBK 代码页，输出 UTF-8 中文即乱码（分析期实测同类问题）。

**动作**：`Ccli::init_console()`

```cpp
#ifdef WINDOWS_OS
  SetConsoleOutputCP(CP_UTF8);
  _setmode(_fileno(stdout), _O_U8TEXT);   // 或 _O_BINARY + 自行编码
#endif
```

顺带做 `isatty` 探测与 `--no-color`。

**工作量**：0.5 天。

### I. 分发：现在只能"自己会编译"

**现状**：`build.sh` 产出 `./iwant`；Windows 靠 `.sln`；无 `--version`、无 install、无 man/补全。

**动作**

1. 版本注入：`-DIWANT_VERSION="$(git describe --tags --always)"` + 构建时间。
2. `make install PREFIX=/usr/local` → `bin/iwant` + man page。
3. `iwant completion bash|zsh|powershell`（可由 `iwant list --json` 生成）。
4. 可选：`-static-libstdc++` 做单文件分发。

**工作量**：2 天。

### J. 测试：没有任何 CLI 级测试

**现状**：测试 = 每个 `.cpp` 的 `#if X_TEST main`，默认 0；无脚本断言、无快照。

**动作**：`tests/cli/` + 50 行跑测脚本

```
tests/cli/cases/
  help.out            # iwant help 快照
  unknown.cmd         # iwant nosuchcmd → 期望退出码 2 且无新文件
  json-code-class.cmd # iwant code class x --json --dry-run → 校验 JSON 字段
```

**工作量**：1.5 天（先 10 个用例）。

---

## 3. 目标对外契约

```
iwant <object> <action> [options] [args...]
iwant help [object[:action]]
iwant list [--json]
iwant version
iwant completion <shell>
```

示例：

```bash
iwant code class car_door --path src/car --dry-run
iwant code class car_door --path src/car --force --json
iwant file cat src/car/car.h --hex
echo "int main(){}" | iwant file checksum -
iwant my_sql query "show databases" --db mysql --json
```

**兼容**：`code class x` 等价于 `iwant code class x`（argv[0] 别名）。

---

## 4. 最小改造骨架

```cpp
// src/cli/cli.h
namespace n_cli {
enum class ErrorCode { OK=0, Fail=1, Usage=2, NotFound=3, Permission=4, IO=5, Net=6, Internal=7 };

class Ccli : public Object {
public:
    static int run(int argc, char** argv);      // 唯一入口
private:
    static int dispatch(Carg& a);
    static int help(const std::string& target);
    static int list(bool json);
};
}
```

```cpp
// src/cli/cli.cpp（骨架）
int Ccli::run(int argc, char** argv) {
    Ccli::init_console();                        // H：UTF-8 / isatty
    Carg a;
    if (a.parse(argc, argv) != 0) return a.usage_exit_code();

    if (a.has("version")) { out::data(version_string()); return 0; }
    if (a.pos.empty() || a.pos[0] == "help") return help(a.pos.size() > 1 ? a.pos[1] : "");
    if (a.pos[0] == "list") return list(a.has("json"));

    Object* o = Registry::find(a.pos[0]);         // B：索引查找
    if (!o) {
        out::error("unknown object: " + a.pos[0]);
        out::info("run 'iwant list' to see available objects");
        return (int)ErrorCode::Usage;
    }
    int rc = o->dispatch_cmd(a.argc_for(o), a.argv_for(o));
    return rc == 0 ? 0 : (int)ErrorCode::Fail;    // F：统一码翻译
}
```

关键：**`main` 只剩一行**，所有契约在 `Ccli` 一处收敛。

---

## 5. 分阶段计划（含验收）

### Phase 0 —— 让它"像个工具"（2 天）

- [ ] 新增 `Ccli::run`，固定 `main`
- [ ] `iwant help` / `iwant list` / `iwant --version`
- [ ] 未知对象/动作 → stderr 报错 + 退出码 2，**不产生文件**
- [ ] 保留 `code` 别名

**验收**

```bash
iwant --version; echo $?     # 0
iwant nosuchcmd; echo $?     # 2
ls                          # 没有多出 nosuchcmd.h/.cpp
```

### Phase 1 —— 参数与 I/O 契约（4 天）

- [ ] `Carg`（`--k=v`、`-abc`、`--`、类型校验）
- [ ] `out::data/info/error`，核心 4 包替换
- [ ] 退出码表 + 移除库层 `exit()`
- [ ] `--json` 信封

**验收**：`iwant file cat src/car/car.h --hex --json | python -m json.tool`

### Phase 2 —— 可扩展与可组合（5 天）

- [ ] 注册表 + 索引
- [ ] 分层/懒加载（`--module`）
- [ ] `-` 表示 stdin；输入源抽象
- [ ] 写操作统一 `--dry-run`/`--force`

**验收**：新增一个包，不改 `main`，`iwant list` 自动出现。

### Phase 3 —— 分发与质量（4 天）

- [ ] `make install` + man + 补全
- [ ] `tests/cli/` 10 个用例
- [ ] Windows 控制台编码
- [ ] 颜色/宽字符/管道探测

**验收**：`make install && iwant completion bash > /tmp/c && source /tmp/c`

**总计约 15 人日**（不含功能扩展）。

---

## 6. 明确**不要**做的事

| 反模式 | 为什么 |
| --- | --- |
| 把 3,117 个类都做成子命令 | 噪声淹没可用命令；线性遍历会慢到不可用 |
| 对外暴露 `ACTION_T` 位掩码数字 | 用户记不住；内部保留即可 |
| 62 个全局对象全常驻 | 启动变慢、命名冲突概率上升 |
| 库层继续 `exit()` | CLI 无法返回正确退出码，也无法被测试 |
| 继续 `TCHAR`/`char` 混用 | Windows 下必出 `delete[]` 类型不匹配（13-defects S1-5） |
| 一次替换全部 671 处输出 | 改动面过大，先核心 4 包 |
| 继续用 `-Dmain=XXX` 产出不同程序 | 与"单一工具"目标冲突，只留给测试 |

---

## 7. 风险与兼容

| 风险 | 缓解 |
| --- | --- |
| 改入口会废掉 `batch/*.bat`（`code class ...`） | 保留 `code` 别名，或提供 `argv[0]` 兼容分支 |
| 注册表重构影响 7 个 `*_g_code` 包 | 加适配层 `Registry::add(Object*)`，逐步迁移 |
| `--json` 需要稳定 schema | 先定 3 个字段（ok/data/error），后续只做增量 |
| 破坏性动作加 `--force` 会让老脚本失败 | 提供过渡开关（不推荐长期） |

---

## 8. 与已有文档的关系

- `06-build-run.md`：现在怎么构建、`main=` 怎么选入口
- `10-pitfalls.md`：用现在的 CLI 会踩的 14 个坑
- `13-defects.md`：代码本身的 35 个缺陷（其中 S1-8/S2-1/S2-6 直接影响 CLI 可用性）
- 本篇：**要成为"万能 CLI"还缺的工程能力**
