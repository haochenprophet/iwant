# 08 编码约定

## A. README 的 8 条官方规则（原文 + 实证）

| # | 规则 | 代码实证 |
| --- | --- | --- |
| 1 | 返回值：`<0` 无事可做，`==0` 成功，`>0` 失败 | `MyFunc` 注释、`dispatch_cmd` 返回 `++ret`（=1 即失败）、`deal_cmd` 返回 `-1`（无输入） |
| 2 | 回调统一 `typedef int(*MyFunc)(void *p)` | `object.h` 顶层 typedef；`ObjectFunc` 为双参变体 |
| 3 | 所有类继承 `Object`；构造函数**必须**设 `name` 与 `alias`，id 自动分配 | `Ccar::my_init(){ name="Ccar"; alias="car"; }`；`Object` 构造里 `id=++object_id` |
| 4 | 一个文件一个主类，类名 = 文件名加 `C`（`Ciwant` ↔ `iwant.cpp`） | 全库 3117 类一致 |
| 5 | `Object` 体系类用 `O` 前缀（`Ouuid`/`Oinput`）；命名空间用 `n`（`n_object`）；union 用 `U`/`u`（`Udata`） | `Osetting`/`Omove`/`Otime`/`Orange`/`Ocoord`；`n_car`；`Udata` |
| 6 | 所有字符串定义应抽到独立处 | 大量 `#define XXX_SYNTAX "..."`、`G_CODE_*`、`temp_def.h` |
| 7 | 标准 C 函数有 `_c` 后缀重载（如 `printf_c`） | 见 `src/cstdio/`、`src/cstdlib/`（部分实现） |
| 8 | 回调类函数统一 `runme(void*)`（如 `Ctree_func::runme`） | `Cmyfunc::runMe` / `Object::runme` |

## B. 实证补充约定（源码里稳定出现，但 README 没写）

| 约定 | 说明 | 反例/风险 |
| --- | --- | --- |
| 头文件守卫 = 文件名大写 + `_H` | `#ifndef CAR_H` | 少数包不同（`OBJECT_HOME_H`、`MY_SQL_H`） |
| 命名空间 `n_<pkg>` + 文件尾 `using namespace n_<pkg>;` | 全库统一 | 同名符号在多个包会冲突（如多处 `Csql`/`Cfile`） |
| 每类提供 `my_size() { return sizeof(Cx); }` | 让上层做内存统计 | `insert-my_size.bat` 就是批量补这个 |
| 每个 `.cpp` 末尾带 `#if <TAG>_TEST` 独立 main | 单类可执行验证 | 默认 0；标题宏必须与文件名一致 |
| 包根类文件名 = 包名（`car.h`/`car.cpp`） | 域包入口 | — |
| 子类命名 `<pkg>_<名词>` + `C<pkg>_<名词>` | 如 `car_door` → `Ccar_door` | 超长名（`security_*`） |
| 动作用位掩码，不写 `switch` | `ACTION_T` 64 位 | 语义靠 `EatcionRelation` 表驱动 |
| 外部函数走 `add_ex_func` 注册，不硬编码调用 | `execute("name", p)` | 名字拼错不报错，静默返回 -1 |

## C. 新增一个包的清单（照做即可）

```
□ 1. mkdir src/<pkg>
□ 2. 写 <pkg>.h / <pkg>.cpp（或 code class <pkg> 生成后补 my_init）
       name="C<pkg>"  alias="<pkg>"  package="<pkg>"
□ 3. 批量造子类：batch/<pkg>.bat（code class <pkg>_xxx + code main create_main <pkg>_xxx）
□ 4. 若需进入全局宇宙：生成 <pkg>_g_code.h/.i/_func.i
       （code <src_path> <pkg> create_h+create_c+create_func）
       并在 global/g_code.i + g_code_func.i 里挂载
□ 5. 重建 src/all/all_h_include.h（用 batch/build-all_h_include.sh，注意 10-pitfalls P2/P3）
□ 6. 复制 src/car/Makefile 到 src/<pkg>/Makefile，改 MK_TAG
□ 7. 若要在主程序里可用：把 <pkg>/*.cpp 加入 src/Makefile 的 source_code
□ 8. 编译验证：cd src/<pkg> && make main=<PKG>
```

## D. 命名与语义对照

| 前缀/后缀 | 含义 | 例 |
| --- | --- | --- |
| `C` + 名 | 具体类 | `Ccar`, `Ccode`, `Cmy_sql` |
| `O` + 名 | Object 体系的数据结构 | `Osetting`, `Otime`, `Orange`, `Ocoord`, `Otimeline` |
| `U` + 名 | union | `Udata` |
| `n_` + 包名 | 命名空间 | `n_object` |
| `g_` + 名 | 全局实例 | `g_code`, `g_action`, `g_class` |
| `*_action.h` / `.i` | 动作枚举 + 动作表 | `main_action.i` |
| `*_g_code.*` | 包级全局注册 | `cstdio_g_code.i` |
| `*_message` | 消息类型 | `action_message`, `weather_message` |
| `my_*` | 对象自身操作 | `my_init`, `my_uuid`, `my_size`, `my_family` |
