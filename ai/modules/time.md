# src/time

> 统计: 8 文件 / 439 行 / 5 类 / 31 方法 / 32 自由函数 / 11 成员变量 / 0 全局变量 / 8 宏 / 0 typedef / 2 枚举

## time/timeline.cpp (46 行)

### 宏 #define (1)
- `TIMELINE_TEST` = 0  `L34`

### 函数 (6)
- `Ctimeline::my_init()` — 定义  `L3`
- `Ctimeline::Ctimeline()` — 定义  `L10`
- `Ctimeline::Ctimeline()` — 定义  `L15`
- `Ctimeline::add()` — 定义  `L20`
- `Ctimeline::adjust_status()` — 定义  `L25`
- `main()` — 定义  `L39`

> 完整签名见 JSON: `int Ctimeline::my_init(void *p)`、`Ctimeline::Ctimeline()`、`Ctimeline::~Ctimeline()`、`void Ctimeline::add(TimePoint* tp)`、`void Ctimeline::adjust_status(TimePoint* tp_now)`、`int main(int argc, char *argv[])`

## time/timeline.h (28 行)

### 宏 #define (1)
- `TIMELINE_H_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_timeline::Ctimeline  `L10`  `class`
- 继承: `Object`
- 成员变量 (2): `TimePoint origin`、`std::list<TimePoint *> time_point_list`
- 方法 (6):
  - `Ctimeline()` （声明） `L15`
  - `~Ctimeline()` （声明） `L17`
  - `int my_init(void *p=nullptr)` （声明） `L18`
  - `size_t my_size()` （定义） `L19`
  - `void add(TimePoint *tp)` （声明） `L20`
  - `void adjust_status(TimePoint *tp_now)` （声明） `L21`

## time/timepoint.cpp (105 行)

### 宏 #define (1)
- `TIMEPOINT_TEST` = 0  `L93`

### 函数 (10)
- `TimePoint::TimePoint()` — 定义  `L3`
- `TimePoint::TimePoint()` — 定义  `L13`
- `TimePoint::add()` — 定义  `L18`
- `TimePoint::now()` — 定义  `L24`
- `TimePoint::adjust_status()` — 定义  `L33`
- `TimePoint::adjust_status()` — 定义  `L70`
- `Ctimepoint::my_init()` — 定义  `L75`
- `Ctimepoint::Ctimepoint()` — 定义  `L82`
- `Ctimepoint::Ctimepoint()` — 定义  `L87`
- `main()` — 定义  `L98`

> 完整签名见 JSON。

## time/timepoint.h (95 行)

### 宏 #define (1)
- `TIMEPOINT_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class Etime_scale   `L9`
- 共 41 个枚举常量（详情见 JSON）

### 枚举 enum class Etime_orientation   `L55`
- zero=0、start、past、origin、now、future

### 类 (2)
#### n_timepoint::TimePoint  `L65`  `class`
- 成员变量 (7): `time_t timer`、`clock_t clock_start`、`clock_t clock_end`、`clock_t clock_now`、`Etime_orientation status`、`Etime_scale time_scale`、`std::list<void*> object_list`
- 方法 (6):
  - `TimePoint()` （声明） `L73`
  - `~TimePoint()` （声明） `L75`
  - `void add(void* object)` （声明） `L76`
  - `void now()` （声明） `L77`
  - `Etime_orientation adjust_status(time_t now_timer, clock_t now_clk)` （声明） `L78`
  - `Etime_orientation adjust_status(TimePoint * tp_now)` （声明） `L79`

#### n_timepoint::Ctimepoint  `L82`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctimepoint()` （声明） `L84`
  - `~Ctimepoint()` （声明） `L86`
  - `int my_init(void *p=nullptr)` （声明） `L87`
  - `size_t my_size()` （定义） `L88`

## time/timer.cpp (83 行)

### 宏 #define (1)
- `TIMER_TEST` = 0  `L63`

### 函数 (12)
- `Ctimer::Ctimer()` — 定义  `L3`
- `Ctimer::func()` — 定义  `L12`
- `Ctimer::t_clock()` — 定义  `L17`
- `Ctimer::t_difftime()` — 定义  `L22`
- `Ctimer::t_mktime()` — 定义  `L27`
- `Ctimer::t_time()` — 定义  `L32`
- `Ctimer::t_asctime()` — 定义  `L37`
- `Ctimer::t_ctime()` — 定义  `L42`
- `gmtime()` — 声明  `L49`
- `localtime()` — 声明  `L54`
- `Ctimer::t_strftime()` — 定义  `L57`
- `main()` — 定义  `L68`

> 完整签名见 JSON。

## time/timer.h (30 行)

### 宏 #define (1)
- `TIMER_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_timer::Ctimer  `L7`  `class`
- 继承: `Object`
- 成员变量 (2): `clock_t clk`、`time_t t`
- 方法 (11):
  - `Ctimer()` （声明） `L12`
  - `int func(void *p)` （声明） `L14`
  - `clock_t t_clock()` （声明） `L15`
  - `double t_difftime (time_t end, time_t beginning)` （声明） `L16`
  - `time_t t_mktime (struct tm * timeptr)` （声明） `L17`
  - `time_t t_time (time_t* timer)` （声明） `L18`
  - `char* t_asctime (const struct tm * timeptr)` （声明） `L19`
  - `char* t_ctime(const time_t * timer)` （声明） `L20`
  - `struct tm * t_gmtime (const time_t * timer)` （声明） `L21`
  - `struct tm * t_localtime (const time_t * timer)` （声明） `L22`
  - `size_t t_strftime (char* ptr, size_t maxsize, const char* format,const struct tm* timeptr…` （声明） `L23`

## time/timetree.cpp (32 行)

### 宏 #define (1)
- `TIMETREE_TEST` = 0  `L20`

### 函数 (4)
- `Ctimetree::my_init()` — 定义  `L2`
- `Ctimetree::Ctimetree()` — 定义  `L9`
- `Ctimetree::Ctimetree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctimetree::my_init(void *p)`、`Ctimetree::Ctimetree()`、`Ctimetree::~Ctimetree()`、`int main(int argc, char *argv[])`

## time/timetree.h (20 行)

### 宏 #define (1)
- `TIMETREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_timetree::Ctimetree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctimetree()` （声明） `L9`
  - `~Ctimetree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
