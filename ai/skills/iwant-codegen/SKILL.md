---
name: iwant-codegen
description: 要在这个仓库里用 code 生成 C++ 类骨架时加载。给出 batch→code.exe→模板的完整机制、确切的命令序列、批量脚本写法、验证方法，以及 10 个已实测的坑（多 tag 串味、路径破坏类名、退出码恒 0 等）。
---

# iwant：用 code 生成类（可执行规程）

## 何时用我

- 要新增一个类（`<pkg>_<noun>.h/.cpp`），不想手抄模板
- 要一次给一个包补几十个词条类
- 要解释"为什么生成出来的类名不对/文件没出现"
- 要把生成流程接进脚本或 CI

## 先决条件（30 秒检查）

1. 有没有二进制？
   - Windows：`batch\code.exe`（479,232 B，仓库自带，实测可用）
   - Linux：`cd src && make main=CODE`（产出 `src/iwant`）；若链接报 `Cclass` 未定义，先把 `class/*.cpp` 加进 `src/Makefile` 的 `source_code`
2. 当前目录是不是**目标包目录**？生成物落在 CWD，不是包目录。
3. 每个 tag 是不是合法标识符（字母/下划线开头）？非法会静默跳过。

## 生成一个类（两条命令，顺序固定）

```powershell
cd src\car
..\..\batch\code.exe class car_door
..\..\batch\code.exe main create_main car_door
```

```bash
# Linux 同上，把 code.exe 换成 ./iwant
cd src/car
../../src/iwant class car_door
../../src/iwant main create_main car_door
```

产物：
- `car_door.h`：守卫 `CAR_DOOR_H` + `namespace n_car_door` + `class Ccar_door` + `my_init/my_size`
- `car_door.cpp`：`my_init` 设 `name="Ccar_door"/alias="car_door"` + 构造/析构
- 第 2 条命令追加 `#if CAR_DOOR_TEST` 测试 main（已有则跳过）

## 验证（三条 grep 就够）

```bash
head -3 car_door.h                                  # #ifndef CAR_DOOR_H
grep -n 'class C' car_door.h                        # class Ccar_door :public Object
grep -n 'alias\|main(' car_door.cpp                 # alias = "car_door"; 且存在 main(
```

再确认**类名与文件名一致**：`Ccar_door` ↔ `car_door.cpp`。不一致说明踩了路径坑（见下）。

## 批量生成（关键：一次一 tag）

**绝对不要**写 `code class a b c`（实测会把三个文件都写成 `Ca`/最后一个 tag 的类）。

```powershell
'car_door','car_wheel','car_engine' | ForEach-Object {
  & ..\..\batch\code.exe class $_
  & ..\..\batch\code.exe main create_main $_
}
```

```bash
for t in car_door car_wheel car_engine; do
  ../src/iwant class $t
  ../src/iwant main create_main $t
done
```

## 生成后接入包（4 步）

```
1. 文件已在包目录（或从 CWD mv 进来）
2. 若是新包：复制 src/file/Makefile，改 MK_TAG
3. 若要在主程序可用：把 <pkg>/*.cpp 加进 src/Makefile 的 source_code
4. 重建总头：sh batch/build-all_h_include.sh（或手工加 include）
```

## 模板与替换规则

| 模板 | 生成物 | 占位符 |
| --- | --- | --- |
| CLASS_H_TEMP | `<tag>.h` | `[tag]` 小写、`[TAG]` 大写 |
| CLASS_CPP_TEMP | `<tag>.cpp` | 同上 |
| MAIN_TEMP | 追加到 `<tag>.cpp` | `[TAG]` |

替换是**纯字符串**：`[tag]`→`car_door`、`[TAG]`→`CAR_DOOR`（整体 toupper，所以 `MyThing` 的守卫是 `MYTHING_H`）。

## 10 个已实测的坑

| # | 坑 | 现象 | 规避 |
| --- | --- | --- | --- |
| G1 | 多 tag | `code class b c` → b.h 里是 `Cc` | 一进程一 tag |
| G2 | 路径当类名 | `code class sub/x` → `class Csub/x` 非法 | 先 cd 到目录，只传纯名 |
| G3 | 未知词 | `code class help` 生成 help.h/.cpp | 只传已确认的 tag 列表 |
| G4 | 退出码恒 0 | 失败也返回 0 | 别靠退出码，检查文件与 `is_exist=` 输出 |
| G5 | `code Ccode` | SIGSEGV，只剩空壳 g_code | 注册表手工维护 |
| G6 | 写失败静默 | 只读目录无报错 | 检查目录可写、生成后 `Test-Path` |
| G7 | 查询打印 | 输出里混入 `is_exist=0/1` | 解析时忽略该行 |
| G8 | build_g_class.sh | 产出不是 C++ | 废弃，别用 |
| G9 | Linux 方言 B | `make main=CLASS` 链接失败 | 用方言 A（main=CODE） |
| G10 | insert-my_size.bat | 空文件 | 自己写脚本补 `my_size` |

## 失败排查顺序

1. 文件没出现 → 目录是否可写？tag 是否合法（`123abc` 静默跳过）？是否看错了 CWD？
2. 类名不对 → 是否传了路径（G2）？
3. 多个文件内容一样 → 是否一条命令带了多个 tag（G1）？
4. 没有 main → 是否忘了第二条命令？或文件里已有 `main` 被跳过？
5. 二进制不存在 → Windows 用 `batch\code.exe`；Linux 先 `make main=CODE`。

## 不要做的事

- 不要手写类骨架（模板就在 `src/template/temp_def.h`）
- 不要用路径调用 `code class`
- 不要一条命令传多个 tag
- 不要依赖退出码判断成功
- 不要用 `code Ccode` 生成注册表（会段错误）

## 参考

- `ai/kb/20-batch-codegen.md` —— 完整机制 + 12 组实测
- `ai/kb/codegen-catalog.json` —— 机器可读目录（命令/模板/脚本/探针结果）
- `ai/kb/04-codegen.md` —— 生成器架构视角
- `ai/kb/19-package-constraints.md` —— 生成后的类要满足的约束
