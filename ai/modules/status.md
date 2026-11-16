# src/status

> 统计: 2 文件 / 52 行 / 1 类 / 4 方法 / 4 自由函数 / 0 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 0 枚举

## status/status.cpp (32 行)

### 宏 #define (1)
- `STATUS_TEST` = 0  `L20`

### 函数 (4)
- `Cstatus::my_init()` — 定义  `L2`
- `Cstatus::Cstatus()` — 定义  `L9`
- `Cstatus::Cstatus()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cstatus::my_init(void *p)`、`Cstatus::Cstatus()`、`Cstatus::~Cstatus()`、`int main(int argc, char *argv[])`

## status/status.h (20 行)

### 宏 #define (1)
- `STATUS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_status::Cstatus  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cstatus()` （声明） `L9`
  - `~Cstatus()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
