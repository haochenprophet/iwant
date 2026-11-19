# iwant 多语言支持评估与可执行 Coding 计划

> 目标：让 iwant 具备对 **C、C++、SQL、解释执行型语言（Lua/Python/JS/PHP/Java 等）** 的"识别 → 解析 → 校验 → 执行"能力。
> 评估基线：`E:\github\iwant` 仓库现状（2026-11-17，工作区干净，HEAD `33f9bd70`），以及 `ai/kb/` 既有实测结论。
> 约束：优先复用本仓库现有对象库；语言前端/执行引擎优先复用成熟第三方库，**不自研 C++ 解析器/编译器**。

---

## 0. 结论摘要（先看这一页）

### 0.1 一句话结论

**iwant 现在有"语言的词表"和"对象内核"，但没有"语言的能力"。**
新增 C/C++/SQL/解释器语言支持，不是再补几个类，而是新增一个**语言子系统**（源码/诊断/AST/值/作用域/执行/进程/沙箱）+ 统一 CLI，并把现有 1,473 个"空壳词条类"降级为**元数据表**。C/C++ 前端必须借 libclang，SQL 必须借 SQLite/MySQL，解释器语言必须借 Lua/CPython/QuickJS；自研前端在工期上不可行。

### 0.2 现状证据（实测）

| 事实 | 数据 | 证据 |
| --- | --- | --- |
| 仓库规模 | 6,201 个 `.h/.cpp`、约 12.3 万行、约 3.1k 个类、100 个 `src/` 顶层包 | `ai/kb/README.md`、本次复核 |
| 语言词表 | `keywords` 262 + `sql` 185 + `operator` 77 + `instruction` 951 = **1,475 类** | 各包文件数 |
| 其中空壳 | **1,473 类只有构造/`my_init()`**（仅 `Cconst`、`Cnew` 有额外方法） | 本次脚本审计 |
| 词表语义 | SQL 关键字无 `symbol`/类型；keyword 只有 name/alias；operator 有 `symbol/op_priority/combination` | `src/sql/sql_SELECT.cpp`、`src/keywords/while.cpp`、`src/operator/addition.cpp` |
| 解析/执行代码 | `src/code` 67 类中 66 类为空壳；`Csyntax` 仅一个空类；`Csql` 只有枚举+字段 | `src/code/*`、`src/syntax/syntax.h`、`src/public/sql.h` |
| SQL 执行 | 仅 `Cmy_sql` 直连 MySQL（`mysql_query`，无 prepared statement，`mysql_free_result` 被注释） | `src/my_sql/my_sql.cpp:108,232,237` |
| 进程执行 | `Object::sys_cmd` 直接 `system()`，无捕获/超时/沙箱 | `src/object/object.cpp:1619` |
| 命令派发 | `dispatch_cmd` 线性递归且恒返回 -1；未知命令无提示 | `src/object/object.cpp:1437` |
| 构建 | 根 `src/Makefile` 只编 13 个目录；100 个包仅 48 个有 Makefile，且是复制粘贴 | `src/Makefile:8`、`src/*/Makefile` |
| Windows | `winIwant-vs2022.vcxproj` 全量编 6k 文件，但硬编码 `C:\OpenPower\...` 包含路径 | `winIwant/winIwant/winIwant-vs2022.vcxproj:106` |
| 头文件镜像 | `include/` 3,068 个头已过期（抽样全部与 `src/` 不一致） | 抽样比对 |
| 测试/CI/许可证 | 无 `tests/`、无 CMake、无 `.github/`、无 `LICENSE`；1,645 个 `.cpp` 带测试 `main`（均被宏包住） | 根目录与全量扫描 |
| 现有第三方库 | 仅 MySQL Connector(C/C++)、OpenSSL 3.2.1、系统 `libuuid/pthread/dl/z`；**没有任何解析器/编译器/脚本引擎库** | `mysql_connect/`、`winIwant/mysql-connector-c/`、`src/os/os.h` |
| 词表覆盖 | C 32/34、C++ 54/59、Python 32/35、Java 49/50、PHP 72/79、C11 0/10 | 本次脚本比对 |

### 0.3 推荐路线（"现有库"的两层复用）

1. **复用 iwant 自带对象库**：`Object` 内核、action 位掩码、family/注册、`Cfile/Cpath/Ctext`、`Cmy_sql`、`Coperator` 优先级表、批量生成器、批处理脚本。
2. **引入成熟第三方库承担"语言前端/执行"**：
   - C/C++：**libclang**（解析/诊断/AST，C API）+ 系统 `cc/c++`（编译执行）；可选 **TinyCC** 做 C REPL。
   - SQL：**SQLite amalgamation**（内嵌解析/执行）+ 现有 MySQL 客户端（服务器执行/dialect 校验）。
   - 解释器语言：**Lua 5.4**（首个，最小可验证）+ **CPython**（次之，用稳定 ABI 或子进程双模）+ 可选 QuickJS/PHP/Java 子进程。
3. **iwant 自己只做**：语言门面、AST/值/诊断对象化、源码与位置、进程与沙箱、结果建模、统一 CLI、测试与文档。

> 仓库内现有第三方依赖只有 MySQL 与 OpenSSL（见 3.0），**没有任何解析器/脚本引擎**；因此"复用现有库"只能覆盖对象内核与 SQL/MySQL 一小块，语言前端必须新增依赖。

### 0.4 工作量与周期

| 口径 | 范围 | 人日 | 2 人并行 | 单人 |
| --- | --- | ---: | ---: | ---: |
| **MVP** | P0–P4（构建基建 + 语言内核 + C/C++ 解析执行 + SQLite + Lua + CLI + 基础测试） | ~154 | **17–19 周** | 约 35 周 |
| **完整一期** | P0–P6（MVP + MySQL 深化 + Python + 一致性测试 + 文档/发布） | ~185 | **20–22 周** | 约 42 周 |
| **二期可选** | JS/PHP/Java 适配、C++ REPL(Cling)、tree-sitter 大纲/高亮、性能优化 | +60~80 | +6–8 周 | +12–16 周 |

> 人日来自 `ai/plans/language-support-tasks.csv` 的 59 条任务合计（185 pd）；MVP 为 P0–P4 + P6 的文档/发布子集。2 人并行按净开发日折算，含 15% 缓冲。

> 改动面：新增约 100–120 个文件、修改约 140 个现有文件、删除 `include/` 3,068 个过期头、冻结 1,475 个词条类（**不逐个实现**）、49 个构建入口迁移到 CMake。明细见 5.J。

> 估算含 15% 缓冲；不含第三方库自身构建/打包时间。**本机无 `g++/clang/cl/make/cmake`，本文所有构建结论来自文件证据，Phase 0 必须先补工具链。**

### 0.5 三个必须先解决的前置

1. **构建系统**：CMake 统一 100 个包，产出 `libiwant_core` + `iwant` 单入口；否则任何新包都无法稳定链接。
2. **进程执行/沙箱**：新增 `Cprocess`（spawn + 管道 + 超时 + 退出码 + 资源限制），替换 `system()`；否则 C/C++/Python 执行不可控。
3. **统一诊断/值模型**：`Csource`/`Cdiagnostic`/`Cspan`/`Cvalue`/`Cresult`；否则四种语言各写一套结果格式，CLI 无法统一。

---

## 1. 需求澄清与范围

### 1.1 "支持"的四个能力级（本计划以此验收）

| 级别 | 能力 | 含义 | 是否默认开启 |
| --- | --- | --- | --- |
| L0 | 识别 | 扩展名/语言 id/方言识别、源码加载、编码与位置 | 是 |
| L1 | 解析 | 产出 token/AST（不要求语义正确），报告语法错误 | 是 |
| L2 | 校验 | 语义/类型/方言校验，诊断带 file:line:col | 是 |
| L3 | 执行 | 编译并运行 / 解释执行 / SQL 执行，返回 stdout/stderr/退出码/结果集 | **否，需显式 `--allow-run`** |

> 语言支持 = L0+L1+L2+L3 全通；MVP 要求 C/C++/SQL/Lua 达到 L3，Python 达到 L3（双模），其余语言先 L1/L2。

### 1.2 语言清单分级

| 级别 | 语言 | 理由 |
| --- | --- | --- |
| **T0（本期必做）** | C、C++、SQL、Lua | C/C++/SQL 是明确需求；Lua 是"解释器语言"的最小可验证闭环（MIT、C API、可沙箱） |
| **T1（一期后段）** | Python | 解释器语言的代表；嵌入或子进程双模；仓库已有 32/35 关键字词表 |
| **T2（二期可选）** | JavaScript(QuickJS)、PHP、Java | JS 用 QuickJS；PHP/Java 走子进程；仓库分别有 0/72/49 个词表类 |
| **非目标** | 自研 C/C++ 编译器、C++ REPL、JVM 嵌入、Oracle/PostgreSQL 方言 | 成本/收益不成比例 |

### 1.3 关键假设（若与你的意图不符，先改这三条）

- **A1**："支持 C/C++" = 能解析/校验任意源文件，并能编译+运行（不是"用 C++ 重写一个 C++ 解释器"）。
- **A2**："解释执行解释器语言" = 至少覆盖一类脚本语言（本期 Lua，随后 Python），不是只做关键字建模。
- **A3**："通过现有库" = 复用 iwant 对象库 + 引入 libclang/SQLite/Lua/CPython 等成熟库；不把 1,475 个空壳类逐个填成解析器。

### 1.4 非目标（明确不做）

- 不做完整 C++ 语义分析器/模板实例化器（libclang 能给的部分才做）。
- 不做 C++ REPL/Cling 集成（二期评估）。
- 不做自有 x86 后端/汇编器（951 个 instruction 类继续当词表）。
- 不做 SQL 方言翻译器（只做 dialect profile + 明确报错）。
- 不把 `include/` 镜像继续维护（删除或由生成器重建）。
- 不在库层调用 `exit()`、不在库层直接 `system()`。

---

## 2. 现状评估（逐项证据）

### 2.1 架构现状：四层但缺"语言层"

