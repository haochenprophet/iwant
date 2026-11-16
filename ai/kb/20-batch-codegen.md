# 20 batch 与 code：类生成机制全解

> 本文回答一个问题：`batch/*.bat` 里那句 `code class car_door`，到底把什么变成了什么。
> 依据：`batch/` 全部 100 个文件 + `src/code` / `src/class` / `src/main` / `src/template` 逐行核对，并用仓库自带的 `batch/code.exe` 在临时目录做了 **12 组实测**（见第 7 节）。

## 0. 一句话结论

```
code class <tag>            ->  把 CLASS_H_TEMP / CLASS_CPP_TEMP 里的 [tag]/[TAG]
                               替换成 <tag>，写到当前目录 <tag>.h / <tag>.cpp
code main create_main <tag> ->  若 <tag>.cpp 里没有 main()，把 MAIN_TEMP 追加进去
```

没有 AST、没有 clang、没有解析器——**生成 = 模板字符串替换 + 追加写文件**。

## 1. 两个入口，两种方言

| 方言 | 怎么构建 | 怎么调用 | 谁在用 |
| --- | --- | --- | --- |
| A 派发式 | `make main=CODE` 或预编译 `batch/code.exe` | `code class car_door` | 全部 .bat；build_control_class.sh |
| B 专机式 | `make main=CLASS` | `./iwant car_door`（argv[1] 就是 tag） | build_c_class_keyword.sh 等 |
| C 注册表式 | 同 A | `code Ccode ./ message` | code_message.bat（仅 1 处） |

方言 A 与 B 只差"argv 里有没有对象名这一层"：

```
A:  argv[0]=code  argv[1]=class  argv[2]=car_door   -> dispatch_cmd 找到 Cclass -> deal_cmd
B:  argv[0]=iwant argv[1]=car_door                 -> main() 直接 Cclass::deal_cmd(argv)
```

> 方言 B 在当前 Makefile 下无法构建：`src/Makefile` 的 source_code 不含 `class/*.cpp`，而 Cclass 的全部方法都只在 `src/class/class.cpp` 定义。想跑 B 必须先把它加进 source_code。

---
## 2. code class 的完整链路（八步）

以 `code class car_door` 为例（Windows，CWD=src/car）：

```
code.exe main (code.cpp:258-270)
  +- Ccode c; c.add_global_objects();        // 挂载 g_code.i 里的 62 个全局对象
  +- c.dispatch_cmd(argc, argv)              // object.cpp:1437
       +- argv[1]="class" -> 遍历 family -> g_class 命中
       +- Cclass::deal_cmd(argc-1, &argv[1])         // class.cpp:51
            +- argc-- 倒序：argv[2]="car_door"
            +- Cclass::create("car_door")           // class.cpp:40
            |    +- is_definable("car_door") == true
            |    +- s_rep = "car_door"
            |    +- replace_temp(1)                 // object.cpp:734
            |    |    +- toupper_replace(&temp)     // [TAG] -> CAR_DOOR
            |    |    +- s_replace(&temp)           // [tag] -> car_door
            |    +- s_replace(&cpp_temp, "[tag]", "car_door")
            +- f_name = "car_door.h"
            +- is_exist() == 0 ? f_append(temp)
            +- f_name = "car_door.cpp"
            +- is_exist() == 0 ? f_append(cpp_temp)
```

关键细节：

- `replace_temp(1)` 一次完成两种替换：先 `[TAG]`（大写）再 `[tag]`（小写）。
- 文件名 = 参数原样 + .h/.cpp，落在**当前工作目录**，不是包目录。
- `f_append` 用 in|out|app 打开（file.cpp:63-75），写前不检查 is_open()，失败静默。
- `deal_cmd` 返回 -1，但 main 无条件 return 0——退出码永远是 0。

## 3. 三个模板（原文）

### CLASS_H_TEMP（src/template/temp_def.h）

```cpp
#ifndef [TAG]_H
#define [TAG]_H

#include "object/object.h"

namespace n_[tag] {
	class C[tag] :public Object
	{
	public:
		C[tag]();
		~C[tag]();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(C[tag]); }
	};
}

using namespace n_[tag];

#endif
```

### CLASS_CPP_TEMP

```cpp
#include "[tag].h"
int C[tag]::my_init(void *p)
{
	this->name = "C[tag]";
	this->alias = "[tag]";
	return 0;
}

C[tag]::C[tag]()
{
	this->my_init();
}

C[tag]::~C[tag]()
{

}
```

### MAIN_TEMP

```cpp

#ifndef [TAG]_TEST
#define [TAG]_TEST 0//1
#endif

#if [TAG]_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	if (argc < 2) {WHERE_I;}

	return 0;
}
#endif
```

