# ai/ —— iwant 项目的分析与知识资产

| 子目录 | 内容 | 状态 |
| --- | --- | --- |
| [`kb/`](kb/README.md) | **本项目知识库**（14 篇 + `graph.json`，含缺陷审计）：项目本质、架构、Object 内核、代码生成、101 包地图、构建、存储、约定、术语、坑、存疑、坐标 | 2026-11-12 实测生成 |
| [`knowledge-base/`](knowledge-base/README.md) | **外部学习笔记知识库**：CSDN「斑马819」46 篇嵌入式/Linux 笔记（Linux 基础、C 语言、数据结构、Linux 系统编程、8051、i.MX6ULL 裸机），6 个系列导读 + 全文章索引 + 57 主题索引 + 可复现采集脚本 | 2026-11-19 抓取归档 |
| [`plans/`](plans/language-support-plan.md) | **多语言支持评估与可执行 coding 计划**（C/C++/SQL/解释器语言）：现状证据、库选型、目标架构、9 类改造、P0–P6 排期、59 条任务台账（`language-support-tasks.csv`） | 2026-11-17 |
| [`skills/iwant/SKILL.md`](skills/iwant/SKILL.md) | **可加载技能卡**：代码事实向的规程（内核/生成器/101 包/14 坑） | 同上 |
| [`skills/iwant-readme/SKILL.md`](skills/iwant-readme/SKILL.md) | **可加载技能卡**：按 README 八条 coding rule 的可执行版本 + 构建修正 + 文档偏差 | 2026-11-14 |
| [`skills/iwant-package/SKILL.md`](skills/iwant-package/SKILL.md) | **可加载技能卡**：package→namespace→class→command→action 五层建包规程（范本 src/file） | 2026-11-16 |
| [`skills/iwant-codegen/SKILL.md`](skills/iwant-codegen/SKILL.md) | **可加载技能卡**：用 code 生成类骨架的可执行规程（命令、批量、验证、10 个坑） | 2026-11-16 |
| `code-tree.md` | 豆包生成的逐文件清单（1.3 MB / 25,858 行） | 2026-10-09 |
| `modules/*.md` | 豆包生成的逐包机械分析（110 篇） | 2026-10-09 |
| `callgraph/` | 调用图与 `functions.json`（4.3 MB）+ HTML 可视化 | 2026-10-09 |
| `shards/*.json` | 分析中间分片（9 个，共 ~8 MB） | 2026-10-09 |
| `scripts/*.py` | 分析脚本（`cpp_analyzer.py`、`callgraph_build.py`、`merge_tree.py`…） | 可复跑 |

## 怎么用

- **新人/新会话**：先读 [`kb/README.md`](kb/README.md)，它有一句话结论、关键数字和阅读路径。
- **写代码前**：读 [`kb/08-conventions.md`](kb/08-conventions.md) 与 [`kb/10-pitfalls.md`](kb/10-pitfalls.md)。
- **找某个类在哪**：`kb/05-modules.md` 定位包 → `modules/<pkg>.md` 定位文件。
- **加载为上下文**：用 skill `iwant`（配置指向 `ai/skills/iwant`）。

## 关系说明

`kb/` 是**结论层**（人读、经过实测核对），`code-tree.md`/`modules/`/`callgraph/` 是**索引层**（机器产出、覆盖全但无设计解读）。两者口径差异（行数 122,667 vs 155,983）在 `kb/README.md` 末尾有说明，以 `kb/` 为准。

`kb/` 讲的是**这个 iwant 仓库自己**；`knowledge-base/` 是**外部学习资料**（别处博客的嵌入式/Linux 笔记），与本项目的代码无关，只是同样放在 `ai/` 下便于集中查阅。

## 注意

`ai/` 目前**未被 git 跟踪**（`git status` 显示 `?? ai/`）。需要长期保留请提交：

```bash
git add ai/ && git commit -m "Add iwant knowledge base and skill"
```
