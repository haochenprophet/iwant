# src/global

> 统计: 3 文件 / 58 行 / 1 类 / 4 方法 / 5 自由函数 / 0 成员变量 / 0 全局变量 / 3 宏 / 0 typedef / 0 枚举

## global/g_code.h (6 行)

### 宏 #define (1)
- `G_CODE_H`（无值，通常为头文件守卫）  `L2`

### 函数 (1)
- `add_objects()` — 声明  `L4`

> 完整签名见 JSON: `void add_objects(Object *p)`

## global/global_code.cpp (32 行)

### 宏 #define (1)
- `GLOBAL_CODE_TEST` = 0  `L20`

### 函数 (4)
- `Cglobal_code::my_init()` — 定义  `L2`
- `Cglobal_code::Cglobal_code()` — 定义  `L9`
- `Cglobal_code::Cglobal_code()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cglobal_code::my_init(void *p)`、`Cglobal_code::Cglobal_code()`、`Cglobal_code::~Cglobal_code()`、`int main(int argc, char *argv[])`

## global/global_code.h (20 行)

### 宏 #define (1)
- `GLOBAL_CODE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_global_code::Cglobal_code  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cglobal_code()` （声明） `L9`
  - `~Cglobal_code()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