实测渲染（`code.exe class probe_a`）：probe_a.h 299 B、probe_a.cpp 208 B，与模板逐字一致，仅占位符被替换。
混合大小写 `MyThing`：守卫变 `MYTHING_H`（整体大写），命名空间 `n_MyThing`、类名 `CMyThing` 保持原样。

---
## 4. code main create_main 的链路

```
code main create_main probe_a
  +- dispatch_cmd: argv[1]="main" -> g_main(Cmain) 命中
  +- Cmain::deal_cmd(argc-1, &argv[1])
       +- action = create_main                 // main_action.i
       +- Cmain::create_main_cmd(argc, argv)    // main.cpp:28
            +- argc-- 倒序，跳过 argv[1]，从 argv[2] 开始
            +- tag_temp(tag)                 // my_init 重置 temp=MAIN_TEMP 再替换
            +- f_name = tag + ".cpp"
            +- is_exist_main(f_name)?
            |    +- 有 main -> 跳过
            +- 没有 -> f_append(MAIN_TEMP 渲染结果)
```

实测：已有类文件时追加 main 块（probe_a.cpp 208 -> 384 B）；对不存在的 ghost.cpp 也会创建文件，内容只有 main 块；重复执行会跳过（31 行不变）。

`is_exist_main` 的实现是 `is_exist_func(f_name, "main")`（file.cpp:341），在文本里找 main 且前面是空格/制表符、后面是左括号。

## 5. 文件落点与幂等

| 维度 | 行为 |
| --- | --- |
| 落点 | 当前工作目录（f_name = 参数 + .h），与包目录无关 |
| 覆盖 | 目标已存在 -> is_exist()==1 -> 跳过，不覆盖 |
| 部分存在 | .h 在、.cpp 不在 -> 只补 .cpp（实测 half.h 未被改动） |
| 重复执行 | 完全幂等（第二次 is_exist=1，大小不变） |
| 路径参数 | `code class sub/probe_d` 生成的类名是 `Csub/probe_d`（非法 C++） |
| 非法标识符 | `code class 123abc` -> 静默跳过，无提示 |

## 6. batch 脚本家族

100 个文件：74 .bat / 20 .sh / 2 .exe / 1 .dll / 1 .7z / 1 .cpp / 1 .h。

| 指标 | 数值 |
| --- | ---: |
| 含 code class 的 .bat | 65 |
| code class 命令总数 | 1,559 |
| code main create_main 命令总数 | 1,565 |
| 其他对象命令 | 1（code Ccode ./ message） |

| 类别 | 代表脚本 | 特征 |
| --- | --- | --- |
| 整包生成器 | security.bat(181) satellite.bat(169) car.bat(164) ocean.bat(96) sensor.bat(87) operator.bat(77) code.bat(66) message.bat(59) radar.bat(58) spaceport.bat(57) home.bat(53) cstdio.bat(50) earth.bat(50) deploy.bat(40) materiel.bat(38) cstdlib.bat(36) ctype.bat(33) life.bat(27) airplane.bat(24) hardware.bat(24) money.bat(22) warship.bat(22) string.bat(22) rocket.bat(19) mars.bat(16) ctime.bat(10) text.bat(8) | 前半 code class，后半 code main create_main，一一对应 |
| 单类脚本 | insert.bat replace.bat copy.bat find.bat sum.bat md5.bat crc.bat sha.bat setbuf.bat signbit.bat pcie.bat cmos.bat | 每个 2 行：class + main |
| 关键词批量 .sh | build_c_class_keyword.sh build_sql_keyword.sh build_instructions_keyword.sh(15 KB) build_vc++_keyword.sh build_java_keyword.sh build_php_keyword.sh build_python_keyword.sh | make main=CLASS + 一行一个 ./iwant word |
| 后处理 | mv_keywords.sh(260 行 mv) build-all_h_include.bat/.sh b_src_h.sh message_all_h_include.bat build-make.bat insert-my_size.bat(空) | 移动生成物 / 重建总头 / 拼 Makefile |
| 构建驱动 | make_class.sh make_main.sh make_all.sh build_debug_class.sh build_control_class.sh build_g_class.sh | make main=XXX + 运行产物 |

三个隐藏约定：

1. **一进程一 tag**：65 个脚本、1,559 条命令里没有一条带两个 tag（实测 grep 为 0）。
2. **在目标目录里执行**：脚本里没有任何 cd；生成物落在 CWD，所以要么在包目录下跑，要么跑完用 mv 搬（mv_keywords.sh 就是）。
3. **先 class 后 main**：两条独立命令，顺序不能反。

---
## 7. 实测行为表（Windows + batch/code.exe 479,232 B / 2024-05-17）