```
Object 内核（object/action/family/tag/temp）
   ↑
代码生成（class/code/template/build/make）      ← 会"写 C++ 类骨架"，不会"读 C++"
   ↑
词表宇宙（keywords 262 / sql 185 / operator 77 / instruction 951 / libc 函数 96）
   ↑
领域词条（car/satellite/security/... 约 1.4k 类，纯占位）
```

缺的正是中间一层：**源码 → 词法/语法 → AST → 语义 → 执行**。

### 2.2 语言资产盘点

| 包 | 类数 | 真实逻辑 | 可复用方式 |
| --- | ---: | --- | --- |
| `keywords` | 262 | 260 个只有 name/alias；`Cconst` 有进制判断、`Cnew` 有 `func()` | 生成 `token_manifest.json`；类保留作兼容 |
| `sql` | 185 | 全部空壳 | 生成 SQL 关键字表；`Csql` 扩展为语句模型 |
| `operator` | 77 | 全部只有 `symbol/op_priority/combination`（基类 `Coperator`） | **直接复用**：构造 Pratt 表达式表 |
| `instruction` | 951 | 全部空壳 | 本期不用；将来汇编后端 |
| `cstdio/cstdlib/ctime/ctype/math` | 50+37+9+33+67 | 大多有 `*_c` 包装（cstdio 39/50、cstdlib 29/37 等） | 脚本/表达式内建函数可复用 |
| `code` | 67 | 仅 `Ccode` 有实现（模板替换/文件生成） | 代码生成后端（生成 C/C++/SQL 片段） |
| `syntax` | 1 | 只有宏常量 | 扩充为语言语法元数据 |
| `public` | 2 | `Csql`（枚举+字段）、`Cinstruction` 空壳 | `Csql` 扩展或替换 |

**词表覆盖实测（缺失项多因与框架包同名而被跳过）：**

| 语言 | 覆盖 | 缺失 |
| --- | --- | --- |
| C89/C99 | 32/34 | `register`、`restrict`（`register` 与 `src/register` 包冲突） |
| C11 | 0/10 | `_Alignas`…`_Thread_local` 全缺 |
| C++ | 54/59 | `class`、`operator`、`co_await/co_return/co_yield`（前两个与 `src/class`、`src/operator` 冲突） |
| Python | 32/35 | `class`、`async`、`await`（小写化后比对） |
| Java | 49/50 | `class` |
| PHP | 72/79 | `class`、`die`、`echo`、`exit`、`fn`、`match`、`readonly` |

> 结论：**词表不能作为解析器的基础**。命名冲突（`class/operator/register/template/...`）说明"一词一类"的顶层类方案已到边界；新前端必须以 `LanguageId + TokenKind` 枚举/表驱动，而不是继续堆类。

### 2.3 对象内核：可复用面与硬伤

可复用：

- `Object` 的 `name/alias/family/ex_func/action`、`deal_cmd` 六步解析、`Action[]` 表、`execute` 回调约定（`int(*)(void*)`，`0` 成功）。
- `tag/temp` 模板替换引擎（生成 C/C++/SQL 文本时可复用）。
- `Cfile/Cpath/Ctext_line`（读写/遍历/分行），`Cmy_sql`（MySQL 连接）。
- `Coperator` 的 `symbol/op_priority/combination` 与 `comply`（"Self-realization Interpreter" 注释表明作者原本就想让运算符自解释）。

必须修（否则语言子系统无法稳定）：

| # | 问题 | 位置 | 影响 | 修法 |
| --- | --- | --- | --- | --- |
| K1 | `dispatch_cmd` 成功也返回 -1 | `src/object/object.cpp:1437-1468` | CLI 退出码永远错；新对象无法判断命中 | 命中返回 0、未命中返回明确错误码；加 `unordered_map` 索引 |
| K2 | 库层 `exit(-1)` | `src/code/code.cpp:23`；`search.cpp:57`、`ex_func.cpp:62`（kb 13-defects） | 语言驱动无法返回错误 | 改为错误码 + 诊断 |
| K3 | `sys_cmd` 用 `system()` | `src/object/object.cpp:1619` | 无捕获/超时/沙箱/退出码 | 新增 `Cprocess`，`sys_cmd` 保留兼容 |
| K4 | `execute` 语义过载（`void*`、返回 -1 表示 no-op） | `object.cpp:432-560` | 语言执行结果无法表达 | 新 `Cresult`，语言驱动不依赖 `execute(void*)` 传结果 |
| K5 | `Udata` 是裸 union（含指针） | `src/data/data.h` | 不能安全承载脚本值 | 新增 `Cvalue`；`Udata` 仅保留原用途 |
| K6 | Windows `TCHAR`/`char` 混用 | `src/os/os.h`、`file.h` | 新代码跨平台成本 | 新代码一律 `std::string`/UTF-8；旧代码不动 |
| K7 | `os.h` 全局 `#include <mysql.h>` | `src/os/os.h:8,23` | 任何包都被 MySQL 头污染 | 把 mysql 头移入 `my_sql`/`sql_mysql` |
| K8 | `Cmy_sql` 资源泄漏/无预编译 | `src/my_sql/my_sql.cpp:232-237` | 长跑/多次查询泄漏 | RAII + `mysql_stmt_*` |
| K9 | `include/` 3,068 个过期头 | 根 `include/` | 双份头导致"改了不生效" | 删除或生成器重建 |
| K10 | 48 份复制粘贴 Makefile | `src/*/Makefile` | 新增包/第三方库无法维护 | CMake 统一，Makefile 变 shim |

### 2.4 代码生成器现状（可复用，但要先修）

- `Cclass` 读 `CLASS_H_TEMP`/`CLASS_CPP_TEMP` 生成 `X.h/X.cpp`（`src/template/temp_def.h:9-10`），模板固定 `:public Object`、`namespace n_[tag]`。
- `Ccode` 生成 `g_code.h/.i/_func.i` 与 Makefile（`src/code/code.cpp:208-260`）。
- 批量脚本：`batch/build_*_keyword.sh` + `batch/mv_keywords.sh`（生成后 `mv` 到 `src/keywords/`；与包同名的词条用 `#` 注释跳过）。
- 缺陷：
  - `Cclass::deal_cmd` 恒返回 -1（`src/class/class.cpp:76`）。
  - 未知输入会产生文件（`iwant class help` → `help.h/.cpp`），无 dry-run。
  - 模板不支持基类/命名空间/路径参数；新语言驱动需要 `:public Clanguage`、`n_language_c`。
  - 生成物是 1,645 个带测试 `main` 的 `.cpp`，无统一测试入口。
- 结论：**继续用生成器造"语言包骨架"是对的**，但要先加 4 个参数（`--base`、`--namespace`、`--path`、`--dry-run`）并修返回值。

### 2.5 SQL/存储现状

- `Csql`（`src/public/sql.h`）：`SqlOperate` 枚举 + `db_name/tab_name/field/value/sql` 字段，无连接、无语句、无结果。
- `Cmy_sql`（`src/my_sql/my_sql.h`）：直接持有 `MYSQL/MYSQL_RES/MYSQL_ROW`，接口是 `connect/query/get/execute/create_tab`，用 `mysql_query` 字符串拼接，无参数绑定、无事务、无错误码映射；`mysql_free_result` 被注释。
- `database/organization.sql` 只有一份示例 schema；`mysql_connect/` 是 Connector/C++ 二进制（`libmysqlcppconn2.so`），未被主构建使用。
- 结论：SQL 支持应**新增引擎抽象**（`Isql_engine`），SQLite 为首选执行引擎，MySQL 作为可选后端并复用/加固 `Cmy_sql`；不要让新代码直接依赖 `MYSQL_*`。

### 2.6 构建/测试/发布现状

| 维度 | 现状 | 影响 |
| --- | --- | --- |
| 构建 | Linux：`build.sh` → `src/Makefile`（13 目录，g++ -std=gnu++11，链 `-lmysqlclient -luuid -lz`）；Windows：`.sln` + 全量 vcxproj（硬编码路径） | 新包/第三方库无法增量接入；CI 无法复现 |
| 包构建 | 100 包，48 个 Makefile，内容除 `MK_TAG` 外相同 | 改一处要改 48 处 |
| 测试 | 1,645 个 `#if X_TEST` 测试 `main`，默认关闭；无 `ctest`/断言库 | 语言驱动无法回归 |
| CI | 无 `.github/workflows` | 无质量门禁 |
| 发布 | 无 `--version`、无 install、无 `LICENSE`/`NOTICE` | 引入第三方库时有合规风险 |
| 头文件 | `include/` 镜像过期 | 双份维护 |

### 2.7 差距清单（要做的事，归成 9 类）

1. 构建与依赖（CMake、third_party、feature flags、CI）。
2. 内核修补（K1–K10）。
3. 语言核心模型（source/diagnostic/token/AST/value/scope/result）。
4. C/C++ 前端（libclang）+ 编译执行。
5. SQL（SQLite/MySQL）+ 结果集。
6. 脚本运行时（Lua/CPython/…）。
7. CLI/注册/输出（`iwant language ...`、JSON、退出码）。
8. 测试/一致性/性能/安全。
9. 文档/迁移/命名治理。

---

## 3. "现有库"技术选型评估

### 3.0 先回答字面问题：仓库里"现有的库"够不够？

| 现有依赖 | 位置 | 用途 | 能否支撑本目标 |
| --- | --- | --- | --- |
| MySQL Connector/C | `winIwant/mysql-connector-c/`、`src/os/os.h`、`src/my_sql/` | MySQL 连接/查询 | **只能覆盖 SQL 的 MySQL 执行**；无解析 API；GPL |
| MySQL Connector/C++ | `mysql_connect/libmysqlcppconn2.so` | X DevAPI | 未被主构建接入；不能做 SQL 解析 |
| OpenSSL 3.2.1 | `winIwant/openssl-3.2.1.zip`、`src/openssl/` | 加密/RSA/SHA | 与语言前端无关 |
| 系统库 | `-luuid -lpthread -ldl -lz -lmysqlclient` | 基础设施 | 与语言前端无关 |
| 解析器/编译器/脚本引擎 | **不存在** | — | **全部缺失** |

