# 09 术语表

> 按"看到名字能立刻反应出作用"排列。带 ★ 的是理解本项目的关键概念。

## 核心概念

| 术语 | 含义 | 位置 |
| --- | --- | --- |
| ★ `Object` | 全库唯一根类。自带 id/uuid/name/alias、时间、空间、动作位掩码、家族表、关系表、内存账本 | `src/object/object.h` |
| ★ `Osetting` | `Object` 的父类，继承 `Ouuid + Otime + Orange`，承载全部字段 | 同上 |
| ★ 家族 `family` | `std::list<void*>`，对象的子节点表；`addMe()` 挂入，`dispatch_cmd` 在其中递归找宿主 | 同上 |
| ★ `dispatch_cmd` | 命令派发：`runme` 特殊入口 → `isMe` 自认领 → 遍历 family 递归 | `object.cpp:1437` |
| ★ 动作位 `ACTION_T` | 64 位无符号整数，每 bit 一个动作；`BIT0..BIT63` | `action/action_type.h`、`bit/bits_def.h` |
| ★ `Action` 表 | `{action_class, t, r, action, name, help}` 数组，以全 0 项结尾 | `*_action.i` |
| ★ `EatcionRelation` | 动作命中关系：`equal/large/and_/or_/bit_and/...` | `action/action_type.h` |
| ★ `g_code` | 全局注册三件套（`g_code.h/.i/_func.i`）：全局实例定义 + `add_objects(Object*)` | `src/global/` |
| ★ `all_h_include.h` | 巨型总头（3070 行 / 3067 条 include），测试 main 与 `g_code.i` 的入口 | `src/all/` |
| ★ tag 模板 | `[tag]` 小写名 / `[TAG]` 大写名 / `[TAG%d]` 带序号；`tag_temp/replace_temp` 替换 | `template/temp_def.h` |
| 词条型类 | 只有 `my_init()` 设 name/alias + 空析构的类（占全库多数） | `car`/`satellite`/… |
| 包 package | `src/` 下的一级名词域目录（101 个），也指类的 `package` 字段 | `src/*` |
| 元类 | 会生成代码的类：`Cclass`/`Ccode`/`Cmain`/`Cmake`/`Cbuild` | 同名包 |

## 数据结构与工具类

| 术语 | 含义 |
| --- | --- |
| `Ouuid` | 身份：uuid 字符串与格式宏（`GUID_LEN=64`） |
| `Otime` | 时间：`tm_start/tm_at/tm_end` + `time_t/clock_t` 三组 |
| `Orange` | 空间/范围：`range_start/range_amount/range_end`（`Udata`） |
| `Ocoord` | 三维坐标 `x,y,z` |
| `Omove` / `Cvelocity` | 运动抽象：速度/加速度/方向/起止时间 |
| `Udata` | 万能 union（`bool/char/int/long long/double/void*`…） |
| `Cparameter` | 调用参数：`in/out + size_in/size_out + 参数栈` |
| `Cmyfunc` | extern 函数登记项：`name/alias/p_func/priority`，`runMe(p,new_thread)` |
| `CtagItem` | 模板规则项：`tag/temp/replace/status` |
| `Otimeline` | 时间轴：`now/past/future` + `multimap<void*,void*>` 轨迹 |
| `Ccmd` | `argc/argv` 存档 |
| `Cfile` | 文件读写追加、存在性判断（生成器落盘用） |
| `Cpath` | 路径/URL 解析与文件列表 |
| `Ctree`/`tree_node`/`Ctree_func` | 树结构与遍历回调 |
| `Csql`/`Cmy_sql` | SQL 抽象 / MySQL 实现 |
| `Ciwant` | 应用外壳，`who()` 打印 "I am iwant APP." |

## 宏与调试

| 名字 | 作用 |
| --- | --- |
| `WHERE_I` | 打印当前文件/行（入口自检） |
| `AT_LINE` | 行级调试输出前缀 |
| `OUT_LINE` / `OUT_LINE_N(x)` | 输出到 stdout/stderr 的调试行 |
| `INCLUDE_ALL_H` | `"all/all_h_include.h"`（`temp_def.h`） |
| `LINUX_OS` / `WINDOWS_OS` | 平台开关（由 Makefile 或 VS 工程定义） |
| `STATIC_CONCPP` | 静态链接 MySQL Connector 的开关 |
| `BIT0..BIT63` | 位常量 |
| `_TEST` 宏族 | `#if <TAG>_TEST` 决定该类是否编译出独立 main |

## 命令与流程词

| 词 | 含义 |
| --- | --- |
| `deal_cmd` | 类级命令处理入口（六步解析） |
| `do_action` | 动作真正执行处（子类覆盖） |
| `set_action_parameter` | 从 argv 抽取动作参数（虚函数） |
| `runme` | 回调统一入口：`int runme(void *myname, void *p)` |
| `execute` | 12 个重载的调用器（按函数名/对象/函数指针，可开线程） |
| `isMe` | 身份匹配（name / alias / id） |
| `my_init` | 对象初始化（设 name/alias/package/syntax/temp） |
| `my_size` | 返回 `sizeof(自己)`，用于内存统计 |
| `where/who/when/how` | 我在哪/我是谁/我何时/我如何 |