| # | 命令 | 结果 |
| --- | --- | --- |
| 1 | code.exe（无参数） | 打印 WHERE_I + 62 个全局对象清单，退出码 -1 |
| 2 | code class probe_a | 生成 probe_a.h / probe_a.cpp，内容与模板一致，退出码 0 |
| 3 | code main create_main probe_a | 追加 main 块（208 -> 384 B） |
| 4 | 重复 code class probe_a | 幂等，is_exist=1 两次，大小不变 |
| 5 | 重复 code main create_main probe_a | 跳过（已有 main） |
| 6 | code class probe_b probe_c | probe_b.h 里是 class Cprobe_c（两文件内容都是 c） |
| 7 | code class sub/probe_d | 文件生成到 sub/，但类名 Csub/probe_d、命名空间 n_sub/probe_d（非法） |
| 8 | code class help | 直接生成 help.h / help.cpp（未知词被当类名） |
| 9 | code class 123abc | 静默跳过，无提示 |
| 10 | code main create_main ghost | 创建只有 main 块的 ghost.cpp |
| 11 | code nosuch | 无报错、无提示，退出码 0 |
| 12 | code Ccode ./ demo 或 code code . demo | SIGSEGV（退出码 11），只留下 3 个空壳 demo_g_code.* |

## 8. 为什么脚本坚持一进程一 tag

`Cclass::create()` 每次只替换 `this->temp` 与 `this->cpp_temp`，不会重置回模板：

```cpp
int Cclass::create(void *p) {
    this->s_rep = str_class;
    this->replace_temp(1);          // 第一次：[TAG]/[tag] 被替换
    this->s_replace(&this->cpp_temp, &this->s_tag, &this->s_rep);
}
```

第二次调用时字符串里已没有占位符，替换是空操作 -> 第二个 tag 的 .h/.cpp 原样复制第一个的内容。加上 deal_cmd 从 argv 末尾倒序处理，多 tag 时所有文件都变成最后一个 tag 的类（实测第 6 条）。

这不是脚本疏忽，而是对实现缺陷的规避：每条命令只带一个 tag。

## 9. 缺陷清单（本次新增，补充 13-defects）

| # | 缺陷 | 位置 | 影响 |
| --- | --- | --- | --- |
| G1 | 多 tag 串味（模板不复位） | class.cpp:40-49 | 批量生成全部写成同一个类 |
| G2 | 路径参数直接进类名 | class.cpp:40-49 | 生成非法 C++ |
| G3 | 未知词生成文件 | class.cpp:51-77 | code class help 造出 help.* |
| G4 | 退出码恒 0 | code.cpp:262-270 | 脚本无法感知失败 |
| G5 | code Ccode 段错误 | code.cpp create_action 把 char* 当 string* | g_code 注册表只能手工维护 |
| G6 | f_append 不查 is_open() | file.cpp:63-75 | 写失败静默 |
| G7 | is_exist() 查询时打印 | file.cpp:53 | 日志被 is_exist=0 污染 |
| G8 | build_g_class.sh 依赖打印即代码 | batch/build_g_class.sh | ./iwant > g_code.i 得到对象清单不是 C++，脚本失效 |
| G9 | .sh 方言 B 与 Makefile 不匹配 | src/Makefile source_code | make main=CLASS 链接失败 |
| G10 | insert-my_size.bat 是空文件 | batch/insert-my_size.bat | 名字暗示的批量补 my_size 能力不存在 |

## 10. 复现与自建

Windows（用现成二进制）：

```powershell
cd src\car
..\..\batch\code.exe class car_door
..\..\batch\code.exe main create_main car_door
```

Linux（需先补构建）：

```bash
cd src
# 把 class/*.cpp action/*.cpp 加入 src/Makefile 的 source_code，否则 main=CODE 链接不到 Cclass
make main=CODE
./iwant class car_door
./iwant main create_main car_door
```

验证：

```bash
head -5 car_door.h              # #ifndef CAR_DOOR_H / class Ccar_door
grep -c "main(" car_door.cpp    # >=1
grep -n 'alias' car_door.cpp    # alias = "car_door";
```

批量（一次一 tag 的循环）：

```powershell
'car_door','car_wheel','car_engine' | ForEach-Object {
  & ..\..\batch\code.exe class $_
  & ..\..\batch\code.exe main create_main $_
}
```

## 11. 与其它文档的关系

| 文档 | 关系 |
| --- | --- |
| 04-codegen.md | 生成器的架构视角（模板/命令/注册链） |
| 18-file-package.md | 被生成物要符合的包结构 |
| 19-package-constraints.md | 生成后的类要满足的包级约束 |
| 13-defects.md | 缺陷总表；本文 G1-G10 是生成链路的补充 |
| ai/skills/iwant-codegen/SKILL.md | 可直接执行的生成操作规程 |
