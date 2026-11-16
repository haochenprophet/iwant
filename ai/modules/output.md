# src/output

> 统计: 6 文件 / 273 行 / 3 类 / 10 方法 / 13 自由函数 / 0 成员变量 / 0 全局变量 / 5 宏 / 0 typedef / 3 枚举

## output/cout.cpp (15 行)

### 函数 (2)
- `Ccout::Ccout()` — 定义  `L3`
- `Ccout::func()` — 定义  `L9`

> 完整签名见 JSON: `Ccout::Ccout()`、`int Ccout::func(void *p)`

## output/cout.h (18 行)

### 宏 #define (1)
- `COUT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cout::Ccout  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Ccout()` （声明） `L9`
  - `int func(void *p=nullptr)` （声明） `L11`

## output/display.cpp (146 行)

### 宏 #define (1)
- `DISPLAY_TEST` = 0  `L121`

### 函数 (8)
- `Cdisplay::my_init()` — 定义  `L2`
- `Cdisplay::Cdisplay()` — 定义  `L9`
- `Cdisplay::dispay_space()` — 定义  `L18`
- `Cdisplay::dispay_data()` — 定义  `L25`
- `Cdisplay::display_hex()` — 定义  `L50`
- `Cdisplay::display()` — 定义  `L110`
- `display_test()` — 定义  `L127`
- `main()` — 定义  `L140`

> 完整签名见 JSON。

## output/display.h (48 行)

### 宏 #define (1)
- `DISPLAY_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class DisplayType   `L7`
- string、ascii、hex、hex_offset、decimal、decimal_offset

### 枚举 enum class DisplayStyle   `L17`
- byte=1、word=2、dword=4、qword=8

### 枚举 enum class DisplayRadix   `L25`
- hexadecimal=0、decimal=1、octonary、binary

### 类 (1)
#### n_display::Cdisplay  `L33`  `class`
- 继承: `Object`
- 方法 (6):
  - `Cdisplay()` （声明） `L35`
  - `int my_init(void *p=nullptr)` （声明） `L37`
  - `static inline void dispay_space(int space_count)` （声明） `L38`
  - `static void dispay_data(void* data, int data_type = (int)DisplayStyle::byte,int hex_dec=(…` （声明） `L39`
  - `static void display_hex(char* buf, size_t size, bool display_offset=true, int data_type= …` （声明） `L40`
  - `static int display(uint8_t * start, uint8_t* end ,DisplayType t= DisplayType::string)` （声明） `L41`

## output/echo.cpp (28 行)

### 宏 #define (1)
- `ECHO_TEST` = 0  `L16`

### 函数 (3)
- `Cecho::Cecho()` — 定义  `L3`
- `Cecho::echo()` — 定义  `L9`
- `main()` — 定义  `L21`

> 完整签名见 JSON: `Cecho::Cecho()`、`int Cecho::echo(char* s)`、`int main(int argc, char *argv[])`

## output/echo.h (18 行)

### 宏 #define (1)
- `ECHO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_echo::Cecho  `L7`  `class`
- 继承: `Ccout`
- 方法 (2):
  - `Cecho()` （声明） `L9`
  - `static int echo(char*)` （声明） `L11`
