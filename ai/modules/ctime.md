# src/ctime

> 统计: 20 文件 / 537 行 / 9 类 / 45 方法 / 46 自由函数 / 0 成员变量 / 0 全局变量 / 20 宏 / 0 typedef / 0 枚举

## ctime/asctime.cpp (36 行)

### 宏 #define (1)
- `ASCTIME_TEST` = 0  `L25`

### 函数 (5)
- `Casctime::my_init()` — 定义  `L2`
- `Casctime::Casctime()` — 定义  `L9`
- `Casctime::Casctime()` — 定义  `L14`
- `Casctime::asctime_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Casctime::my_init(void *p)`、`Casctime::Casctime()`、`Casctime::~Casctime()`、`char * Casctime::asctime_c(const struct tm* timeptr)`、`int main(int argc, char *argv[])`

## ctime/asctime.h (22 行)

### 宏 #define (1)
- `ASCTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_asctime::Casctime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Casctime()` （声明） `L9`
  - `~Casctime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* asctime_c(const struct tm* timeptr)` （声明） `L14`

## ctime/clock.cpp (36 行)

### 宏 #define (1)
- `CLOCK_TEST` = 0  `L25`

### 函数 (5)
- `Cclock::my_init()` — 定义  `L2`
- `Cclock::Cclock()` — 定义  `L9`
- `Cclock::Cclock()` — 定义  `L14`
- `Cclock::clock_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cclock::my_init(void *p)`、`Cclock::Cclock()`、`Cclock::~Cclock()`、`clock_t Cclock::clock_c(void)`、`int main(int argc, char *argv[])`

## ctime/clock.h (21 行)

### 宏 #define (1)
- `CLOCK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_clock::Cclock  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cclock()` （声明） `L9`
  - `~Cclock()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static clock_t clock_c(void)` （声明） `L14`

## ctime/ctime.cpp (36 行)

### 宏 #define (1)
- `CTIME_TEST` = 0  `L25`

### 函数 (5)
- `Cctime::my_init()` — 定义  `L2`
- `Cctime::Cctime()` — 定义  `L9`
- `Cctime::Cctime()` — 定义  `L14`
- `ctime_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cctime::my_init(void *p)`、`Cctime::Cctime()`、`Cctime::~Cctime()`、`char* Cctime:: ctime_c(const time_t* timer)`、`int main(int argc, char *argv[])`

## ctime/ctime.h (21 行)

### 宏 #define (1)
- `CTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ctime::Cctime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cctime()` （声明） `L9`
  - `~Cctime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* ctime_c(const time_t* timer)` （声明） `L14`

## ctime/ctime_all_h_include.h (15 行)

### 宏 #define (1)
- `CTIME_ALL_H_INCLUDE`（无值，通常为头文件守卫）  `L2`

## ctime/ctime_g_code.h (6 行)

### 宏 #define (1)
- `G_CODE_H`（无值，通常为头文件守卫）  `L2`

### 函数 (1)
- `ctime_add_objects()` — 声明  `L4`

> 完整签名见 JSON: `void ctime_add_objects(Object *p)`

## ctime/difftime.cpp (36 行)

### 宏 #define (1)
- `DIFFTIME_TEST` = 0  `L25`

### 函数 (5)
- `Cdifftime::my_init()` — 定义  `L2`
- `Cdifftime::Cdifftime()` — 定义  `L9`
- `Cdifftime::Cdifftime()` — 定义  `L14`
- `Cdifftime::difftime_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cdifftime::my_init(void *p)`、`Cdifftime::Cdifftime()`、`Cdifftime::~Cdifftime()`、`double Cdifftime::difftime_c(time_t end, time_t beginning)`、`int main(int argc, char *argv[])`

## ctime/difftime.h (21 行)

### 宏 #define (1)
- `DIFFTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_difftime::Cdifftime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cdifftime()` （声明） `L9`
  - `~Cdifftime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double difftime_c(time_t end, time_t beginning)` （声明） `L14`

## ctime/gmtime.cpp (36 行)

### 宏 #define (1)
- `GMTIME_TEST` = 0  `L25`

