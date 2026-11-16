# src/locate

> 统计: 2 文件 / 86 行 / 1 类 / 6 方法 / 6 自由函数 / 0 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 0 枚举

## locate/locate.cpp (64 行)

### 宏 #define (1)
- `LOCATE_TEST` = 0  `L52`

### 函数 (6)
- `Clocate::my_init()` — 定义  `L2`
- `Clocate::Clocate()` — 定义  `L9`
- `Clocate::Clocate()` — 定义  `L14`
- `Clocate::line()` — 定义  `L19`
- `Clocate::line()` — 定义  `L46`
- `main()` — 定义  `L57`

> 完整签名见 JSON: `int Clocate::my_init(void *p)`、`Clocate::Clocate()`、`Clocate::~Clocate()`、`uint8_t* Clocate::line(uint8_t* start, uint8_t* end, int64_…`、`uint8_t* Clocate::line(uint8_t* start, size_t size, int64_t…`、`int main(int argc, char *argv[])`

## locate/locate.h (22 行)

### 宏 #define (1)
- `LOCATE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_locate::Clocate  `L7`  `class`
- 继承: `Object`
- 方法 (6):
  - `Clocate()` （声明） `L9`
  - `~Clocate()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static uint8_t * line(uint8_t * start, uint8_t * end, int64_t line_number)` （声明） `L14`
  - `static uint8_t * line(uint8_t * start, size_t size, int64_t line_number)` （声明） `L15`
