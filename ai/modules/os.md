# src/os

> 统计: 2 文件 / 94 行 / 1 类 / 4 方法 / 4 自由函数 / 0 成员变量 / 1 全局变量 / 1 宏 / 8 typedef / 0 枚举

## os/os.cpp (44 行)

### 函数 (4)
- `Cos::Cos()` — 定义  `L7`
- `Cos::Cos()` — 定义  `L16`
- `Cos::init_winsock()` — 定义  `L25`
- `Cos::exit_winsock()` — 定义  `L40`

> 完整签名见 JSON: `Cos::Cos()`、`Cos::~Cos()`、`int Cos::init_winsock()`、`void Cos::exit_winsock()`

### 全局变量 (1)
- `int win_wsa_startup`  `L24`

## os/os.h (50 行)

### 宏 #define (1)
- `OS_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (8)
- `typedef TCHAR DIR_T`  `L10`
- `typedef TCHAR dir_t`  `L11`
- `typedef TCHAR FILE_T`  `L13`
- `typedef TCHAR file_t`  `L14`
- `typedef char DIR_T`  `L25`
- `typedef char dir_t`  `L26`
- `typedef char FILE_T`  `L28`
- `typedef char file_t`  `L29`

### 类 (1)
#### n_os::Cos  `L36`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cos()` （声明） `L38`
  - `~Cos()` （声明） `L40`
  - `int init_winsock()` （声明） `L43`
  - `void exit_winsock()` （声明） `L44`