> 结论：若"通过现有库"指**仓库内已有依赖**，则只能做"MySQL SQL 执行"这一小块，C/C++/解释器语言完全无库可用；必须新增 libclang/SQLite/Lua/CPython 等依赖。若"现有库"指**生态中成熟库**，则按 3.2 选型。两种情况下的结论一致：**不新增依赖就无法实现目标**。

### 3.1 选型原则

1. **C API 优先**：仓库是 C++11，第三方 C API 不引入 ABI/标准升级风险。
2. **可静态/可动态、可裁剪**：能进 CI、能单文件分发。
3. **Linux + Windows 双平台**：至少一方一等公民，另一方可用。
4. **许可证可商用/可分发**：优先 MIT/BSD/Apache/Public Domain/PSF。
5. **可沙箱/可限时**：脚本运行时必须能设指令数/内存/IO 限制。
6. **不引入 GC 与 `Object` 生命周期冲突**：外部值统一拷进 `Cvalue`，不跨边界持有裸指针。

### 3.2 候选对比

| 库 | 用途 | 许可证 | 集成方式 | 能力 | 风险 | 结论 |
| --- | --- | --- | --- | --- | --- | --- |
| **libclang**（LLVM） | C/C++ 解析、诊断、AST、token | Apache-2.0 WITH LLVM-exception | `libclang` 动态库 + `clang-c/Index.h` | C 优秀、C++ 很好；USR/类型/诊断/fixit | 动态库体积大；版本要与编译参数匹配；libclang AST 非完整 Clang AST | **采用（T0）** |
| Clang C++ API | 完整 AST/语义 | 同上 | 需匹配 LLVM 构建，C++17 | 最强 | 编译/分发成本极高 | 备选（二期） |
| **tree-sitter** | 增量语法树、出错容错、大纲/高亮 | MIT | C 运行库 + 语法 `.so/.dll` | 快、可增量；无语义/类型 | 不能替代语义校验 | 备选（大纲/高亮，二期） |
| ANTLR4 C++ runtime | 从文法生成解析器（SQL/脚本） | BSD-3 | C++17 runtime + 生成代码 | 文法生态大 | C++ 文法受预处理器限制；runtime 重；C++17 | 不用于 C/C++；SQL 备选 |
| **TinyCC (libtcc)** | C 编译到内存并执行（REPL） | LGPL-2.1 | 源码/库 | C99、x86/x64、`tcc_run` | 不支持 C++/现代 C；LGPL 静态链接义务 | 可选（C REPL） |
| Cling | C++ 解释器 | 需核实发行条款 | LLVM 绑定，体积大 | 真 C++ REPL | Windows/打包差；版本绑定 | 二期评估 |
| **SQLite amalgamation** | SQL 解析+执行（嵌入式） | Public Domain | 2 个文件直接编进目标 | 完整 SQL、错误信息、结果类型 | 方言与 MySQL 有差异 | **采用（T0）** |
| **MySQL Connector/C** | MySQL 执行 | GPLv2（FOSS 例外）/商业 | 已在仓库 | 服务器执行、`PREPARE` 校验 | 需服务端；许可证 | 可选后端（T0 可选） |
| **Lua 5.4** | 脚本解释器 | MIT | 30 个 C 文件直接编进目标 | 完整语言、C API、hook 限时 | 生态小 | **采用（T0）** |
| **CPython** | Python 解释器 | PSF | 稳定 ABI 动态链接，或子进程 | 完整 Python + 标准库 | 嵌入/打包复杂；GIL；Windows DLL | **采用（T1，双模）** |
| QuickJS-ng | JS 引擎 | MIT | C 文件编进目标 | ES2023、无 JIT、可限内存 | 生态/成熟度低于 V8 | 二期可选 |
| PHP embed (libphp) | PHP 解释器 | PHP-3.01 | SAPI 嵌入复杂 | 完整 PHP | 线程安全/打包差 | 不做嵌入；子进程 |
| JVM (`javac`/`java`) | Java | GPLv2+CE | 子进程 | 完整 Java | 非"解释器"；启动慢 | 二期可选，子进程 |

### 3.3 推荐组合

```
C        : libclang(parse/check/ast/token) + cc/clang(compile+run) [+ libtcc 可选 REPL]
C++      : libclang(parse/check/ast) + c++/clang++(compile+run)
SQL      : SQLite(默认执行/校验) + MySQL(可选后端，prepared statements)
Lua      : lua-5.4.x 静态编入（沙箱库子集 + count hook 限时）
Python   : CPython 稳定 ABI 嵌入（首选） / `python -I -c` 子进程（回退）
JS/PHP/Java: 子进程适配器（二期）
```

**为什么 C/C++ 不用 tree-sitter 做"校验"**：tree-sitter 只保证语法树，不报类型/语义错误；`check` 需要 libclang 的诊断（含 fixit）。tree-sitter 适合二期做 `outline`/高亮/大文件快速 AST。

**为什么 SQL 不用 MySQL 做默认执行**：CI 无法保证有服务端；SQLite amalgamation 无依赖、可内存库、可 authorizer 限权，适合做默认与单测；MySQL 作为集成测试/生产后端。

### 3.4 许可证与分发

- 新增根 `LICENSE`（若项目尚未定许可证，先补 `NOTICE`/`third_party/README.md` 记录依赖）。
- SQLite（Public Domain）、Lua（MIT）、QuickJS（MIT）、libclang（Apache-2.0 WITH LLVM-exception）可随二进制分发（保留版权声明）。
- MySQL Connector/C 为 GPLv2（有 FOSS 例外）：**只做可选动态后端**，不分发其二进制；CI 用容器。
- TinyCC 为 LGPL-2.1：若静态链接，需提供可替换目标文件；建议**动态链接或仅开发构建启用**。
- CPython 为 PSF：动态链接 `python3.dll`/`libpython3.so` 即可；子进程模式无分发义务。

### 3.5 版本固定策略

- 新增 `third_party/versions.cmake`：`IWANT_LLVM_VERSION`、`IWANT_SQLITE_VERSION`、`IWANT_LUA_VERSION`、`IWANT_PYTHON_MIN`、`IWANT_QUICKJS_VERSION`，记录 tag + SHA256。
- 只允许季度升级窗口；升级必须过 `ctest` + 语言一致性用例。
- 不在本计划里写死具体补丁号：**kickoff 时按官方最新稳定版锁定并在 CI 镜像固化**（参考链接见附录 D）。

---

## 4. 目标架构

### 4.1 分层

```
┌────────────────────────────────────────────────────────────┐
│ CLI / Object 层：iwant language <action> ...                │
│  Clanguage(Object) + Action[] + 注册/索引 + JSON/退出码      │
├────────────────────────────────────────────────────────────┤
│ 语言门面层：Clanguage_registry                              │
│  LanguageId / Capability / 扩展名 / 方言 / 能力探测          │
├──────────────┬──────────────┬──────────────┬───────────────┤
│ language_c   │ language_cpp │ language_sql │ language_lua  │
│ libclang     │ libclang     │ SQLite/MySQL │ Lua 5.4       │
│ + compiler   │ + compiler   │              │ (+ python/js) │
├──────────────┴──────────────┴──────────────┴───────────────┤
│ 语言核心：Csource / Cdiagnostic / Ctoken / Cast_node /      │
│           Cvalue / Cscope / Cresult / Cprocess / Cjson      │
├────────────────────────────────────────────────────────────┤
│ iwant 内核：Object/action/family、Cfile/Cpath/Ctext、        │
│             Cmy_sql、Coperator 优先级表、tag/temp            │
└────────────────────────────────────────────────────────────┘
```

### 4.2 目录与包布局（遵循 `package/class/action` 约定）

```
src/
  language/                     # 门面 + 注册 + 全局注册三件套
    language.h/.cpp             # Clanguage : Object
    language_action.h/.i        # Action language_action[]
    language_registry.h/.cpp    # Clanguage_registry（id/扩展名→驱动）
    language_g_code.h/.i/_func.i
  language_core/                # 与具体语言无关
    source.h/.cpp               # Csource：file/stdin/string、编码、行索引
    diagnostic.h/.cpp           # Cdiagnostic/Cdiagnostic_list/Cfixit
    token.h/.cpp                # Ctoken/Ctoken_stream/TokenKind
    ast.h/.cpp                  # Cast_node/AstKind/Cast_visitor
    value.h/.cpp                # Cvalue/ValueKind/转换
    scope.h/.cpp                # Cscope/Csymbol_info（不叫 Csymbol，避开现有类）
    result.h/.cpp               # Cresult（状态/值/诊断/输出/耗时）
    process.h/.cpp              # Cprocess（spawn/管道/超时/退出码/资源限制）
    json.h/.cpp                 # 稳定 JSON 输出（或 nlohmann 适配）
    language_core_g_code.h/.i/_func.i
  language_c/
    language_c.h/.cpp           # Clanguage_c : Clanguage
    c_ast_map.h/.cpp            # CXCursor → Cast_node
    c_build.h/.cpp              # 编译/链接/运行（cc/clang）
    c_repl.h/.cpp               # 可选：libtcc
  language_cpp/                 # 复用 language_c 的 libclang 适配，差异在参数/能力
    language_cpp.h/.cpp
  language_sql/
    language_sql.h/.cpp
    sql_engine.h/.cpp           # Isql_engine
    sql_sqlite.h/.cpp
    sql_mysql.h/.cpp            # 包 Cmy_sql / prepared statements
    sql_result.h/.cpp
  language_lua/
  language_python/
  language_js/                  # 二期
third_party/
  sqlite/  lua/  quickjs/       # 源码 vendor（带版本/SHA/许可证）
  README.md
tests/
  harness.h
  test_language_core.cpp ...
  fixtures/{c,cpp,sql,lua,python}/
  cli/*.sh|*.ps1
cmake/
  IwANTLanguages.cmake  FindLibClang.cmake  ThirdParty.cmake
CMakeLists.txt  CMakePresets.json
```

