# src/input

> 统计: 3 文件 / 108 行 / 2 类 / 23 方法 / 3 自由函数 / 2 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 1 枚举

## input/input.cpp (24 行)

### 函数 (3)
- `Cinput::my_init()` — 定义  `L4`
- `Cinput::Cinput()` — 定义  `L11`
- `inputin()` — 定义  `L18`

> 完整签名见 JSON: `int Cinput::my_init(void *p)`、`Cinput::Cinput()`、`int inputin(int argc, char *argv[])`

## input/input.h (68 行)

### 宏 #define (1)
- `INPUT_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class InputType   `L5`
- none=0、scan、record、url、audio、vedio、file、memory、dma、xml、sql、mail、gpio、reg、antenna、sensor、eye、nose、mouth

### 类 (1)
#### n_input::Oinput  `L30`  `class`
- 成员变量 (2): `InputType type`、`void * parameter`
- 方法 (21):
  - `public: Oinput()` （定义） `L35`
  - `int set(void* p, InputType t=InputType::none)` （定义） `L38`
  - `virtual int scan(void *p=nullptr)` （定义） `L40`
  - `virtual int record(void *p=nullptr)` （定义） `L41`
  - `virtual int url(void *p=nullptr)` （定义） `L42`
  - `virtual int audio(void *p=nullptr)` （定义） `L43`
  - `virtual int vedio(void *p=nullptr)` （定义） `L44`
  - `virtual int file(void *p=nullptr)` （定义） `L45`
  - `virtual int memory(void *p=nullptr)` （定义） `L46`
  - `virtual int dma(void *p=nullptr)` （定义） `L47`
  - `virtual int xml(void *p=nullptr)` （定义） `L48`
  - `virtual int sql(void *p=nullptr)` （定义） `L49`
  - `virtual int mail(void *p=nullptr)` （定义） `L50`
  - `virtual int gpio(void *p=nullptr)` （定义） `L51`
  - `virtual int reg(void *p=nullptr)` （定义） `L52`
  - `virtual int antenna(void *p=nullptr)` （定义） `L54`
  - `virtual int sensor(void *p=nullptr)` （定义） `L55`
  - `virtual int eye(void *p=nullptr)` （定义） `L57`
  - `virtual int nose(void *p=nullptr)` （定义） `L58`
  - `virtual int ear(void *p=nullptr)` （定义） `L59`
  - `virtual int mouth(void *p=nullptr)` （定义） `L60`

## input/input_class.h (16 行)

### 宏 #define (1)
- `INPUT_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_input::Cinput  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `int my_init(void *p=nullptr)` （声明） `L9`
  - `Cinput()` （声明） `L11`
