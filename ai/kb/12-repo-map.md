# 12 关键文件坐标

## 入口与主流程

| 目标 | 文件 | 关键位置 |
| --- | --- | --- |
| 命令派发（框架心脏） | `src/object/object.cpp` | L1437 `Object::dispatch_cmd` |
| 六步命令解析 | `src/object/object.cpp` | L1470 `Object::deal_cmd(argc,argv,action,count,min_input)` |
| 动作表定义 | `src/action/action_type.h` | `Action` / `ActionInfo` / `ACTION_T` / `EatcionRelation` |
| 全局装配 | `src/object/object.cpp` | L225-232 `add_global_objects`（`#include "global/g_code.i"` 在 L2） |
| 生成器入口 | `src/code/code.cpp` | 末尾 `#if CODE_TEST` 的 `main`（`sh build.sh code` 打开它） |
| 生成器核心 | `src/code/code.cpp` | `create_head` / `create_tail` / `create_cmd` / `deal_cmd` |
| 造类 | `src/class/class.cpp` | `Cclass::create` / `deal_cmd` |
| 补测试 main | `src/main/main.cpp` | `Cmain::create_main_cmd` |
| 平台选择 | `src/os/os.h` | `WINDOWS_OS` / `LINUX_OS` 分支 |

## 模板与语法定义

| 内容 | 文件 |
| --- | --- |
| 类/测试/全局实例母版 | `src/template/temp_def.h` |
| C++ 类语法、make 语法、tag 语法 | `src/syntax/syntax_def.h` |
| 模板语法说明（人读） | `doc/keyword_syntax.txt` |
| 位常量 | `src/bit/bits_def.h` |

## 全局注册链

| 环节 | 文件 |
| --- | --- |
| 总头（生成物） | `src/all/all_h_include.h`（3070 行 / 3067 include） |
| 全局实例 | `src/global/g_code.i`（`Caction g_action;` …） |
| 挂载函数 | `src/global/g_code_func.i`（`void add_objects(Object *p)`） |
| 包级注册（7 个） | `src/{cstdio,cstdlib,ctime,ctype,math,message,operator}/` 下的 `*_g_code.{h,i}` 与 `*_g_code_func.i` |

## 构建

| 内容 | 文件 |
| --- | --- |
| 主 Makefile | `src/Makefile` |
| 一键构建 | `build.sh` |
| 包级 Makefile 样例 | `src/car/Makefile`（共 49 个包有 Makefile） |
| Windows 解决方案 | `winIwant/winIwant.sln`、`winIwant/winIwant-vs2022.sln` |
| 生成脚本 | `batch/*.bat`（每包一个）、`batch/build-all_h_include.{bat,sh}` |

## 存储

| 内容 | 文件 |
| --- | --- |
| 建表脚本 | `database/organization.sql` |
| SQL 抽象 | `src/public/sql.h` |
| MySQL 实现 | `src/my_sql/my_sql.h` / `.cpp`（650 行） |
| Connector 依赖 | `mysql_connect/include/*.h`、`mysql_connect/lib64/libmysqlcppconn2*` |

## 展示与示例

| 内容 | 文件 |
| --- | --- |
| 项目哲学独白 | `README.md`、`doc/think.txt` |
| 时间树示意图 | `doc/timetree.jpg` |
| 跳转/异或示意图 | `doc/jmp-call.png`、`doc/or_xor.png` |
| 应用外壳 | `src/iwant/iwant.cpp`（`Ciwant::who()`） |
| 学习样例 | `sample-code/`（rsa 129 文件、bmc 58、math 69…） |
| 站点 | `website/index.html`、`release-websit.sh` |

## 本知识库

| 文件 | 用途 |
| --- | --- |
| `ai/kb/README.md` | 索引与速览 |
| `ai/kb/01~05` | 总览 / 架构 / 内核 / 生成器 / 模块地图 |
| `ai/kb/06~08` | 构建运行 / 数据模型 / 编码约定 |
| `ai/kb/09~12` | 术语 / 坑 / 存疑 / 坐标 |
| `ai/kb/graph.json` | 机器可读的包与注册关系 |
| `ai/skills/iwant/SKILL.md` | 可加载技能卡 |
| `ai/code-tree.md`、`ai/modules/` | 豆包逐文件机械分析（查具体声明很好用） |
