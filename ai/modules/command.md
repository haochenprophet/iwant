# src/command

> 统计: 10 文件 / 172 行 / 5 类 / 11 方法 / 11 自由函数 / 0 成员变量 / 0 全局变量 / 6 宏 / 0 typedef / 0 枚举

## command/command.cpp (32 行)

### 宏 #define (1)
- `COMMAND_TEST` = 0  `L20`

### 函数 (4)
- `Ccommand::my_init()` — 定义  `L2`
- `Ccommand::Ccommand()` — 定义  `L9`
- `Ccommand::Ccommand()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccommand::my_init(void *p)`、`Ccommand::Ccommand()`、`Ccommand::~Ccommand()`、`int main(int argc, char *argv[])`

## command/command.h (20 行)

### 宏 #define (1)
- `COMMAND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_command::Ccommand  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccommand()` （声明） `L9`
  - `~Ccommand()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## command/esc.cpp (8 行)

### 函数 (1)
- `Cesc::Cesc()` — 定义  `L3`

> 完整签名见 JSON: `Cesc::Cesc()`

## command/esc.h (17 行)

### 宏 #define (1)
- `ESC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_esc::Cesc  `L7`  `class`
- 继承: `Cexit`
- 方法 (1):
  - `Cesc()` （声明） `L9`

## command/exec.cpp (8 行)

### 函数 (1)
- `Cexec::Cexec()` — 定义  `L3`

> 完整签名见 JSON: `Cexec::Cexec()`

## command/exec.h (17 行)

### 宏 #define (1)
- `EXEC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_exec::Cexec  `L7`  `class`
- 继承: `Crun`
- 方法 (1):
  - `Cexec()` （声明） `L9`

## command/exit.cpp (19 行)

### 函数 (3)
- `Cexit::Cexit()` — 定义  `L3`
- `Cexit::func()` — 定义  `L9`
- `Cexit::exit_c()` — 定义  `L15`

> 完整签名见 JSON: `Cexit::Cexit()`、`int Cexit::func(void *p)`、`void Cexit::exit_c(int status)`

## command/exit.h (19 行)

### 宏 #define (1)
- `exit_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_exit::Cexit  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cexit()` （声明） `L9`
  - `int func(void *p=nullptr)` （声明） `L11`
  - `static void exit_c(int status)` （声明） `L12`

## command/run.cpp (14 行)

### 函数 (2)
- `Crun::Crun()` — 定义  `L3`
- `Crun::func()` — 定义  `L9`

> 完整签名见 JSON: `Crun::Crun()`、`int Crun::func(void *p)`

## command/run.h (18 行)

### 宏 #define (1)
- `RUN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_run::Crun  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Crun()` （声明） `L9`
  - `int func(void *p=nullptr)` （声明） `L11`