> 每个包仍遵守仓库约定：`包名.h` 定义 `C包名`，`包名_action.h/.i` 定义动作表，`包名_g_code.*` 负责全局注册。**但语言核心类不放 `Object` family 的 3k 列表里**，避免 `dispatch_cmd` 线性遍历。

### 4.3 核心接口草案（放 `src/language_core/`）

```cpp
// language_core/common.h
enum class LanguageId { unknown=0, c, cpp, sql, lua, python, javascript, php, java, iwant_script };
enum class Capability : unsigned {
  none=0, parse=1u<<0, check=1u<<1, ast=1u<<2, execute=1u<<3,
  repl=1u<<4, format=1u<<5, compile=1u<<6, sql=1u<<7
};
enum class Severity { note=0, warning, error, fatal };
enum class ExecStatus { ok=0, syntax_error, semantic_error, build_error,
                        runtime_error, timeout, denied, internal };

struct Cspan { size_t begin=0, end=0; int line=0, column=0; };
```

```cpp
class Csource : public Object {
public:
  string path;            // 可为空（stdin/string）
  string text;            // UTF-8，已去 BOM、统一 LF 可选
  LanguageId language = LanguageId::unknown;
  std::vector<size_t> line_begin;   // 行首字节偏移
public:
  int load_file(const string& path, size_t max_bytes = 64u<<20);
  int load_stdin(size_t max_bytes = 8u<<20);
  int load_text(const string& text, LanguageId id, const string& name="<text>");
  Cspan span(size_t offset) const;
  Cspan span(int line, int column) const;   // 1-based
  string line_text(int line) const;
};

class Cdiagnostic : public Object {
public:
  Severity severity = Severity::error;
  string code;        // "C0001" / clang 的 "expected ';'"
  string message;
  string file;
  Cspan span;
  std::vector<Cfixit> fixits;   // {span, replacement}
};

class Cdiagnostic_list : public Object {
public:
  std::vector<Cdiagnostic> items;
  int error_count() const; int warning_count() const;
  void add(const Cdiagnostic&); void sort_by_position();
};
```

```cpp
enum class AstKind {
  translation_unit, declaration, function_decl, variable_decl, parameter,
  type_ref, statement, compound_stmt, if_stmt, for_stmt, while_stmt, return_stmt,
  expression, binary_expr, unary_expr, call_expr, member_expr, literal,
  identifier, comment, preprocessor, unknown
};

class Cast_node : public Object {
public:
  AstKind kind = AstKind::unknown;
  Cspan span;
  string text;                       // 标识符/字面量/运算符
  string type_spelling;              // libclang: clang_getTypeSpelling
  string usr;                        // 稳定符号 id
  std::vector<Cast_node*> children;  // 由本节点 my_mem 管理
  std::map<string,string> attrs;     // 可 JSON 化
public:
  Cast_node* add_child(AstKind k, const Cspan& s, const string& text="");
  int to_json(string& out, int indent=0) const;
};
```

```cpp
enum class ValueKind { null, boolean, integer, real, string, bytes,
                       array, object, function, native };
class Cvalue : public Object {
public:
  ValueKind kind = ValueKind::null;
  bool b=false; long long i=0; double d=0; string s;
  std::vector<Cvalue> items;
  std::map<string,Cvalue> fields;
public:
  static Cvalue make_int(long long); static Cvalue make_str(const string&);
  bool to_bool() const; long long to_int() const; string to_string() const;
  int to_json(string& out, int indent=0) const;
};
```

```cpp
class Cresult : public Object {
public:
  ExecStatus status = ExecStatus::ok;
  int exit_code = 0;
  Cvalue value;
  Cdiagnostic_list diagnostics;
  string stdout_text, stderr_text;
  long long duration_ms = 0;
  int to_json(string& out) const;
};

class Cprocess : public Object {
public:
  struct Options {
    string cwd; std::vector<string> env_extra;
    int timeout_ms = 10000;
    size_t stdout_limit = 1u<<20, stderr_limit = 1u<<20;
    bool merge_stderr = false;
    long memory_limit_mb = 0;      // 0 = 不限
    bool deny_network = true;      // 平台能力，尽力而为
  };
  int run(const string& exe, const std::vector<string>& args,
          const Options& opt, Cresult& out);
};
```

```cpp
class Clanguage : public Object {
public:
  virtual LanguageId id() const = 0;
  virtual const char* language_name() const = 0;   // "c"/"cpp"/"sql"/"lua"
  virtual unsigned capabilities() const = 0;
  virtual const char* const* extensions() const = 0; // {".c",".h",nullptr}
  virtual int parse(Csource&, Cast_node** out, Cdiagnostic_list&);
  virtual int check(Csource&, Cdiagnostic_list&);
  virtual int execute(Csource&, const Cvalue& options, Cresult&);
  virtual int repl(Cresult&) { return -1; }
  virtual int format(Csource&, string&) { return -1; }
  int help(void* p=nullptr) override;
  int deal_cmd(int argc, char* argv[]) override;
  int do_action(void* a) override;
};

class Clanguage_registry {
public:
  static Clanguage_registry& instance();
  int add(Clanguage* lang);                       // 同时 addMe 到全局 family
  Clanguage* find(LanguageId id) const;
  Clanguage* find_by_name(const string& name) const;
  Clanguage* find_by_extension(const string& path) const;
  int list(Cvalue& out) const;                    // [{id,name,capabilities,extensions}]
};
```

### 4.4 Object / CLI 集成

动作表（`src/language/language_action.i`）：

```cpp
Action language_action[] = {
  { (int)LanguageActionClass::query, (ACTION_T)LanguageAction::list,   EatcionRelation::bit_and, nullptr, (char*)"list",   (char*)"list languages" },
  { (int)LanguageActionClass::query, (ACTION_T)LanguageAction::info,   EatcionRelation::bit_and, nullptr, (char*)"info",   (char*)"show language capabilities" },
  { (int)LanguageActionClass::parse, (ACTION_T)LanguageAction::parse,  EatcionRelation::bit_and, nullptr, (char*)"parse",  (char*)"parse source" },
  { (int)LanguageActionClass::check, (ACTION_T)LanguageAction::check,  EatcionRelation::bit_and, nullptr, (char*)"check",  (char*)"check source" },
  { (int)LanguageActionClass::ast,   (ACTION_T)LanguageAction::ast,    EatcionRelation::bit_and, nullptr, (char*)"ast",    (char*)"dump ast" },
  { (int)LanguageActionClass::run,   (ACTION_T)LanguageAction::run,    EatcionRelation::bit_and, nullptr, (char*)"run",    (char*)"compile and run" },
  { (int)LanguageActionClass::exec,  (ACTION_T)LanguageAction::exec,   EatcionRelation::bit_and, nullptr, (char*)"exec",   (char*)"execute statement/script" },
  { (int)LanguageActionClass::repl,  (ACTION_T)LanguageAction::repl,   EatcionRelation::bit_and, nullptr, (char*)"repl",   (char*)"interactive" },
  { (int)LanguageActionClass::build, (ACTION_T)LanguageAction::build,  EatcionRelation::bit_and, nullptr, (char*)"build",  (char*)"compile only" },
  { 0,0,EatcionRelation::none,nullptr },
};
```

> `ACTION_T` 是 64 位位掩码（`src/action/action_type.h`），每个对象最多 64 个动作；语言包 10 个足够，不要复用主 `code` 的动作位。

CLI 契约（与 `ai/kb/14-cli-roadmap.md` 的 "object action" 一致）：

```
iwant language list [--json]
iwant language info --lang c [--json]
iwant language parse --lang c   --file a.c [--json] [--out ast.json]
iwant language check --lang cpp --file a.cpp [--compile-db build/compile_commands.json] [--json]
iwant language ast   --lang c   --file a.c  [--format json|sexp|dot]
iwant language run   --lang c   --file a.c  --allow-run [--timeout 5] [-- arg1 arg2]
iwant language exec  --lang sqlite --db :memory: --sql "select 1" [--allow-write]
iwant language exec  --lang lua --file a.lua --allow-run
iwant language repl  --lang lua --allow-run
iwant language build --lang cpp --file a.cpp --out a.out [--allow-run]
```

退出码：

| 码 | 含义 |
| ---: | --- |
| 0 | 成功 |
| 1 | 语言错误（诊断非空） |
| 2 | 用法错误（未知语言/缺参/互斥参数） |
| 3 | 未找到（文件/语言/编译数据库） |
| 4 | 权限/沙箱拒绝 |
| 5 | IO 错误 |
| 6 | 数据库/网络错误 |
| 7 | 内部错误 |
| 8 | 超时 |
| 9 | 后端不可用（libclang/SQLite/Lua 未编入） |

JSON 信封（与 KB 的 `{ok,object,action,data,error}` 对齐）：

```json
{
  "ok": true,
  "object": "language",
  "action": "check",
  "data": {
    "language": "cpp",
    "file": "tests/fixtures/cpp/broken.cpp",
    "diagnostics": [
      {"severity":"error","code":"expected-semicolon","message":"expected ';' after ...",
       "file":"broken.cpp","line":3,"column":12}
    ],
    "ast": null
  },
  "error": null
}
```

### 4.5 数据流（三个典型场景）

**C 解析/校验：**
```
CLI → Clanguage::deal_cmd → registry.find("c") → Clanguage_c::parse
    → Csource.load_file → libclang TU(compile_commands args)
    → clang_getNumDiagnostics → Cdiagnostic_list
    → clang_visitChildren → Cast_node tree
    → Cresult → JSON / exit code
```

**C 执行：**
```
Clanguage_c::execute → tmpdir + Cprocess.run(cc, [-std=c11, -O2, src, -o, exe])
    → Cprocess.run(exe, args, timeout, limits) → Cresult{stdout, stderr, exit_code}
```

**SQL 执行：**
```
Clanguage_sql::exec → SqlEngineFactory(dialect=sqlite|mysql)
    → prepare(sql) → bind(params) → step()
    → columns/types → Cvalue(array/object) → Cresult
```

### 4.6 与现有类的映射（尽量不重复造）

