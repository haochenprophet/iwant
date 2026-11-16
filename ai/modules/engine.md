# src/engine

> 统计: 2 文件 / 52 行 / 1 类 / 4 方法 / 4 自由函数 / 0 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 0 枚举

## engine/engine.cpp (32 行)

### 宏 #define (1)
- `ENGINE_TEST` = 0  `L20`

### 函数 (4)
- `Cengine::my_init()` — 定义  `L2`
- `Cengine::Cengine()` — 定义  `L9`
- `Cengine::Cengine()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cengine::my_init(void *p)`、`Cengine::Cengine()`、`Cengine::~Cengine()`、`int main(int argc, char *argv[])`

## engine/engine.h (20 行)

### 宏 #define (1)
- `ENGINE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_engine::Cengine  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cengine()` （声明） `L9`
  - `~Cengine()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
