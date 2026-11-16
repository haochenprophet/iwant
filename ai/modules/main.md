# src/main

> 统计: 3 文件 / 140 行 / 1 类 / 6 方法 / 7 自由函数 / 0 成员变量 / 0 全局变量 / 3 宏 / 0 typedef / 2 枚举

## main/main.cpp (102 行)

### 宏 #define (1)
- `MAIN_TEST` = 0  `L6`

### 函数 (7)
- `Cmain::my_init()` — 定义  `L9`
- `Cmain::Cmain()` — 定义  `L18`
- `Cmain::is_exist_main()` — 定义  `L23`
- `Cmain::create_main_cmd()` — 定义  `L28`
- `Cmain::do_action()` — 定义  `L59`
- `Cmain::deal_cmd()` — 定义  `L66`
- `main()` — 定义  `L92`

> 完整签名见 JSON。

## main/main.h (22 行)

### 宏 #define (1)
- `MAIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_main::Cmain  `L7`  `class`
- 继承: `Cfile`
- 方法 (6):
  - `Cmain()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`
  - `int is_exist_main(char *f_name)` （声明） `L12`
  - `int create_main_cmd(int argc, char *argv[])` （声明） `L13`
  - `int do_action(void * a=nullptr)` （声明） `L14`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L15`

## main/main_action.h (16 行)

### 宏 #define (1)
- `MAIN_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class MainAtcionClass   `L6`
- none、create

### 枚举 enum class MainAtcion   `L12`
- create_main=BIT0