| 现有 | 新用途 | 处理 |
| --- | --- | --- |
| `Coperator` + 77 个运算符类 | Pratt 表达式解析/格式化 | 扩展字段 `arity/assoc/lang_mask/token`；生成 `operator_table.i` |
| `keywords` 262 类 | 关键字/保留字元数据 | **冻结**；生成 `language_tokens.inc`（TokenKind→text→languages）；类保留兼容 |
| `sql` 185 类 | SQL 关键字/语句提示 | 同上；`Csql` 扩展为语句模型或新 `Csql_statement` |
| `Cmy_sql` | MySQL 后端 | 包一层 `Csql_mysql`，加 RAII/prepared statements；旧接口保留 |
| `Ccode`/`Cclass` | 生成语言包骨架、生成 C/C++/SQL 片段 | 增加 `--base/--namespace/--path/--dry-run`；返回值修正 |
| `Cfile/Cpath/Ctext_line` | 源码加载/遍历/行号 | 新 `Csource` 内部复用；补大文件/编码边界 |
| `Cinstruction` 951 类 | 汇编后端（未来） | 本期不动 |
| `tag/temp` | 代码模板 | 语言代码生成复用 |

---

## 5. 代码库级改造清单（按工作流）

> 估算单位：人日（pd）。"新增"= 新文件；"修改"= 现有文件；"删除/冻结"= 不新增逻辑。

### A. 构建与依赖（18 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| A1 | 根 `CMakeLists.txt`：`iwant_core` + `iwant` + 可选语言目标 | `CMakeLists.txt`、`cmake/IwantOptions.cmake` | 新增 | 4 |
| A2 | 包注册函数 `iwant_add_package(name sources...)`，统一 include/宏 | `cmake/IwantPackage.cmake` | 新增 | 2 |
| A3 | 48 个 Makefile 变 shim（`make` → `cmake --build`），保留 `batch/*.sh` 兼容 | `src/*/Makefile`、`build.sh` | 修改 | 2 |
| A4 | 第三方库接入：SQLite amalgamation、Lua 源码、libclang `find_package`、CPython 探测 | `third_party/`、`cmake/ThirdParty.cmake`、`cmake/FindLibClang.cmake` | 新增 | 4 |
| A5 | `CMakePresets.json`（linux-debug/release、windows-msvc、asan） | `CMakePresets.json` | 新增 | 1 |
| A6 | CI：Ubuntu + Windows 矩阵，缓存 LLVM，跑 ctest | `.github/workflows/ci.yml` | 新增 | 2 |
| A7 | 版本/安装/`--version`/`LICENSE`/`NOTICE` | `CMakeLists.txt`、`src/iwant/iwant.cpp`、根目录 | 修改/新增 | 2 |
| A8 | 删除或重建 `include/` 镜像；`.gitignore` 加 build/third_party 产物 | 根 `include/`、`.gitignore` | 删除/修改 | 1 |

**验收**：`cmake --preset linux-debug && cmake --build --preset linux-debug -j` 产出 `build/iwant`；`ctest` 5/5；`iwant --version` 退出 0；Windows MSVC 同命令可编（libclang 可选关闭）。

### B. 内核修补（14 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| B1 | `dispatch_cmd` 语义修正 + 注册索引（`name/alias → Object*`） | `src/object/object.cpp/.h` | 修改 | 4 |
| B2 | 移除库层 `exit()`；新增 `Cerror_code` 与统一错误映射 | `src/code/code.cpp`、`src/algorithm/search.cpp`、`src/ex_func/ex_func.cpp`、新 `src/error_code/` | 修改/新增 | 2 |
| B3 | `Cprocess`（spawn/管道/超时/退出码/资源限制/Windows Job Object） | `src/language_core/process.*` | 新增 | 4 |
| B4 | `os.h` 去 MySQL 头；`Cmy_sql` RAII/`mysql_free_result`/错误码 | `src/os/os.h`、`src/my_sql/my_sql.cpp/.h` | 修改 | 2 |
| B5 | UTF-8/BOM/CRLF/大文件边界；`Cfile` 增加 size cap | `src/file/file.cpp/.h`、`src/text/text_line.*` | 修改 | 2 |

### C. 语言核心（26 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| C1 | `Csource` + 行索引 + 位置换算 | `src/language_core/source.*` | 新增 | 3 |
| C2 | `Cdiagnostic`/`Cfixit`/排序/JSON | `src/language_core/diagnostic.*` | 新增 | 2 |
| C3 | `Ctoken`/`TokenKind`/stream；token manifest 生成器 | `src/language_core/token.*`、`tools/gen_tokens.py` | 新增 | 3 |
| C4 | `Cast_node`/`AstKind`/visitor/JSON/sexp/dot | `src/language_core/ast.*` | 新增 | 5 |
| C5 | `Cvalue` + 转换 + JSON | `src/language_core/value.*` | 新增 | 3 |
| C6 | `Cscope`/符号表（不叫 `Csymbol`） | `src/language_core/scope.*` | 新增 | 2 |
| C7 | `Cresult`/`ExecStatus`/JSON 信封 | `src/language_core/result.*` | 新增 | 2 |
| C8 | `Clanguage`/`Clanguage_registry`/JSON 输出/动作表 | `src/language/*`、`src/language_core/json.*` | 新增 | 6 |

### D. C/C++ 前端与执行（40 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| D1 | libclang 适配：index/TU/参数/缓存/线程安全 | `src/language_c/c_libclang.*` | 新增 | 6 |
| D2 | 诊断映射（含 fixit、`-fms-extensions`、`-std`） | `src/language_c/c_diagnostic.*` | 新增 | 4 |
| D3 | AST 映射（cursor→`Cast_node`，USR/type/access） | `src/language_c/c_ast_map.*` | 新增 | 6 |
| D4 | `compile_commands.json` 读取与参数合并 | `src/language_c/c_compile_db.*` | 新增 | 3 |
| D5 | 编译/链接/运行（cc/c++/clang/clang++，超时/沙箱/产物清理） | `src/language_c/c_build.*` | 新增 | 6 |
| D6 | C++ 驱动复用 + 差异（语言 id、`-x c++`、能力矩阵） | `src/language_cpp/*` | 新增 | 3 |
| D7 | C REPL（libtcc，可选编译开关） | `src/language_c/c_repl.*` | 新增 | 4 |
| D8 | dogfood：用 libclang 解析 `src/` 全量头（compile DB） | `tests/dogfood_cpp.cpp` | 新增 | 3 |
| D9 | 测试夹具（C 40 / C++ 30 例）与诊断快照 | `tests/fixtures/{c,cpp}` | 新增 | 5 |

### E. SQL（26 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| E1 | `Isql_engine`/`Csql_statement`/`Csql_result` 抽象 | `src/language_sql/sql_engine.*`、`sql_result.*` | 新增 | 4 |
| E2 | SQLite 引擎（open/prepare/bind/step/columns/authorizer/limit/progress） | `src/language_sql/sql_sqlite.*` | 新增 | 6 |
| E3 | MySQL 引擎（复用 `Cmy_sql`，prepared statements/事务/错误码） | `src/language_sql/sql_mysql.*`、`src/my_sql/*` | 新增/修改 | 6 |
| E4 | 方言 profile（sqlite/mysql）与能力矩阵/明确报错 | `src/language_sql/sql_dialect.*` | 新增 | 3 |
| E5 | 结果集→`Cvalue`/`Cresult`；多语句/行数/字节上限 | `src/language_sql/sql_result.*` | 新增 | 3 |
| E6 | 测试：SQLite 50 语句、MySQL 20 语句（可选 CI service） | `tests/fixtures/sql` | 新增 | 4 |

### F. 脚本运行时（28 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| F1 | Lua 接入（vendor、沙箱库子集、count hook 限时、栈转换） | `third_party/lua/`、`src/language_lua/*` | 新增 | 8 |
| F2 | Lua REPL/错误回溯/内存上限 | `src/language_lua/lua_repl.*` | 新增 | 3 |
| F3 | Python 双模：嵌入（稳定 ABI/隔离配置）+ 子进程回退 | `src/language_python/*` | 新增 | 10 |
| F4 | Python 值/异常/输出映射 | `src/language_python/python_value.*` | 新增 | 3 |
| F5 | 测试：Lua 30、Python 30 例；沙箱拒绝用例 | `tests/fixtures/{lua,python}` | 新增 | 4 |

### G. CLI/注册/输出（10 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| G1 | `language` 包动作实现（list/info/parse/check/ast/run/exec/repl/build） | `src/language/language.cpp` | 新增 | 4 |
| G2 | 全局注册：语言对象进 `g_code.i/_func.i`，启动时建索引 | `src/global/*`、`src/language/language_g_code.*` | 修改/新增 | 2 |
| G3 | 输出门面（data/info/warn/error）+ `--json` + 退出码 | `src/language_core/output.*`、`src/main/main.cpp` | 新增/修改 | 2 |
| G4 | `--allow-run/--allow-write/--timeout/--sandbox` 安全开关 | `src/language/language.cpp` | 修改 | 2 |

### H. 测试/质量（24 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| H1 | 测试 harness（`CHECK/REQUIRE`，无外部依赖） | `tests/harness.h` | 新增 | 2 |
| H2 | 核心单测（source/diag/ast/value/process） | `tests/test_language_core.cpp` | 新增 | 4 |
| H3 | CLI 集成测试（命令→JSON/退出码/无副作用） | `tests/cli/*.sh`、`tests/cli/*.ps1` | 新增 | 4 |
| H4 | 一致性套件：c-testsuite/chibicc、sqllogictest 子集、Lua tests、CPython 子集 | `tests/conformance/` | 新增 | 6 |
| H5 | ASAN/UBSAN/Valgrind、超时/泄漏/大文件 | `CMakePresets.json`、CI | 修改 | 3 |
| H6 | 性能基线（启动/解析 1k 行/10k 行 SQL/脚本调用） | `tests/perf/` | 新增 | 3 |
| H7 | 模糊测试（libFuzzer：Csource/diagnostic SQL/Lua 输入） | `tests/fuzz/` | 新增 | 2 |

### I. 文档/迁移/治理（8 pd）

