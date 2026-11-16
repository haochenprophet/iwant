# iwant 知识库（KB）

> 本目录是**代码事实层**知识库：由对 `E:\github\iwant` 全量源码 + 文档的实测扫描得出，供后续会话直接作为上下文使用。
> 生成时间：2026-11-12　扫描范围：`src/`(6201 个 .h/.cpp)、`doc/`、`batch/`、`database/`、`winIwant/`、`website/`、根目录文档。
> 姊妹产物：`ai/skills/iwant/SKILL.md`（可加载的技能卡）；`ai/modules/`、`ai/callgraph/`、`ai/shards/`（早前由豆包生成的逐模块机械分析，见文末说明）。

## 一句话结论

**iwant 不是一个业务系统，而是一个"C++ 万有对象框架 + 自我代码生成器"**：把 C++ 语言要素、libc 函数、x86 指令、SQL 关键字、以及现实世界实体（汽车、卫星、港口、家庭……）统一建模为继承自 `Object` 的类（实测 3117 个类声明），再提供一套模板替换 + action 位掩码 + 家族注册机制，让程序能够**生成自己的源码骨架并装配自己的全局对象宇宙**。

## 关键数字（实测，非估算）

| 指标 | 数值 | 来源 |
| --- | ---: | --- |
| 仓库文件总数 | 21,304 | `Get-ChildItem -Recurse` |
| 仓库体积（不含 .git） | ≈14.9 GB | 主要是 `winIwant/x64/**/*.obj` 编译产物 |
| `src/` 源文件 | 6,201（3115 .h + 3086 .cpp） | 实测 |
| `src/` 代码行 | 122,667（51,230 行 .h + 71,437 行 .cpp） | 实测 |
| 类声明（`src/**/*.h`） | 3,117 | 实测 |
| `src/` 顶层包目录 | 101 | 实测 |
| `include/` 扁平头文件镜像 | 3,068 个 .h | 实测（**已过期**，见 10-pitfalls） |
| `ai/` 豆包分析产物 | 454 个文件 | 实测 |

## 导航

