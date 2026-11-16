# src/wait

> 统计: 2 文件 / 60 行 / 1 类 / 7 方法 / 7 自由函数 / 0 成员变量 / 0 全局变量 / 1 宏 / 0 typedef / 0 枚举

## wait/wait.cpp (37 行)

### 函数 (7)
- `Cwait::my_init()` — 定义  `L2`
- `Cwait::Cwait()` — 定义  `L9`
- `Cwait::Cwait()` — 定义  `L14`
- `Cwait::wait_key()` — 定义  `L19`
- `Cwait::wait_str()` — 定义  `L24`
- `Cwait::wait_number()` — 定义  `L29`
- `Cwait::wait_float()` — 定义  `L34`

> 完整签名见 JSON。

## wait/wait.h (23 行)

### 宏 #define (1)
- `WAIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_wait::Cwait  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cwait()` （声明） `L9`
  - `~Cwait()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `static int wait_key(void *p=nullptr)` （声明） `L13`
  - `static char * wait_str(void *p=nullptr)` （声明） `L14`
  - `static long wait_number(void *p=nullptr)` （声明） `L15`
  - `static double wait_float(void *p=nullptr)` （声明） `L16`