| # | 任务 | 文件 | 类型 | pd |
| --- | --- | --- | --- | ---: |
| I1 | 设计文档 + CLI 手册 + 安全说明 | `doc/language/`（新增） | 新增 | 3 |
| I2 | `README` 构建/使用更新；`ai/kb` 增补 | `README.md`、`ai/kb/` | 修改 | 2 |
| I3 | 命名治理：冻结 keyword/sql 词表类；新代码用 `TokenKind`；可选批量改名 `Ctoken_*` | `src/keywords/*`、`src/sql/*`、脚本 | 冻结/可选 | 2 |
| I4 | `include/` 处置与 `all_h_include.h` 重建流程 | `include/`、`src/all/all_h_include.h` | 修改 | 1 |

### J. 改动面统计（给评审/排期用）

| 类别 | 数量 | 说明 |
| --- | ---: | --- |
| 新增源文件 | 100–120 | 语言包（7 个包 × 8–12 文件）+ `language_core`（约 23）+ 测试（约 20）+ CMake/third_party（约 10） |
| 修改现有文件 | 约 140 | 核心：`object.*`、`code.cpp`、`class.cpp`、`temp_def.h`、`g_code.*`、`main.cpp`；数据：`my_sql.*`、`os.h`、`file.*`、`text_line.*`、`public/sql.h`；构建：根 Makefile + 48 个包 Makefile；元数据：77 个 operator `.cpp`（批量加字段）；文档/脚本：README、build.sh、batch/*、vcxproj |
| 删除 | 3,068 | `include/` 过期镜像（先确认无引用；可先 `legacy/`） |
| 冻结（不删不改逻辑） | 1,475 | `keywords` 262 + `sql` 185 + `instruction` 951 + operator 77 的"词条身份"冻结，仅批量补元数据字段 |
| 重新生成 | 2 | `src/all/all_h_include.h`、`src/global/g_code.i/_func.i` |
| 构建入口迁移 | 49 | 根 Makefile + 48 包 Makefile → CMake shim |

**合计：约 185 pd（不含 15% 缓冲）**；工作流口径（194）与 CSV 任务去重口径（185）的差额为跨任务评审/协调。MVP 取 A–D + F1/F2 + G + 部分 H。

---

## 6. 分阶段执行计划（可排期）

> 假设 2 名 C++ 工程师并行；单人按 ×1.8 折算。每周 5 个工作日，估算为"净开发日"，不含会议。
> 每个 Phase 下列出主任务；完整 59 条（含 P1-10…P6-08 等细分项）见 `ai/plans/language-support-tasks.csv`，编号一一对应。

### Phase 0：基建（第 1–2 周，25 pd）— 先让"全库可构建"

- [ ] P0-01 安装/固定工具链：Linux `g++ ≥ 11`、`cmake ≥ 3.24`、`ninja`；Windows VS2022 + libclang.dll；写 `docs/toolchain.md`
- [ ] P0-02 根 CMake + `iwant_core` + `iwant` 单入口（先用现有 13 目录源）
- [ ] P0-03 `iwant_add_package()` 统一包注册/包含路径/宏
- [ ] P0-04 第三方接入空跑：SQLite/Lua 编译通过；libclang 可选
- [ ] P0-05 `tests/harness.h` + 5 个冒烟测试 + `ctest`
- [ ] P0-06 CI（Ubuntu/Windows）+ 缓存
- [ ] P0-07 修 K1/K2（dispatch 返回、库层 exit）+ 索引骨架
- [ ] P0-08 删除/隔离 `include/` 镜像（先 `git mv` 到 `legacy/include` 或直接删，确认无引用）
- [ ] P0-09 48 个包 Makefile 改 shim（`make` → `cmake --build`），保留 batch 兼容
- [ ] P0-10 `LICENSE/NOTICE` + 版本注入 + `--version`

**Gate 0（验收）**：
```bash
cmake --preset linux-debug && cmake --build --preset linux-debug -j
./build/iwant --version            # 0
ctest --test-dir build --output-on-failure   # 5/5
./build/iwant nosuchcmd; echo $?   # 2，且当前目录无新文件
```

### Phase 1：语言内核 + C 解析（第 3–6 周，48 pd）

- [ ] P1-01 `Csource/Cspan` + 行索引 + UTF-8/BOM/CRLF
- [ ] P1-02 `Cdiagnostic/Cfixit` + JSON
- [ ] P1-03 `Ctoken/TokenKind` + `tools/gen_tokens.py`（从 keywords/sql 生成 manifest）
- [ ] P1-04 `Cast_node/AstKind` + visitor + JSON/sexp
- [ ] P1-05 `Cvalue/Cresult/Cjson`
- [ ] P1-06 `Clanguage/Clanguage_registry` + `language` 包动作表
- [ ] P1-07 `language_c`：libclang parse/check/ast（先不支持 run）
- [ ] P1-08 CLI：`language list/info/parse/check/ast --json`
- [ ] P1-09 C 夹具 40 例 + 诊断快照 10 例

**Gate 1**：
```bash
./build/iwant language list --json | python -m json.tool
./build/iwant language parse --lang c tests/fixtures/c/hello.c --json   # ok, 0 diag
./build/iwant language check --lang c tests/fixtures/c/broken.c --json  # exit 1, 1+ diag
./build/iwant language ast --lang c tests/fixtures/c/hello.c --format sexp | head
```

### Phase 2：C/C++ 执行（第 7–9 周，28 pd）

- [ ] P2-01 `Cprocess`（spawn/管道/超时/退出码/资源限制/Windows Job）
- [ ] P2-02 `c_build`：cc/clang 探测、`-std`、临时目录、产物清理、超时
- [ ] P2-03 `language run/build` + `--allow-run/--timeout`
- [ ] P2-04 C++ 驱动（`-x c++`、`-fms-extensions`、能力矩阵）
- [ ] P2-05 `compile_commands.json` 支持 + dogfood 解析 `src/object/object.cpp`
- [ ] P2-06 诊断 fixit/多文件/头文件上下文
- [ ] P2-07 执行夹具：C 25、C++ 20；失败/超时/崩溃用例
- [ ] P2-08 安全基线：默认不执行、输出上限、临时目录、禁网尽力而为

**Gate 2**：
```bash
./build/iwant language run --lang c tests/fixtures/c/hello.c --allow-run --timeout 5   # stdout hello
./build/iwant language run --lang cpp tests/fixtures/cpp/hello.cpp --allow-run         # stdout hello
./build/iwant language check --lang cpp --compile-db build/compile_commands.json src/object/object.cpp --json
./build/iwant language run --lang c tests/fixtures/c/timeout.c --allow-run --timeout 1; echo $?  # 8
```

### Phase 3：SQL（第 10–12 周，30 pd）

- [ ] P3-01 `Isql_engine` + `Csql_result`
- [ ] P3-02 SQLite 引擎（prepare/bind/step/authorizer/limit/progress）
- [ ] P3-03 MySQL 引擎（`Cmy_sql` RAII + prepared statements + 事务）
- [ ] P3-04 方言 profile/能力矩阵/明确报错
- [ ] P3-05 `language exec --lang sqlite|mysql` + `--db/--sql/--file`
- [ ] P3-06 结果集→`Cvalue` + `--json`；行/字节上限
- [ ] P3-07 测试：SQLite 50、MySQL 20（CI service 可选）

**Gate 3**：
```bash
./build/iwant language exec --lang sqlite --db :memory: \
  --sql "create table t(a int); insert into t values(1); select a from t;" --json
# data.rows == [[1]]
./build/iwant language exec --lang sqlite --db :memory: --sql "select * from nope" --json; echo $?  # 1
```

### Phase 4：Lua（第 13–14 周，15 pd）

- [ ] P4-01 vendor Lua 5.4.x + CMake 目标
- [ ] P4-02 沙箱库子集（base/string/table/math/utf8；禁 io/os/package/debug）
- [ ] P4-03 执行/REPL/错误回溯/count hook 限时/内存上限
- [ ] P4-04 值转换 + `--json` 输出
- [ ] P4-05 夹具 30 例 + 沙箱拒绝 5 例

**Gate 4**：
```bash
./build/iwant language run --lang lua tests/fixtures/lua/fib.lua 10 --allow-run  # 55
./build/iwant language exec --lang lua --file tests/fixtures/lua/deny_os.lua --allow-run --json
# ok=false / error.code == "denied"
```

### Phase 5：Python（第 15–17 周，18 pd）

- [ ] P5-01 稳定 ABI 嵌入（`PyConfig` 隔离、`site_import=0`、GIL）
- [ ] P5-02 子进程回退（`python -I`，JSON 线协议）
- [ ] P5-03 值/异常/输出/超时映射
- [ ] P5-04 `language run/exec --lang python`
- [ ] P5-05 夹具 30 例 + Windows/macOS 说明

**Gate 5**：
```bash
./build/iwant language run --lang python tests/fixtures/python/fib.py 10 --allow-run  # 55
./build/iwant language info --lang python --json   # backend: embedded|subprocess
```

### Phase 6：硬化/发布（第 18–20 周，21 pd）

- [ ] P6-01 一致性套件接入（夜间）
- [ ] P6-02 ASAN/UBSAN/Valgrind/超时/泄漏
- [ ] P6-03 性能基线（见 8.4）
- [ ] P6-04 文档（设计/CLI/安全/迁移）+ `README`
- [ ] P6-05 `make install`/`cmake --install`、版本、许可证
- [ ] P6-06 发布检查单 + 回滚方案

**Gate 6**：
```bash
ctest --test-dir build --output-on-failure          # 全绿
./build/iwant language check --lang cpp --compile-db build/compile_commands.json src/file/file.cpp
cmake --install build --prefix /tmp/iwant && /tmp/iwant/bin/iwant --version
```

### 依赖图

```
P0 ──> P1 ──> P2 ──> P3 ──> P4 ──> P5 ──> P6
              │       │
              │       └─> （P3/P4 可由不同人并行）
              └─> P2-01 Cprocess 可在 P1 后半段提前开工
```

> P3/P4 可在 P2 后半段并行（不同人）；P5 依赖 P4 的脚本驱动模板，可提前抽公共 `CScript_runtime`。

### 排期甘特（周）

| 周 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| P0 | █ | █ | | | | | | | | | | | | | | | | | | |
| P1 | | | █ | █ | █ | █ | | | | | | | | | | | | | | |
| P2 | | | | | | | █ | █ | █ | | | | | | | | | | | |
| P3 | | | | | | | | | | █ | █ | █ | | | | | | | | |
| P4 | | | | | | | | | | | | | █ | █ | | | | | | |
| P5 | | | | | | | | | | | | | | | █ | █ | █ | | | |
| P6 | | | | | | | | | | | | | | | | | | █ | █ | █ |

---

## 7. 可执行任务清单（Task Ledger）

> 完整机器可读版：`ai/plans/language-support-tasks.csv`（含 id/phase/area/title/files/estimate/depends/acceptance）。
> 用法：导入 Jira/Linear/Excel，或在 PR 描述里勾选。**每个任务都必须带一个可执行验收命令或断言。**

### 7.1 每周固定动作

- 周一：更新 `language-support-tasks.csv` 状态；确认当周 Gate 用例。
- 周三：跑 `ctest` + CLI 冒烟；记录 flaky。
- 周五：更新 `ai/kb` 的"语言子系统"页；提交 `docs/` 变更。

### 7.2 任务粒度示例（前 12 条）

| ID | 任务 | 文件 | pd | 验收 |
| --- | --- | --- | ---: | --- |
| P0-01 | 工具链与 preset | `CMakePresets.json`、`docs/toolchain.md` | 2 | `cmake --version && g++ --version` |
| P0-02 | 根 CMake + 单入口 | `CMakeLists.txt`、`src/main/main.cpp` | 4 | `./build/iwant --version` |
| P0-03 | `iwant_add_package` | `cmake/IwantPackage.cmake` | 2 | 新包只加一行即可编 |
| P0-04 | SQLite/Lua 空跑 | `third_party/`、`cmake/ThirdParty.cmake` | 3 | 两个静态库目标生成 |
| P0-05 | harness + 冒烟 | `tests/harness.h`、`tests/test_smoke.cpp` | 2 | `ctest` 5/5 |
| P0-06 | CI | `.github/workflows/ci.yml` | 2 | PR 上双平台绿 |
| P0-07 | dispatch/exit 修复 | `src/object/object.cpp`、`src/code/code.cpp` | 3 | 未知命令退出 2 且无文件 |
| P0-08 | include 镜像处置 | `include/` | 1 | `git grep "include/"` 无构建引用 |
| P1-01 | Csource | `src/language_core/source.*` | 3 | 单测：BOM/CRLF/行号 |
| P1-02 | Cdiagnostic | `src/language_core/diagnostic.*` | 2 | JSON 快照 |
| P1-03 | token manifest | `tools/gen_tokens.py`、`src/language_core/token.*` | 3 | 262+185 词条生成无冲突 |
| P1-04 | Ast 节点 | `src/language_core/ast.*` | 5 | 树遍历/JSON/sexp 快照 |

> 其余 60+ 条见 CSV。**建议先做 P0-01~P0-08，不要在工具链未定时写语言代码。**

---

## 8. 测试与验收矩阵

### 8.1 能力矩阵（一期目标）

| 语言 | L0 识别 | L1 解析 | L2 校验 | L3 执行 | REPL | 备注 |
| --- | --- | --- | --- | --- | --- | --- |
| C | ✅ | ✅ libclang | ✅ 诊断 | ✅ cc/clang | 可选 libtcc | 头文件/宏由 libclang 处理 |
| C++ | ✅ | ✅ libclang | ✅ 诊断 | ✅ c++/clang++ | ❌ | 不做模板实例化自研 |
| SQL(SQLite) | ✅ | ✅ prepare | ✅ 错误码 | ✅ 内存/文件库 | 可选 | 默认只读 |
| SQL(MySQL) | ✅ | ✅ prepare | ✅ 服务端错误 | ✅ 可选 | ❌ | 需服务端 |
| Lua | ✅ | ✅ 语法 | ✅ 运行时错误 | ✅ 沙箱 | ✅ | count hook 限时 |
| Python | ✅ | ✅ 编译 | ✅ traceback | ✅ 嵌入/子进程 | 可选 | 双模 |
| JS/PHP/Java | ✅ | 二期 | 二期 | 二期 | ❌ | 子进程 |

### 8.2 用例数量（验收门槛）

| 类别 | 数量 | 通过标准 |
| --- | ---: | --- |
| C 解析/校验 | 40 | 全部 0 崩溃；预期诊断逐条匹配（文件/行/列/严重级） |
| C 执行 | 25 | stdout/退出码匹配；超时/崩溃/拒绝各 3 例 |
| C++ 解析/校验 | 30 | 含模板/命名空间/异常/宏；诊断匹配 |
| C++ 执行 | 20 | 同上 |
| SQLite | 50 | 语句/类型/NULL/事务/错误码/权限 |
| MySQL | 20 | 可选 CI service；无服务端时 skip 并标记 |
| Lua | 30 + 5 拒绝 | 结果/回溯/超时/沙箱拒绝 |
| Python | 30 | 结果/异常/超时/编码 |
| CLI | 30 | JSON schema、退出码、无副作用、`--help` |
| 回归 | 全量 | `ctest` 0 失败；ASAN 0 泄漏 |

### 8.3 一致性/真实语料

- **C**：`c-testsuite`（约 220 例）、`chibicc` 测试集；只要求"诊断/退出码一致"，不要求自有代码生成。
- **C++**：用仓库自身 3,114 个头做 dogfood（`compile_commands.json`），统计解析成功率、崩溃数、耗时。
- **SQL**：SQLite `sqllogictest` 子集（选 500 条）；MySQL 用 `database/organization.sql` 建库/CRUD。
- **Lua**：官方 `lua-5.4/tests` 子集（去掉依赖 `os/io` 的用例）。
- **Python**：CPython `Lib/test` 子集（纯计算/字符串/异常），不跑依赖网络的用例。

### 8.4 性能预算（CI 基线，允许 ±30%）

| 场景 | 目标 |
| --- | --- |
| `iwant --version` | < 100 ms |
| `language parse` 1k 行 C | < 300 ms（不含 libclang 加载） |
| dogfood 解析 3,114 头（单线程） | < 180 s，峰值 < 2 GB |
| SQLite 10k 行查询/序列化 | < 500 ms |
| Lua 调用 100k 次空函数 | < 200 ms |
| Python 启动（嵌入） | < 300 ms |

### 8.5 安全验收（必须）

- 默认 `parse/check` 不执行任何代码。
- `run` 必须显式 `--allow-run`；无该开关时退出码 4 且不产生子进程。
- 执行超时必杀；stdout/stderr 有上限；临时目录清理。
- SQL 默认只读；`ATTACH/PRAGMA/load_extension` 默认拒绝；`--allow-write` 才放开。
- Lua 默认无 `io/os/package/debug`；`os.execute` 用例必须被拒绝。
- 文档明确"执行不可信代码 = 远程代码执行风险"。

---

## 9. 风险登记册

| # | 风险 | 概率 | 影响 | 缓解 | 触发信号 |
| --- | --- | --- | --- | --- | --- |
| R1 | 全库编译失败/链接冲突（1,645 个测试 main、历史代码） | 高 | 高 | Phase 0 先做单入口 + `-D` 隔离；按包白名单逐步纳入 | CMake 链接报 multiple definition |
| R2 | libclang 版本/ABI/Windows DLL 不匹配 | 中 | 高 | 只依赖 C API；CI 固定 LLVM 镜像；`--without-clang` 可降级 | `clang_createIndex` 崩溃/找不到符号 |
| R3 | 仓库代码是 MSVC 方言（`__declspec`/TCHAR）libclang 报错 | 高 | 中 | `-fms-extensions`；仅对 `src/` dogfood 放宽；诊断分级 | 解析 `src/` 大量 error |
| R4 | MySQL 服务端不可用/许可证 | 中 | 中 | SQLite 默认；MySQL 可选+容器；不分发 GPL 二进制 | CI 无 service |
| R5 | Python 嵌入打包（stdlib/venv/Windows DLL） | 高 | 中 | 子进程回退；文档写清 `python3-dev`；稳定 ABI | `Py_Initialize` 失败 |
| R6 | 执行语言 = RCE 风险 | 高 | 高 | 默认关闭、显式开关、超时/资源限制/只读 SQL/沙箱库子集 | 安全评审不通过 |
| R7 | 工期被"补 1,475 个空壳类"拖垮 | 中 | 高 | 明确冻结词表类；token 表驱动；评审拒绝"逐类实现" | 出现按 keyword 类写方法的 PR |
| R8 | 命名冲突（`class/operator/register/template`） | 中 | 中 | 新代码 `Ctoken_*`/`LanguageId`；旧类冻结；不改全局名 | 链接/ODR 报错 |
| R9 | `dispatch_cmd` 改造回归老 CLI | 中 | 中 | 保留 `code` 别名；返回码兼容层；30 个 CLI 用例 | `batch/*.sh` 失败 |
| R10 | `include/` 删除影响 Windows 工程 | 低 | 中 | 先 `git grep` 确认；保留 `legacy/include` 一版 | vcxproj 找不到头 |
| R11 | 第三方库升级破坏 API | 低 | 中 | 版本固定 + 季度升级窗口 + 一致性测试 | 夜间套件红 |
| R12 | 性能不达标（3k 头/大文件） | 中 | 低 | TU 缓存、并行、流式读、分页输出 | 基线超 30% |

---

## 10. 明确不要做的事（反模式）

| 反模式 | 为什么不做 |
| --- | --- |
| 手写 C++ 词法/语法/语义分析器 | C++ 文法 + 预处理器 + 模板，工程量是 libclang 的 10 倍以上，且永远追不上标准 |
| 把 1,475 个 keyword/sql/instruction 类逐个填成解析器 | 类爆炸、命名冲突、编译时间不可控；词表应退化为数据 |
| 用 `Object` 的 `family` 承载 AST 的每个节点并依赖 `dispatch_cmd` | 线性遍历 + 3k 对象；AST 用 `Cast_node` 树 + 显式 visitor |
| 在库层 `exit()` / `system()` | 无法嵌入、无法测试、无法沙箱 |
| 用 `Udata` 当脚本值 | 裸 union 无法表达字符串/数组/对象/所有权 |
| 默认允许执行 | 等于把库变成 RCE 入口 |
| 为四种语言各写一套 JSON/退出码 | CLI 无法统一；先定 `Cresult` 契约 |
| 继续维护 `include/` 双份头 | 改了不生效，排查成本高 |
| 把 MySQL 头塞进 `os.h` | 所有包被 GPL 头/平台宏污染 |
| 先做 JS/PHP/Java 再做 C/SQL | 收益低、验证不了核心架构 |

---

## 11. 本周就能执行的 10 个动作

1. **定工具链**：Linux 容器 `g++-12 + cmake + ninja + libclang-dev`；Windows VS2022 + LLVM。写入 `docs/toolchain.md`。
2. **写根 `CMakeLists.txt`**：只编现有 13 目录 + `src/main/main.cpp`，产出 `iwant`；先不接第三方。
3. **跑通 `ctest` 骨架**：`tests/harness.h` + 3 个断言（`Cfile` 读、`Cpath` 列目录、`Object` 构造）。
4. **修 K1**：`dispatch_cmd` 命中返回 0、未命中返回 2；加 20 行 `unordered_map` 索引；跑 `code class` 回归。
5. **修 K2**：删 `src/code/code.cpp:23` 的 `exit(-1)`，改返回错误码；`grep -rn "exit(" src` 建清单。
6. **建 `src/language_core/`**：先只写 `source.h/.cpp` + 单测（BOM/CRLF/行号）。
7. **建 `src/language/`**：`Clanguage` + `Clanguage_registry` + `language_action.i` 空实现；`iwant language list` 返回 `[]`。
8. **接 SQLite**：把 amalgamation 放进 `third_party/sqlite/`，CMake 编一个 `sqlite3` 目标，跑 `select 1` 冒烟。
9. **写 `tools/gen_tokens.py`**：扫描 `src/keywords/*.h` 与 `src/sql/*.h`，生成 `language_tokens.inc`；输出冲突报告（`class/operator/register`）。
10. **开 ADR**：`doc/language/adr-0001-libraries.md`，记录"libclang/SQLite/Lua/CPython"选型与不选 tree-sitter/ANTLR 的理由。

---

## 12. 需要你确认的 5 个决策点

| # | 决策 | 选项 | 建议 |
| --- | --- | --- | --- |
| D1 | "解释执行解释器语言"首批做哪个 | Lua / Python / JS / PHP / Java | **Lua → Python**（最小闭环 + 最高实用） |
| D2 | 是否要"执行"（L3） | 只解析校验 / 解析+执行 | **要**，但默认关闭 + 沙箱 |
| D3 | 平台优先级 | Linux 优先 / Windows 优先 / 双平台 | **Linux 一等，Windows 同步可用** |
| D4 | 是否接受第三方依赖与 C++17 | 纯 C++11 自研 / 引库 + C++17 | **引库 + C++17**（MVS 可先 C++11，语言包单独 C++17） |
| D5 | 是否重命名 1,475 个词表类 | 保留冻结 / 批量改名 `Ctoken_*` | **保留冻结 + 生成表**（改名放二期） |

> 若 D1/D2 与本文假设不同，只需调整 Phase 4/5 的语言适配器与 Phase 2 的执行开关，核心架构不变。

---

## 附录 A：现状证据索引（file:line）

| 事实 | 位置 |
| --- | --- |
| 生成器模板 | `src/template/temp_def.h:9-11` |
| 类生成命令 | `src/class/class.cpp:51-77`（恒返回 -1） |
| 代码生成/全局注册 | `src/code/code.cpp:208-260`、`src/global/g_code.i`（62 个对象） |
| 对象派发 | `src/object/object.cpp:1437-1468` |
| 命令解析六步 | `src/object/object.cpp:1470-1505` |
| `system()` 执行 | `src/object/object.cpp:1619-1624` |
| 库层 exit | `src/code/code.cpp:23` |
| MySQL 查询 | `src/my_sql/my_sql.cpp:108`；结果集 232；free 注释 237 |
| SQL 基类 | `src/public/sql.h:19` |
| 运算符元数据 | `src/operator/operator.h:14-25`、`src/operator/addition.cpp` |
| 关键字空壳 | `src/keywords/while.cpp`、`src/keywords/def.cpp` |
| SQL 空壳 | `src/sql/sql_SELECT.cpp` |
| 语法常量 | `src/syntax/syntax_def.h` |
| 主 Makefile | `src/Makefile:8` |
| 包 Makefile | `src/keywords/Makefile`、`src/car/Makefile` |
| Windows 硬编码 | `winIwant/winIwant/winIwant-vs2022.vcxproj:106` |
| 动作位宽 | `src/action/action_type.h:4` |
| 行索引现状 | `src/text/text_line.h:19-30` |

## 附录 B：CMake 骨架（可直接落地）

```cmake
cmake_minimum_required(VERSION 3.24)
project(iwant LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(IWANT_WITH_CLANG   "C/C++ parser via libclang" ON)
option(IWANT_WITH_SQLITE  "SQLite engine"             ON)
option(IWANT_WITH_MYSQL   "MySQL backend"             OFF)
option(IWANT_WITH_LUA     "Lua runtime"               ON)
option(IWANT_WITH_PYTHON  "CPython runtime"           OFF)
option(IWANT_BUILD_TESTS  "Build tests"               ON)

include(cmake/IwantOptions.cmake)
include(cmake/ThirdParty.cmake)

# 现有内核子集（与 src/Makefile 的 source_code 对齐，逐步扩大）
file(GLOB IWANT_CORE_SRC
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/math/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/file/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/code/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/time/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/symbol/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/make/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/build/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/my_sql/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/home/*.cpp"
  "${CMAKE_SOURCE_DIR}/src/syntax/*.cpp")
add_library(iwant_core STATIC ${IWANT_CORE_SRC})
target_include_directories(iwant_core PUBLIC src)
# ... object/action/family 等核心目录按同样方式加入

add_subdirectory(src/language)
add_executable(iwant src/main/main.cpp)
target_link_libraries(iwant PRIVATE iwant_core iwant_language)

if(IWANT_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
```

## 附录 C：第三方库集成要点

| 库 | 关键 API/文件 | CMake 方式 | 注意 |
| --- | --- | --- | --- |
| libclang | `clang-c/Index.h`：`clang_createIndex`、`clang_parseTranslationUnit2`、`clang_getDiagnostic`、`clang_visitChildren`、`clang_tokenize` | `find_library(CLANG_LIB clang)` + `find_path(CLANG_INC clang-c/Index.h)` | 动态库需随包分发；TU/Index 非线程安全，每线程独立 |
| SQLite | `sqlite3.c/sqlite3.h`：`sqlite3_open_v2`、`sqlite3_prepare_v2`、`sqlite3_bind_*`、`sqlite3_step`、`sqlite3_set_authorizer` | 直接 `add_library(sqlite3 STATIC sqlite3.c)` | 关 `SQLITE_OMIT_*` 要谨慎；开 `SQLITE_ENABLE_COLUMN_METADATA` |
| Lua | `lua.h/lauxlib.h/lualib.h`：`luaL_newstate`、`luaL_loadbufferx`、`lua_pcallk`、`lua_sethook` | vendor 源码，去掉 `lua.c/luac.c` | 只开安全库；count hook 限时；`luaL_traceback` 诊断 |
| CPython | `Python.h`：`PyConfig_InitIsolatedConfig`、`Py_InitializeFromConfig`、`PyRun_StringFlags`、`PyErr_Fetch` | `find_package(Python3 COMPONENTS Development.Embed)`；`Py_LIMITED_API` | Windows 用 `python3.dll`；GIL；子进程回退 |
| QuickJS-ng | `quickjs.h`：`JS_NewRuntime`、`JS_NewContext`、`JS_Eval`、`JS_SetInterruptHandler` | vendor 源码 | 内存/时间上限；ES 模块加载策略 |
| libtcc | `libtcc.h`：`tcc_new`、`tcc_set_output_type`、`tcc_compile_string`、`tcc_relocate`、`tcc_run` | 动态链接或独立可选目标 | 仅 C99；LGPL 义务 |

## 附录 D：参考链接

- libclang: <https://clang.llvm.org/docs/LibClang.html>
- Clang compile database: <https://clang.llvm.org/docs/JSONCompilationDatabase.html>
- SQLite amalgamation: <https://www.sqlite.org/amalgamation.html>
- SQLite C API: <https://www.sqlite.org/c3ref/intro.html>
- Lua 5.4 manual: <https://www.lua.org/manual/5.4/>
- CPython embedding: <https://docs.python.org/3/c-api/init.html>
- QuickJS-ng: <https://github.com/quickjs-ng/quickjs>
- TinyCC: <https://bellard.org/tcc/>
- tree-sitter: <https://tree-sitter.github.io/tree-sitter/>
- ANTLR4: <https://www.antlr.org/>
- MySQL C API: <https://dev.mysql.com/doc/c-api/8.0/en/>

---

## 附录 E：术语

| 术语 | 含义 |
| --- | --- |
| 语言驱动（driver） | 一种语言的 `Clanguage` 子类，负责 parse/check/ast/execute |
| 门面（facade） | `Clanguage` + `Clanguage_registry`，统一 CLI 入口 |
| 词表（vocabulary） | `keywords/sql/operator/instruction` 等"一词一类"的元数据类 |
| 空壳类 | 只有构造/`my_init`，无业务方法 |
| L0–L3 | 识别/解析/校验/执行 四级能力 |
| dogfood | 用 iwant 自己的语言驱动解析 iwant 自己的源码 |
| 编译数据库 | `compile_commands.json`，libclang 获取真实编译参数 |
