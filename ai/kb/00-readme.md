# 00 README 权威解读（逐节对齐代码）

> `README.md`（98 行）是本项目唯一的自述文件。本文把它的**每一节、每一条规则**对齐到仓库里的实际代码，给出"原文声称 → 代码落点 → 实测结论"。
> 定位：KB 的第一入口。想快速了解项目读这篇；想改代码读 `08-conventions.md` / `13-defects.md`；想接 CLI 读 `15-cli-construction.md`。

---

## 0. README 结构速览

| 行号 | 小节 | 性质 |
| --- | --- | --- |
| 1-5 | 标题 "I want Library" | 项目名与一句话定位 |
| 7-31 | `[Thinker]` | **设计宣言**（不是散文，是约束） |
| 33 | `[package]:code tree` | 目录/命名模型 |
| 36-41 | `[class]` | 两个核心类 Ctimeline / Ctimetree |
| 43 | `[Get code]` | 获取方式 |
| 46-72 | `[Coding rule]` | **8 条编码铁律** |
| 74-95 | `[Building]` | 构建方式（Linux / Windows） |
| 97-98 | `[sample-code]` | 样例用途声明 |

---

## 1. [Thinker]（L7-31）—— 独白即需求

把这段拟人化文字翻译成工程约束，每一条都能在代码里找到对应物：

| 宣言（节选） | 工程含义 | 代码落点 |
| --- | --- | --- |
| "I am a thinker, I am Object" | 一切实体的根类 | `Object`（`src/object/object.h`） |
| "I am time, I am space" | 对象自带时间与空间属性 | `Osetting : Ouuid, Otime, Orange` |
| "No gun, no cannons, we made ourselves... creating classes, creating source code, creating Makefiles" | **自我生成**：程序能造自己的源码 | `Cclass`/`Ccode`/`Cmain`/`Cmake`/`Cbuild` + `batch/*.bat` |
| "I know the past, understand the present, insight into the future" | 时间三态 | `Otime`（start/at/end）、`Otimeline`（now/past/future） |
| "I will recording all human history and activities" | 持久化 | `database/organization.sql` + `Cmy_sql` |

**要点**：README 的独白不是装饰。它规定了"对象必须同时具备身份、时间、空间、可创建、可记录"这五件事——这正是 `Osetting` 那 60+ 个字段的来源。

---

## 2. [package] code tree（L33）

原文：`main|root/package/files/namespace/class/command/action/function/coding...`

逐词落点（实测）：

| 词 | 含义 | 仓库落点 |
| --- | --- | --- |
| `main` | 程序入口 | `src/main/`（`Cmain`）+ 每个 .cpp 末尾的测试 main |
| `root/package` | 根 / 包 | `src/` 下 101 个包目录 |
| `files` | 文件命名 | `<pkg>_<noun>.h/.cpp`，主类名 = 文件名 + C |
| `namespace` | 命名空间 | `n_<pkg>` + 文件尾 `using namespace n_<pkg>;` |
| `class` | 类 | `C<file_name>`，基类 `Object` |
| `command` | 命令表 | `<pkg>_action.h`（枚举）+ `<pkg>_action.i`（Action[]） |
| `action` | 动作 | `ACTION_T` 位掩码 + `EatcionRelation` |
| `function` | 成员函数 | `my_init/func/do_action/runme` |
| `coding` | 生成 | `batch/*.bat` 驱动 `code.exe` 批量造类 |

---

## 3. [class]（L36-41）—— README 点名的两个类

| README 描述 | 实际文件 | 实测状态 |
| --- | --- | --- |
| `class Ctimeline`：所有对象的生命周期在同一时空 | `src/time/timeline.h/.cpp` | 有实质内容：`TimePoint origin` + `std::list<TimePoint*> time_point_list` + `add()/adjust_status()` |
| `class Ctimetree`：用 C++ 描述宇宙中任何事物/对象的演化与成长 | `src/time/timetree.h/.cpp` | **仅词条**：只有 `my_init()` 设 name/alias + `my_size()`，无时间树算法 |
| 时间树图 | `doc/timetree.jpg` | 存在（README 链接的图） |

**结论**：`Ctimetree` 目前是"占位类"，README 里描述的是设计目标而非已实现能力。这正是项目当前的整体状态——**模型先行，算法待填**。

---

## 4. [Get code]（L43）

原文：`git clone --recursive https://github.com/haochenprophet/iwant`

实测：
- 仓库根**没有 `.gitmodules`"**，`--recursive` 实际是 no-op（没有子模块可拉）。
- MySQL Connector 的库文件已直接入库（`mysql_connect/lib64/libmysqlcppconn2*.so`、`.a`），不依赖子模块。

---

## 5. [Coding rule] 八条 → 逐条验证