### 函数 (5)
- `Cgmtime::my_init()` — 定义  `L2`
- `Cgmtime::Cgmtime()` — 定义  `L9`
- `Cgmtime::Cgmtime()` — 定义  `L14`
- `gmtime()` — 声明  `L21`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cgmtime::my_init(void *p)`、`Cgmtime::Cgmtime()`、`Cgmtime::~Cgmtime()`、`return gmtime(timer)`、`int main(int argc, char *argv[])`

## ctime/gmtime.h (21 行)

### 宏 #define (1)
- `GMTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_gmtime::Cgmtime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cgmtime()` （声明） `L9`
  - `~Cgmtime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static struct tm* gmtime_c(const time_t* timer)` （声明） `L14`

## ctime/localtime.cpp (36 行)

### 宏 #define (1)
- `LOCALTIME_TEST` = 0  `L25`

### 函数 (5)
- `Clocaltime::my_init()` — 定义  `L2`
- `Clocaltime::Clocaltime()` — 定义  `L9`
- `Clocaltime::Clocaltime()` — 定义  `L14`
- `localtime()` — 声明  `L21`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Clocaltime::my_init(void *p)`、`Clocaltime::Clocaltime()`、`Clocaltime::~Clocaltime()`、`return localtime(timer)`、`int main(int argc, char *argv[])`

## ctime/localtime.h (22 行)

### 宏 #define (1)
- `LOCALTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_localtime::Clocaltime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Clocaltime()` （声明） `L9`
  - `~Clocaltime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static struct tm* localtime_c(const time_t* timer)` （声明） `L14`

## ctime/mktime.cpp (36 行)

### 宏 #define (1)
- `MKTIME_TEST` = 0  `L25`

### 函数 (5)
- `Cmktime::my_init()` — 定义  `L2`
- `Cmktime::Cmktime()` — 定义  `L9`
- `Cmktime::Cmktime()` — 定义  `L14`
- `mktime_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cmktime::my_init(void *p)`、`Cmktime::Cmktime()`、`Cmktime::~Cmktime()`、`time_t Cmktime:: mktime_c(struct tm* timeptr)`、`int main(int argc, char *argv[])`

## ctime/mktime.h (21 行)

### 宏 #define (1)
- `MKTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_mktime::Cmktime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmktime()` （声明） `L9`
  - `~Cmktime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static time_t mktime_c(struct tm* timeptr)` （声明） `L14`

## ctime/strftime.cpp (36 行)

### 宏 #define (1)
- `STRFTIME_TEST` = 0  `L25`

### 函数 (5)
- `Cstrftime::my_init()` — 定义  `L2`
- `Cstrftime::Cstrftime()` — 定义  `L9`
- `Cstrftime::Cstrftime()` — 定义  `L14`
- `Cstrftime::strftime_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cstrftime::my_init(void *p)`、`Cstrftime::Cstrftime()`、`Cstrftime::~Cstrftime()`、`size_t Cstrftime::strftime_c(char* ptr, size_t maxsize, con…`、`int main(int argc, char *argv[])`

## ctime/strftime.h (22 行)

### 宏 #define (1)
- `STRFTIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strftime::Cstrftime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrftime()` （声明） `L9`
  - `~Cstrftime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static size_t strftime_c(char* ptr, size_t maxsize, const char* format, const struct tm* …` （声明） `L14`

## ctime/time.cpp (36 行)

### 宏 #define (1)
- `TIME_TEST` = 0  `L25`

### 函数 (5)
- `Ctime::my_init()` — 定义  `L2`
- `Ctime::Ctime()` — 定义  `L9`
- `Ctime::Ctime()` — 定义  `L14`
- `Ctime::time_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Ctime::my_init(void *p)`、`Ctime::Ctime()`、`Ctime::~Ctime()`、`time_t Ctime::time_c(time_t* timer)`、`int main(int argc, char *argv[])`

## ctime/time.h (21 行)

### 宏 #define (1)
- `TIME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_time::Ctime  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctime()` （声明） `L9`
  - `~Ctime()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static time_t time_c(time_t* timer)` （声明） `L14`
