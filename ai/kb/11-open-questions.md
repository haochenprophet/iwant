# 11 存疑点与待确认设计

> 这些是**读代码无法定论**的部分。改动前建议先向作者（`haochenprophet` / `chenhaohaochenlulu`）确认。

## 1. 对象树 ↔ MySQL 的完整序列化在哪？

`database/organization.sql` 的字段（`firstchild/nextsibling/parents` + `uuid`）与内存中的 `family`/`l_relation` 一一对偶，`Cmy_sql` 也提供了 `verify_id_*`/`update_uuid_*` 这类动作。但仓库中**没有找到**"整棵树落库 / 从库重建树"的完整实现。推测：这部分在作者本地或未提交分支。

## 2. 3117 个类里究竟有多少会被实例化？

全局注册只有 7 个包（`cstdio/cstdlib/ctime/ctype/math/message/operator`），其余 90+ 包的类需要业务代码手工 `new`。我未找到任何"实例化全部域包"的入口。若目标是"万物宇宙"，这里存在明显的实现缺口。

## 3. `include/` 与 `src/` 谁是未来

`include/` 是 2024-05 的扁平镜像，`src/` 是 2024-06 的分层版本，且 `Makefile` 只用 `src/`。是把 `include/` 删掉，还是它服务于某个已废弃的 Windows 工程？没有文档说明。

## 4. `create_all_h` 动作的真实意图

动作表声明了它（说明设计上想让程序自己生成总头），但 `Cbuild` 没实现，实际靠 `batch` 脚本。是"待实现的路线图"，还是"实现后回退"？

## 5. Windows 与 Linux 构建源集不一致

- Linux `src/Makefile`：核心 12 组 + 包内 `*.cpp`。
- Windows `winIwant.vcxproj`：以工程文件方式列出（.obj 数量显示它编译了**全部**包，含 `instruction`/`keywords`/`car`）。
- 同一份代码在两平台编译的**内容不同**，行为可能与平台相关。

## 6. `stock` 包（3 类 / 1612 行）是否含真实行情逻辑

行数密度远超同级词条包（平均 ~300 行/类），疑有 HTTP 抓取或数据解析代码，但未见测试入口。

## 7. `deploy` 包（40 类）在做什么

命名像"部署流水线"，但同样没有 `*_g_code` 注册、没有实现入口、也没被 `all_h_include.h` 收录（P3）。是纯占位还是未接线？

## 8. 语义漂移：`Object` 的字段是"全能型"

`Osetting` 有 60+ 字段，覆盖身份/时间/空间/动作/缓冲/富媒体/关系。这是刻意的"对象什么都能装"，还是历史累积？它直接导致每个对象 `sizeof` 很大（`my_size()` 普遍在几百字节以上），万级对象时的内存开销值得注意。

## 9. 项目是否仍活跃

`git log`：2016-09-12 首个提交 → **2024-07-16 最后一次提交**（`cd156655 Add Cfile::swap()`），共 797 次提交，分支 `master`（远端另有 `develop`/`replace`）。近一年多无提交。