| # | README 原文 | 代码证据 | 实测状态 |
| --- | --- | --- | --- |
| 1 | 返回值：`<0` 无事可做，`==0` 成功，`>0` 失败 | `typedef int(*MyFunc)(void *p); //return <0 do nothing , ==0 success, >0 fail`（`object.h`）；`deal_cmd` 返回 0/-1 | ✅ 主流遵守；但库内仍有 6 处 `exit()` 绕过返回码（13-defects S3） |
| 2 | 回调统一 `typedef int(*MyFunc)(void *p);` | `object.h` 顶层 typedef；另有双参变体 `ObjectFunc` | ✅ |
| 3 | 所有类继承 `Object`；构造函数必须设 `name` 与 `alias`；id 自动分配 | 3117 个类全部 `:public Object`（或经 `Osetting`）；`Object` 构造里 `id = ++object_id` | ✅（README 示例写 `alias = this->name`，实际约定是 `alias = 去掉 C 前缀的 tag`，见下） |
| 4 | 一个文件一个主类，类名 = cpp 文件名 + `C` | `car_door.cpp` ↔ `Ccar_door`；`iwant.cpp` ↔ `Ciwant` | ✅ 全库一致 |
| 5 | `Object` 体系类用 `O`（`Ouuid`/`Oinput`）；命名空间用 `n`（`n_object`）；union 用 `U`/`u`（`Udata`） | `Osetting/Otime/Orange/Ocoord/Otimeline/Omove`；`n_car`；`Udata`（`data/data.h`） | ✅ |
| 6 | 所有字符串定义应抽到独立处 | `template/temp_def.h`（模板）、`syntax/syntax_def.h`（语法）、`*_action.i`（帮助文本）、`code.h` 的 `G_CODE_*` | ⚠️ 部分：核心字符串已宏化，但 671 处 `std::cout/printf` 的字面量仍在代码里 |
| 7 | 标准 C/libc 函数在类内以 `_c` 后缀重载，如 `static int printf_c(const char*, ...)` | `Cprintf::printf_c` 为 static 成员（`cstdio/printf.h:14`）；cstdio 包内 `_c(` 共 46 处，全库 78 处 | ✅ 实现方式 = **静态成员函数**，不是自由函数 |
| 8 | 回调类函数统一 `runme()`，如 `int Ctree_func::runme(void* node)`；参考 `Object::callback` | `tree/tree_func.h:15` 声明、`tree_func.cpp:21` 定义；`Object::callback` 在 `object.h` | ✅ |

### 规则 3 的真实构造写法（照这个抄）

```cpp
Ciwant::Ciwant()
{
	this->name = "Ciwant";   // 必须是 C + 文件名
	this->alias = "iwant";   // 去 C 前缀的 tag（README 示例写成 =name，实际代码是去前缀）
}
```

补充事实：`Object` 基类构造会执行 `name += std::to_string(id)`（`object.cpp:90-100`），所以**先由基类生成唯一名，再由子类 `my_init()` 覆盖**——这是"id 自动分配"的实际机制。

---

## 6. [Building]（L74-95）—— 按 README 做会踩的坑

### Linux（README L77-91）

README 写：`cd src` → `make`。**实测不可行**：

`src/Makefile` 把入口选择编译进宏 →
```make
CFLAGS += -D$(main)_TEST=1 -D$(debug)_DEBUG=1
```

不传 `main` 时是 `-D_TEST=1`，而全库唯一入口都藏在 `#if XXX_TEST` 里 → **没有 main() → 链接失败**。

正确姿势：

```bash
cd src && make main=CODE        # 生成 code 工具
sh build.sh code                # 同上，产物移到仓库根
```

依赖（README 正确）：`uuid-dev make g++ libmysqlclient-dev`。

README 的两个示例**都成立**：
- `sh ../batch/build_control_class.sh` —— 文件存在
- `cd collect; make main=COLLECT_FILE` —— `collect/Makefile` 存在，`collect_file.cpp` 里有 `COLLECT_FILE_TEST` 开关

### Windows（README L93-95）

- README 说装 VS2015+ 打开 `winIwant.sln`；实际路径是 `winIwant/winIwant.sln`（工程头 `VisualStudioVersion = 14.0`），另有 `winIwant/winIwant-vs2022.sln`。
- 运行需 `libmysql.dll` 与 exe 同目录（仓库已在 `winIwant/x64/Release/` 放好副本）。

---

## 7. [sample-code]（L97-98）

原文：仅供学习/参考/测试，不得用于其它用途。

实测：338 个文件，最大三块 `rsa`(129)、`math`(69)、`bmc`(58)；另有 `socket`/`serial`/`thread`/`timer` 等独立小样。

---

## 8. README 与现实的五处偏差（读前必知）

| # | README 声称 | 实际情况 | 影响 |
| --- | --- | --- | --- |
| 1 | `cd src; make` 即可构建 | 必须 `make main=XXX`，否则无 main 链接失败 | 新人第一次构建必卡 |
| 2 | `git clone --recursive` | 无 `.gitmodules`，recursive 无效 | 无影响（但说明文档滞后） |
| 3 | 构造函数 `alias = this->name` | 实际 `alias` = 去 C 前缀的 tag | 照抄会得到 `Ccar` 而不是 `car`，导致 `isMe("car")` 失效 |
| 4 | 打开 `winIwant.sln` | 文件在 `winIwant/winIwant.sln` | 找不到工程 |
| 5 | `Ctimetree` 描述宇宙演化 | 实际是空壳词条类 | 误以为已有时间树能力 |

---

## 9. README → KB 章节对照

| README 小节 | 深入阅读 |
| --- | --- |
| [Thinker] | `01-overview.md`、`03-object-model.md` |
| [package] code tree | `02-architecture.md`、`05-modules.md` |
| [class] Ctimeline/Ctimetree | `05-modules.md` 的 `time` 行 |
| [Get code] | `06-build-run.md` |
| [Coding rule] 1-8 | `08-conventions.md`（含补充约定与新增包清单） |
| [Building] | `06-build-run.md`、`10-pitfalls.md` |
| [sample-code] | `01-overview.md` 目录职责表 |
| （README 未提） | `13-defects.md`（缺陷）、`14-cli-roadmap.md`/`15-cli-construction.md`（CLI） |

> 机器可读版本：`readme-map.json`。
