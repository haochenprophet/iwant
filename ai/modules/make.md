# src/make

> 统计: 4 文件 / 69 行 / 2 类 / 3 方法 / 4 自由函数 / 0 成员变量 / 0 全局变量 / 3 宏 / 0 typedef / 0 枚举

## make/make.cpp (9 行)

### 函数 (1)
- `Cmake::Cmake()` — 定义  `L3`

> 完整签名见 JSON: `Cmake::Cmake()`

## make/make.h (16 行)

### 宏 #define (1)
- `MAKE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_make::Cmake  `L7`  `class`
- 继承: `Object`
- 方法 (1):
  - `Cmake()` （声明） `L9`

## make/makefile.cpp (26 行)

### 宏 #define (1)
- `MAKEFILE_TEST` = 0  `L15`

### 函数 (3)
- `Cmakefile::my_init()` — 定义  `L2`
- `Cmakefile::Cmakefile()` — 定义  `L9`
- `main()` — 定义  `L20`

> 完整签名见 JSON: `int Cmakefile::my_init(void *p)`、`Cmakefile::Cmakefile()`、`int main(int argc, char *argv[])`

## make/makefile.h (18 行)

### 宏 #define (1)
- `MAKEFILE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_makefile::Cmakefile  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cmakefile()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`