| 文件 | 内容 | 什么时候看 |
| --- | --- | --- |
| [00-readme.md](00-readme.md) | **README 逐节解读**：8 条 coding rule 的代码落点、构建修正、5 处文档偏差 | 第一次读、或按 README 做事前 |
| [readme-map.json](readme-map.json) | README 声明 → 证据 → 状态（机器可读） | 程序化核对 |
| [01-overview.md](01-overview.md) | 项目本质、设计哲学、目录职责、规模 | 第一次接触 |
| [02-architecture.md](02-architecture.md) | 四层架构、依赖方向、全局注册链 | 想理解"整体怎么转" |
| [03-object-model.md](03-object-model.md) | `Object` 内核：字段、虚函数合同、action 表、家族、内存、tag 模板 | 要改核心 / 写新类 |
| [04-codegen.md](04-codegen.md) | 代码生成流水线：模板、`code` 命令、`g_code` 注册、`all_h_include` | 要新增包 / 批量造类 |
| [05-modules.md](05-modules.md) | 101 个包的逐一说明 + 实测规模表 | 找"某功能在哪个包" |
| [06-build-run.md](06-build-run.md) | Linux/Windows 构建、CLI 用法、单类测试 | 要编译或跑起来 |
| [07-data-model.md](07-data-model.md) | MySQL 组织树、`Cmy_sql`、UUID、SQL 对象化 | 涉及存储 |
| [08-conventions.md](08-conventions.md) | README 八条编码规则 + 实证解读 + 新增包清单 | 提交代码前必读 |
| [09-glossary.md](09-glossary.md) | 术语/命名/前缀表 | 看到 `Oxxx`/`Cxxx`/`n_xxx` 搞不清时 |
| [10-pitfalls.md](10-pitfalls.md) | 12 个已证实的坑（含构建、编码、过期目录） | 排障 |
| [11-open-questions.md](11-open-questions.md) | 存疑点与需作者确认的设计 | 深挖前先看 |
| [12-repo-map.md](12-repo-map.md) | 入口文件坐标、关键文件路径索引 | 需要精确跳转 |
| [16-object.md](16-object.md) | **Object 内核规格书**：继承链、生命周期、字段地图、70 个虚函数合同、四张表一致性、动作/执行/内存/模板/信号 | 要改内核或写新对象 |
| [17-object-style.md](17-object-style.md) | **代码风格约束**：10 条必做 / 10 条禁止 / 10 条建议 + 类骨架模板 + 评审清单 + grep 体检 | 提交代码前必读 |
| [18-file-package.md](18-file-package.md) | **file 包解剖**：package→namespace→class→command→action 五层、43 条动作全表、参数槽映射、worker 分层 | 要建包/学范式 |
| [19-package-constraints.md](19-package-constraints.md) | **包级约束**：P1-P14 必做 / Q1-Q10 禁止 / R1-R6 建议 + 包骨架 + 9 步 + CI 检查 | 建包/评审包前必读 |
| [file-actions.json](file-actions.json) | file 包 43 条动作的机器可读表（enum/命令词/help/argv） | 工具化/比对 |
| [20-batch-codegen.md](20-batch-codegen.md) | **batch→code→模板 生成机制全解**：两种方言、八步链路、三个模板、脚本家族、12 组实测、G1-G10 缺陷 | 要生成类/改生成器 |
| [codegen-catalog.json](codegen-catalog.json) | 生成机制机器可读目录（方言/命令/模板/脚本统计/实测结果） | 工具化/比对 |
| [13-defects.md](13-defects.md) | **C++ 缺陷审计**：35 个问题（10 严重/12 逻辑/6 资源并发/7 设计），带行号与修复建议 | 要修 bug、做代码评审 |
| [14-cli-roadmap.md](14-cli-roadmap.md) | **CLI 化路线图**：现状体检、5 项能力目标、10 个维度差距、分阶段计划与验收 | 要把它做成命令行工具 |
| [15-cli-construction.md](15-cli-construction.md) | **按 Cfile 协议实现 class/command/action 的 CLI**：七件套协议、四个命令对象、用法与自检 | 要动手写 CLI 代码 |
| [graph.json](graph.json) | 包→职责、注册关系、依赖图（机器可读） | 程序化使用 |

## 按目标的阅读路径

- **只想搞懂它是什么**：01 → 02 → 09
- **要加一个新类/新包**：03 → 04 → 08 → 12
- **要编译/跑 CLI**：06 → 10
- **要碰数据库**：07 → 03（`Osetting` 字段含义）
- **要排查"某类为什么没被创建"**：02（注册链）→ 04 → 10

## 与 `ai/` 既有豆包产物的关系

`ai/` 下已有豆包生成的分析资产（`git status` 显示为未跟踪 `?? ai/`，非上游代码）：

| 产物 | 性质 | 本 KB 如何对待 |
| --- | --- | --- |
| `ai/code-tree.md`（1.3 MB，25,858 行） | 逐文件列出类/方法/宏/成员 | 作为**索引用**，结论以本 KB 实测为准 |
| `ai/modules/*.md`（110 个） | 逐包机械统计 + 声明列表 | 查"某个类在哪个文件"很快；不含设计解读 |
| `ai/callgraph/`、`ai/shards/` | 调用图/functions.json/分片原始 JSON | 需要跨文件调用关系时查 `ai/callgraph/functions.json` |
| `ai/scripts/*.py` | 分析脚本（`cpp_analyzer.py` 等） | 可复跑；本 KB 未依赖它们 |

**差异说明**：豆包版口径为"6201 文件 / 155,983 行 / 3,125 类"，本 KB 实测为"6201 文件 / 122,667 行 / 3,117 类"。行数差异来自统计口径（是否计入空行/注释、是否把 `include/` 镜像计入）。以本 KB 为准。
