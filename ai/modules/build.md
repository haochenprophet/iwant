# src/build

> 统计: 5 文件 / 177 行 / 3 类 / 9 方法 / 9 自由函数 / 5 成员变量 / 0 全局变量 / 4 宏 / 2 typedef / 2 枚举

## build/build.cpp (15 行)

### 函数 (2)
- `Cbuild::my_init()` — 定义  `L4`
- `Cbuild::Cbuild()` — 定义  `L11`

> 完整签名见 JSON: `int Cbuild::my_init(void *p)`、`Cbuild::Cbuild()`

## build/build.h (19 行)

### 宏 #define (1)
- `BUILD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_build::Cbuild  `L8`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cbuild()` （声明） `L10`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## build/build_action.h (16 行)

### 宏 #define (1)
- `BUILD_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class CbuileAtcionClass   `L6`
- none、create

### 枚举 enum class CbuileAtcion   `L12`
- create_all_h_inclued

## build/build_makefile.cpp (88 行)

### 宏 #define (1)
- `BUILD_MAKEFILE_TEST` = 0  `L49`

### 函数 (7)
- `Cbuild_makefile::my_init()` — 定义  `L2`
- `Cbuild_makefile::Cbuild_makefile()` — 定义  `L9`
- `Cbuild_makefile::Cbuild_makefile()` — 定义  `L14`
- `Cbuild_makefile::add_define()` — 定义  `L19`
- `Cbuild_makefile::add_block()` — 定义  `L24`
- `Cbuild_makefile::display()` — 定义  `L29`
- `main()` — 定义  `L54`

> 完整签名见 JSON。

## build/build_makefile.h (39 行)

### 宏 #define (1)
- `BUILD_MAKEFILE_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (2)
- `typedef std::list<Cmakefile_block> list_makefile_block`  `L16`
- `typedef std::list<string> list_makefile_define`  `L17`

### 类 (2)
#### n_build_makefile::Cmakefile_block  `L8`  `class`
- 成员变量 (3): `string targets`、`string dependents`、`string commands`

#### n_build_makefile::Cbuild_makefile  `L19`  `class`
- 继承: `Object`
- 成员变量 (2): `list_makefile_define define_list`、`list_makefile_block block_list`
- 方法 (7):
  - `Cbuild_makefile()` （声明） `L24`
  - `~Cbuild_makefile()` （声明） `L26`
  - `int my_init(void *p=nullptr)` （声明） `L27`
  - `size_t my_size()` （定义） `L28`
  - `void add_define(string s_def)` （声明） `L29`
  - `void add_block(Cmakefile_block block)` （声明） `L31`
  - `int display()` （声明） `L32`
