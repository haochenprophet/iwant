# src/ex_func

> 统计: 3 文件 / 98 行 / 1 类 / 2 方法 / 9 自由函数 / 0 成员变量 / 0 全局变量 / 2 宏 / 1 typedef / 0 枚举

## ex_func/ex_func.cpp (67 行)

### 函数 (6)
- `Cex_func::my_init()` — 定义  `L5`
- `Cex_func::Cex_func()` — 定义  `L12`
- `runcmd()` — 定义  `L17`
- `time_cmd()` — 定义  `L22`
- `rename_cmd()` — 定义  `L38`
- `wait_char_abcd()` — 定义  `L51`

> 完整签名见 JSON: `int Cex_func::my_init(void *p)`、`Cex_func::Cex_func()`、`int runcmd(void *cmd)`、`int time_cmd(void *format)`、`int rename_cmd(void * p_Cparameter)`、`int wait_char_abcd(void * cp)`

## ex_func/ex_func.h (15 行)

### 宏 #define (1)
- `EX_FUNC_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (1)
- `typedef int(*ex_func)(void *p)`  `L8`

### 函数 (3)
- `runcmd()` — 声明  `L11`
- `time_cmd()` — 声明  `L12`
- `wait_char_abcd()` — 声明  `L13`

> 完整签名见 JSON: `int runcmd(void *cmd)`、`int time_cmd(void *format)`、`int wait_char_abcd(void * cp)`

## ex_func/ex_func_class.h (16 行)

### 宏 #define (1)
- `EX_FUNC_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ex_func::Cex_func  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cex_func()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`
