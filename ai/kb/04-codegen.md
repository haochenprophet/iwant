# 04 代码生成流水线

> 源码：`src/code/*`（134 文件 / 67 类）、`src/class/*`、`src/main/*`、`src/build/*`、`src/make/*`、`src/template/temp_def.h`
> 驱动脚本：`batch/*.bat`（每个包一个）

## 模板在哪

`src/template/temp_def.h` 是全库的"母版库"（注意：宏值里的换行就是 `\n` 字面量）：

| 宏 | 作用 | 关键占位符 |
| --- | --- | --- |
| `CLASS_H_TEMP` | 生成 `.h`：头守卫 + `namespace n_[tag]` + `class C[tag] :public Object` + `my_init/my_size` | `[TAG]`、`[tag]` |
| `CLASS_CPP_TEMP` | 生成 `.cpp`：`my_init()` 设 name/alias + 构造/析构 | `[tag]` |
| `MAIN_TEMP` | 生成"类内独立测试 main"：`#if [TAG]_TEST ... int main(...)` | `[TAG]` |
| `GLOBAL_CLASS_TEMP` | `\tC[tag] g_[tag];` ——全局实例声明 | `[tag]` |
| `ADD_ME_TEMP` | `\tp->addMe(g_[tag].where());` ——注册动作 | `[tag]` |
| `DEFINE_NAMESPACE_TRMP` / `USING_NAMESPACE_TRMP` / `DEFINE_CLASS_TRMP` | 命名空间与类声明片段 | `[tag]` |

生成样例（`src/car/car.h` 就是这套模板的原样产物）：

```cpp
#ifndef CAR_H
#define CAR_H
#include "object/object.h"
namespace n_car {
	class Ccar :public Object {
	public:
		Ccar(); ~Ccar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar); }
	};
}
using namespace n_car;
#endif
```

## CLI 的两种形态

### 形态 A：`code class <tag>` —— 造一个类

```
batch/car.bat:  code class car_door
  argv[1]="class"  → Object::dispatch_cmd 中 isMe("class") 命中 Cclass
  → Cclass::deal_cmd(argc-1, &argv[1])  → 对每个 tag 调 Cclass::create(tag)
      1) is_definable(tag) 校验（合法标识符）
      2) replace_temp(1)         [tag]→car_door, [TAG]→CAR_DOOR
      3) s_replace(&cpp_temp,...) 生成 .cpp 正文
      4) 若 "car_door.h" 不存在 → f_append(CLASS_H_TEMP 渲染结果)
      5) 若 "car_door.cpp" 不存在 → f_append(CLASS_CPP_TEMP 渲染结果)
```

**幂等**：已存在的文件不会覆盖（`is_exist()` 保护）。

### 形态 B：`code main create_main <tag>` —— 给类补测试 main

`Cmain : public Cfile`，动作 `MainAtcion::create_main` → `create_main_cmd()`：

- 从 `argv` 末尾往前扫，文件名取 `<tag>.cpp`；
- 若该文件**已有** `main`（`is_exist_main()` 查 `main` 函数）→ 跳过；
- 否则把 `MAIN_TEMP` 追加进去。

→ 这就是"为什么每个 .cpp 末尾都有一个被 `#if <TAG>_TEST` 包住的 main"。

### 形态 C：`code <src_path> <pack_name> <action>` —— 生成包级注册文件

`Ccode::deal_cmd`（帮助文本：`Usage:Ccode <src_path> <pack_name> <action>`，示例 `Code ../src/ cstdio`）：

| 参数 | 含义 |
| --- | --- |
| `argv[1]` | 输出目录（如 `../src/cstdio/`） |
| `argv[2]` | 包名（决定文件名前缀与 `set_package`） |
| `argv[3]` | 动作名：`create_h` / `create_c` / `create_func`；缺省三者全开 |

动作位（`src/code/code_action.h` 的 `CodeAtcion`）组合出三类产物：

| 文件 | 内容骨架 |
| --- | --- |
| `<pkg>_g_code.h` | 守卫 + `#include "<pkg>_all_h_include.h"` + `void <pkg>_add_objects(Object *p);` |
| `<pkg>_g_code.i` | 守卫 + 每个类一行 `C<tag> g_<tag>;` |
| `<pkg>_g_code_func.i` | 守卫 + `void <pkg>_add_objects(Object *p)` + 每类一行 `p->addMe(g_<tag>.where());` |

**实测只有 7 个包拥有 `*_g_code.i`**：`cstdio`、`cstdlib`、`ctime`、`ctype`、`math`、`message`、`operator`。这些是"全局宇宙"的成员；其余包的类需要业务代码自行实例化。

## 注册链全景

```
all/all_h_include.h        ← code build create_all_h 生成（3070 行，3000+ #include）
        ↑ 被每个 *_g_code.i 包含
global/g_code.i            ← 全局实例定义（Caction g_action; Cbits g_bits; …）
global/g_code_func.i       ← void add_objects(Object *p) { p->addMe(g_x.where()); … }
        ↑ Object::add_global_objects() 调用
Object 家族树               ← 运行时从此可以 dispatch_cmd 找到任何全局对象
```

## 一个包从 0 到可用的完整流程

```powershell
# 1. 在 src/ 下建包目录与包根类（包根类的文件名 = 包名）
#    src/foo/foo.h, src/foo/foo.cpp     （手写或 code class foo）

# 2. 批量造子类（一次几十上百个）
code class foo_a
code class foo_b
...

# 3. 给每个类补测试 main
code main create_main foo_a
code main create_main foo_b

# 4. （可选）生成包级注册文件 —— 让包进入全局宇宙
code class foo            # 单类
# 或 Ccode 形态：code ../src/ foo create_h+create_c+create_func

# 5. 重建总头文件
code build create_all_h   # → src/all/all_h_include.h

# 6. 写 Makefile（照抄 src/car/Makefile，只改 MK_TAG）
# 7. 编译验证
cd src/foo && make main=FOO_A
```

## 批量脚本的规模（`batch` 目录）

| 脚本 | 内容 |
| --- | --- |
| `car.bat` | 163 行 `code class car_*` + 163 行 `code main create_main car_*` |
| `satellite.bat`/`security.bat`/`ocean.bat` | 同构，规模相当 |
| `build-all_h_include.bat` / `.sh` | 重建 `all_h_include.h` |
| `build_*_keyword.sh`（c/java/php/python/sql/vc++/instruction） | 按语言词汇表批量造 keyword 类 |
| `build_control_class.sh` | 造"控制类"骨架 |
| `insert-my_size.bat` / `insert.bat` / `replace.bat` | 批量文本注入（给已有类补 `my_size()` 等） |

## 构建时如何选择"入口"

`src/Makefile` 把 `main` 变量直接变成宏：

```make
CFLAGS += -std=gnu++11 -DLINUX_OS -D$(main)_TEST=1 -D$(debug)_DEBUG=1 ...
```

`build.sh` 里 `make main={1^^} debug={2^^}` → `sh build.sh code` 即 `-DCODE_TEST=1`，于是 `code.cpp` 末尾那个 `#if CODE_TEST` 的 `main` 成为程序入口，产物被 `mv` 成根目录的 `iwant`。

**所以：`iwant` 可执行文件本质是"被选中的某个类自带的测试 main"。** 换 `main=xxx` 就换了一个可执行程序——这是本项目最巧妙也最容易踩坑的构建设计（见 10-pitfalls P4）。
