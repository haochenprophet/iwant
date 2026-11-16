# src/cstdlib

> 统计: 76 文件 / 2148 行 / 37 类 / 181 方法 / 186 自由函数 / 4 成员变量 / 0 全局变量 / 76 宏 / 0 typedef / 0 枚举

## cstdlib/_Exit.cpp (36 行)

### 宏 #define (1)
- `_EXIT_TEST` = 0  `L25`

### 函数 (5)
- `C_Exit::my_init()` — 定义  `L2`
- `C_Exit::C_Exit()` — 定义  `L9`
- `C_Exit::C_Exit()` — 定义  `L14`
- `C_Exit::_Exit_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int C_Exit::my_init(void *p)`、`C_Exit::C_Exit()`、`C_Exit::~C_Exit()`、`void C_Exit::_Exit_c(int status)`、`int main(int argc, char *argv[])`

## cstdlib/_Exit.h (21 行)

### 宏 #define (1)
- `_EXIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n__Exit::C_Exit  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `C_Exit()` （声明） `L9`
  - `~C_Exit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void _Exit_c(int status)` （声明） `L14`

## cstdlib/abort.cpp (36 行)

### 宏 #define (1)
- `ABORT_TEST` = 0  `L25`

### 函数 (5)
- `Cabort::my_init()` — 定义  `L2`
- `Cabort::Cabort()` — 定义  `L9`
- `Cabort::Cabort()` — 定义  `L14`
- `Cabort::abort_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cabort::my_init(void *p)`、`Cabort::Cabort()`、`Cabort::~Cabort()`、`void Cabort::abort_c(void)`、`int main(int argc, char *argv[])`

## cstdlib/abort.h (22 行)

### 宏 #define (1)
- `ABORT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_abort::Cabort  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cabort()` （声明） `L9`
  - `~Cabort()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void abort_c(void)` （声明） `L14`

## cstdlib/at_quick_exit.cpp (36 行)

### 宏 #define (1)
- `AT_QUICK_EXIT_TEST` = 0  `L25`

### 函数 (5)
- `Cat_quick_exit::my_init()` — 定义  `L2`
- `Cat_quick_exit::Cat_quick_exit()` — 定义  `L9`
- `Cat_quick_exit::Cat_quick_exit()` — 定义  `L14`
- `Cat_quick_exit::void()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cat_quick_exit::my_init(void *p)`、`Cat_quick_exit::Cat_quick_exit()`、`Cat_quick_exit::~Cat_quick_exit()`、`int Cat_quick_exit::at_quick_exit_c(void (*func)(void))`、`int main(int argc, char *argv[])`

## cstdlib/at_quick_exit.h (21 行)

### 宏 #define (1)
- `AT_QUICK_EXIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_at_quick_exit::Cat_quick_exit  `L7`  `class`
- 继承: `Object`
- 成员变量 (1): `int at_quick_exit_c(void func`
- 方法 (4):
  - `Cat_quick_exit()` （声明） `L9`
  - `~Cat_quick_exit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdlib/atexit.cpp (36 行)

### 宏 #define (1)
- `ATEXIT_TEST` = 0  `L25`

### 函数 (5)
- `Catexit::my_init()` — 定义  `L2`
- `Catexit::Catexit()` — 定义  `L9`
- `Catexit::Catexit()` — 定义  `L14`
- `Catexit::void()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catexit::my_init(void *p)`、`Catexit::Catexit()`、`Catexit::~Catexit()`、`int Catexit::atexit_c(void (*func)(void))`、`int main(int argc, char *argv[])`

## cstdlib/atexit.h (21 行)

### 宏 #define (1)
- `ATEXIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atexit::Catexit  `L7`  `class`
- 继承: `Object`
- 成员变量 (1): `int atexit_c(void func`
- 方法 (4):
  - `Catexit()` （声明） `L9`
  - `~Catexit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdlib/atof.cpp (36 行)

### 宏 #define (1)
- `ATOF_TEST` = 0  `L25`

### 函数 (5)
- `Catof::my_init()` — 定义  `L2`
- `Catof::Catof()` — 定义  `L9`
- `Catof::Catof()` — 定义  `L14`
- `Catof::atof_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catof::my_init(void *p)`、`Catof::Catof()`、`Catof::~Catof()`、`double Catof::atof_c(const char* str)`、`int main(int argc, char *argv[])`

## cstdlib/atof.h (21 行)

### 宏 #define (1)
- `ATOF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atof::Catof  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catof()` （声明） `L9`
  - `~Catof()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double atof_c(const char* str)` （声明） `L14`

## cstdlib/atoi.cpp (36 行)

### 宏 #define (1)
- `ATOI_TEST` = 0  `L25`

### 函数 (5)
- `Catoi::my_init()` — 定义  `L2`
- `Catoi::Catoi()` — 定义  `L9`
- `Catoi::Catoi()` — 定义  `L14`
- `Catoi::atoi_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catoi::my_init(void *p)`、`Catoi::Catoi()`、`Catoi::~Catoi()`、`int Catoi::atoi_c(const char* str)`、`int main(int argc, char *argv[])`

## cstdlib/atoi.h (22 行)

### 宏 #define (1)
- `ATOI_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atoi::Catoi  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catoi()` （声明） `L9`
  - `~Catoi()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int atoi_c(const char* str)` （声明） `L14`

## cstdlib/atol.cpp (36 行)

### 宏 #define (1)
- `ATOL_TEST` = 0  `L25`

### 函数 (5)
- `Catol::my_init()` — 定义  `L2`
- `Catol::Catol()` — 定义  `L9`
- `Catol::Catol()` — 定义  `L14`
- `Catol::atol_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catol::my_init(void *p)`、`Catol::Catol()`、`Catol::~Catol()`、`long int Catol::atol_c(const char* str)`、`int main(int argc, char *argv[])`

## cstdlib/atol.h (22 行)

### 宏 #define (1)
- `ATOL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atol::Catol  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catol()` （声明） `L9`
  - `~Catol()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long int atol_c(const char* str)` （声明） `L14`

## cstdlib/atoll.cpp (36 行)

### 宏 #define (1)
- `ATOLL_TEST` = 0  `L25`

### 函数 (5)
- `Catoll::my_init()` — 定义  `L2`
- `Catoll::Catoll()` — 定义  `L9`
- `Catoll::Catoll()` — 定义  `L14`
- `Catoll::atoll_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catoll::my_init(void *p)`、`Catoll::Catoll()`、`Catoll::~Catoll()`、`long long int Catoll::atoll_c(const char* str)`、`int main(int argc, char *argv[])`

## cstdlib/atoll.h (22 行)

### 宏 #define (1)
- `ATOLL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atoll::Catoll  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catoll()` （声明） `L9`
  - `~Catoll()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `long long int atoll_c(const char* str)` （声明） `L14`

## cstdlib/bsearch.cpp (36 行)

### 宏 #define (1)
- `BSEARCH_TEST` = 0  `L25`

### 函数 (5)
- `Cbsearch::my_init()` — 定义  `L2`
- `Cbsearch::Cbsearch()` — 定义  `L9`
- `Cbsearch::Cbsearch()` — 定义  `L14`
- `Cbsearch::int()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cbsearch::my_init(void *p)`、`Cbsearch::Cbsearch()`、`Cbsearch::~Cbsearch()`、`void* Cbsearch::bsearch_c(const void* key, const void* base…`、`int main(int argc, char *argv[])`

## cstdlib/bsearch.h (22 行)

### 宏 #define (1)
- `BSEARCH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_bsearch::Cbsearch  `L7`  `class`
- 继承: `Object`
- 成员变量 (1): `void* bsearch_c(const void* key, const void* base, size_t num, size_t size, int compar`
- 方法 (4):
  - `Cbsearch()` （声明） `L9`
  - `~Cbsearch()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdlib/calloc.cpp (36 行)

### 宏 #define (1)
- `CALLOC_TEST` = 0  `L25`

### 函数 (5)
- `Ccalloc::my_init()` — 定义  `L2`
- `Ccalloc::Ccalloc()` — 定义  `L9`
- `Ccalloc::Ccalloc()` — 定义  `L14`
- `Ccalloc::calloc_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Ccalloc::my_init(void *p)`、`Ccalloc::Ccalloc()`、`Ccalloc::~Ccalloc()`、`void* Ccalloc::calloc_c(size_t num, size_t size)`、`int main(int argc, char *argv[])`

## cstdlib/calloc.h (22 行)

### 宏 #define (1)
- `CALLOC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_calloc::Ccalloc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccalloc()` （声明） `L9`
  - `~Ccalloc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void* calloc_c(size_t num, size_t size)` （声明） `L14`

## cstdlib/cstdlib.cpp (37 行)

### 宏 #define (1)
- `CSTDLIB_TEST` = 0  `L26`

### 函数 (5)
- `Ccstdlib::my_init()` — 定义  `L4`
- `Ccstdlib::Ccstdlib()` — 定义  `L11`
- `Ccstdlib::Ccstdlib()` — 定义  `L16`
- `Ccstdlib::add_global_objects()` — 定义  `L21`
- `main()` — 定义  `L31`

> 完整签名见 JSON: `int Ccstdlib::my_init(void *p)`、`Ccstdlib::Ccstdlib()`、`Ccstdlib::~Ccstdlib()`、`void Ccstdlib::add_global_objects(Object* p)`、`int main(int argc, char *argv[])`

## cstdlib/cstdlib.h (22 行)

### 宏 #define (1)
- `CSTDLIB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cstdlib::Ccstdlib  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccstdlib()` （声明） `L9`
  - `~Ccstdlib()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `void add_global_objects(Object* p)` （声明） `L14`

## cstdlib/cstdlib_all_h_include.h (42 行)

### 宏 #define (1)
- `CSTDLIB_ALL_H_INCLUDE`（无值，通常为头文件守卫）  `L2`

## cstdlib/cstdlib_g_code.h (6 行)

### 宏 #define (1)
- `CSTDLIB_G_CODE_H`（无值，通常为头文件守卫）  `L2`

### 函数 (1)
- `cstdlib_add_objects()` — 声明  `L4`

> 完整签名见 JSON: `void cstdlib_add_objects(Object *p)`

## cstdlib/div_c.cpp (37 行)

### 宏 #define (1)
- `DIV_C_TEST` = 0  `L25`

### 函数 (5)
- `Cdiv_c::my_init()` — 定义  `L2`
- `Cdiv_c::Cdiv_c()` — 定义  `L9`
- `Cdiv_c::Cdiv_c()` — 定义  `L14`
- `Cdiv_c::div_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cdiv_c::my_init(void *p)`、`Cdiv_c::Cdiv_c()`、`Cdiv_c::~Cdiv_c()`、`div_t Cdiv_c::div_c(int numer, int denom)`、`int main(int argc, char *argv[])`

## cstdlib/div_c.h (21 行)

### 宏 #define (1)
- `DIV_C_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_div_c::Cdiv_c  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cdiv_c()` （声明） `L9`
  - `~Cdiv_c()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static div_t div_c(int numer, int denom)` （声明） `L14`

## cstdlib/free.cpp (34 行)

### 宏 #define (1)
- `FREE_TEST` = 0  `L23`

### 函数 (5)
- `Cfree::my_init()` — 定义  `L2`
- `Cfree::Cfree()` — 定义  `L9`
- `Cfree::Cfree()` — 定义  `L14`
- `Cfree::free_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cfree::my_init(void *p)`、`Cfree::Cfree()`、`Cfree::~Cfree()`、`void Cfree::free_c(void* ptr)`、`int main(int argc, char *argv[])`

## cstdlib/free.h (21 行)

### 宏 #define (1)
- `FREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_free::Cfree  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfree()` （声明） `L9`
  - `~Cfree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void free_c(void* ptr)` （声明） `L14`

## cstdlib/getenv.cpp (36 行)

### 宏 #define (1)
- `GETENV_TEST` = 0  `L25`

### 函数 (5)
- `Cgetenv::my_init()` — 定义  `L2`
- `Cgetenv::Cgetenv()` — 定义  `L9`
- `Cgetenv::Cgetenv()` — 定义  `L14`
- `Cgetenv::getenv_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cgetenv::my_init(void *p)`、`Cgetenv::Cgetenv()`、`Cgetenv::~Cgetenv()`、`char* Cgetenv::getenv_c(const char* name)`、`int main(int argc, char *argv[])`

## cstdlib/getenv.h (22 行)

### 宏 #define (1)
- `GETENV_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_getenv::Cgetenv  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cgetenv()` （声明） `L9`
  - `~Cgetenv()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* getenv_c(const char* name)` （声明） `L14`

## cstdlib/labs.cpp (35 行)

### 宏 #define (1)
- `LABS_TEST` = 0  `L24`

### 函数 (5)
- `Clabs::my_init()` — 定义  `L2`
- `Clabs::Clabs()` — 定义  `L9`
- `Clabs::Clabs()` — 定义  `L14`
- `Clabs::labs_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Clabs::my_init(void *p)`、`Clabs::Clabs()`、`Clabs::~Clabs()`、`long int Clabs::labs_c(long int n)`、`int main(int argc, char *argv[])`

## cstdlib/labs.h (22 行)

### 宏 #define (1)
- `LABS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_labs::Clabs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Clabs()` （声明） `L9`
  - `~Clabs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long int labs_c(long int n)` （声明） `L14`

## cstdlib/ldiv.cpp (35 行)

### 宏 #define (1)
- `LDIV_TEST` = 0  `L24`

### 函数 (5)
- `Cldiv::my_init()` — 定义  `L2`
- `Cldiv::Cldiv()` — 定义  `L9`
- `Cldiv::Cldiv()` — 定义  `L14`
- `Cldiv::ldiv_c()` — 定义  `L18`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cldiv::my_init(void *p)`、`Cldiv::Cldiv()`、`Cldiv::~Cldiv()`、`ldiv_t Cldiv::ldiv_c(long int numer, long int denom)`、`int main(int argc, char *argv[])`

## cstdlib/ldiv.h (22 行)

### 宏 #define (1)
- `LDIV_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ldiv::Cldiv  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cldiv()` （声明） `L9`
  - `~Cldiv()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static ldiv_t ldiv_c(long int numer, long int denom)` （声明） `L14`

## cstdlib/llabs.cpp (34 行)

### 宏 #define (1)
- `LLABS_TEST` = 0  `L23`

### 函数 (5)
- `Cllabs::my_init()` — 定义  `L2`
- `Cllabs::Cllabs()` — 定义  `L9`
- `Cllabs::Cllabs()` — 定义  `L14`
- `Cllabs::llabs_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cllabs::my_init(void *p)`、`Cllabs::Cllabs()`、`Cllabs::~Cllabs()`、`long long int Cllabs::llabs_c(long long int n)`、`int main(int argc, char *argv[])`

## cstdlib/llabs.h (22 行)

### 宏 #define (1)
- `LLABS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_llabs::Cllabs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cllabs()` （声明） `L9`
  - `~Cllabs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long long int llabs_c(long long int n)` （声明） `L14`

## cstdlib/lldiv.cpp (36 行)

### 宏 #define (1)
- `LLDIV_TEST` = 0  `L25`

### 函数 (5)
- `Clldiv::my_init()` — 定义  `L2`
- `Clldiv::Clldiv()` — 定义  `L9`
- `Clldiv::Clldiv()` — 定义  `L14`
- `Clldiv::lldiv_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Clldiv::my_init(void *p)`、`Clldiv::Clldiv()`、`Clldiv::~Clldiv()`、`lldiv_t Clldiv::lldiv_c(long long int numer, long long int …`、`int main(int argc, char *argv[])`

## cstdlib/lldiv.h (22 行)

### 宏 #define (1)
- `LLDIV_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_lldiv::Clldiv  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Clldiv()` （声明） `L9`
  - `~Clldiv()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static lldiv_t lldiv_c(long long int numer, long long int denom)` （声明） `L14`

## cstdlib/malloc.cpp (34 行)

### 宏 #define (1)
- `MALLOC_TEST` = 0  `L23`

### 函数 (5)
- `Cmalloc::my_init()` — 定义  `L2`
- `Cmalloc::Cmalloc()` — 定义  `L9`
- `Cmalloc::Cmalloc()` — 定义  `L14`
- `Cmalloc::malloc_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cmalloc::my_init(void *p)`、`Cmalloc::Cmalloc()`、`Cmalloc::~Cmalloc()`、`void* Cmalloc::malloc_c(size_t size)`、`int main(int argc, char *argv[])`

## cstdlib/malloc.h (22 行)

### 宏 #define (1)
- `MALLOC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_malloc::Cmalloc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmalloc()` （声明） `L9`
  - `~Cmalloc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void* malloc_c(size_t size)` （声明） `L14`

## cstdlib/mblen.cpp (34 行)

### 宏 #define (1)
- `MBLEN_TEST` = 0  `L23`

### 函数 (5)
- `Cmblen::my_init()` — 定义  `L2`
- `Cmblen::Cmblen()` — 定义  `L9`
- `Cmblen::Cmblen()` — 定义  `L14`
- `Cmblen::mblen_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cmblen::my_init(void *p)`、`Cmblen::Cmblen()`、`Cmblen::~Cmblen()`、`int Cmblen::mblen_c(const char* pmb, size_t max)`、`int main(int argc, char *argv[])`

## cstdlib/mblen.h (22 行)

### 宏 #define (1)
- `MBLEN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_mblen::Cmblen  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmblen()` （声明） `L9`
  - `~Cmblen()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int mblen_c(const char* pmb, size_t max)` （声明） `L14`

## cstdlib/mbstowcs.cpp (34 行)

### 宏 #define (1)
- `MBSTOWCS_TEST` = 0  `L23`

### 函数 (5)
- `Cmbstowcs::my_init()` — 定义  `L2`
- `Cmbstowcs::Cmbstowcs()` — 定义  `L9`
- `Cmbstowcs::Cmbstowcs()` — 定义  `L14`
- `mbstowcs_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cmbstowcs::my_init(void *p)`、`Cmbstowcs::Cmbstowcs()`、`Cmbstowcs::~Cmbstowcs()`、`size_t Cmbstowcs:: mbstowcs_c(wchar_t* dest, const char* sr…`、`int main(int argc, char *argv[])`

## cstdlib/mbstowcs.h (22 行)

### 宏 #define (1)
- `MBSTOWCS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_mbstowcs::Cmbstowcs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmbstowcs()` （声明） `L9`
  - `~Cmbstowcs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static size_t mbstowcs_c(wchar_t* dest, const char* src, size_t max)` （声明） `L14`

## cstdlib/mbtowc.cpp (34 行)

### 宏 #define (1)
- `MBTOWC_TEST` = 0  `L23`

### 函数 (5)
- `Cmbtowc::my_init()` — 定义  `L2`
- `Cmbtowc::Cmbtowc()` — 定义  `L9`
- `Cmbtowc::Cmbtowc()` — 定义  `L14`
- `Cmbtowc::mbtowc_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cmbtowc::my_init(void *p)`、`Cmbtowc::Cmbtowc()`、`Cmbtowc::~Cmbtowc()`、`int Cmbtowc::mbtowc_c(wchar_t* pwc, const char* pmb, size_t…`、`int main(int argc, char *argv[])`

## cstdlib/mbtowc.h (22 行)

### 宏 #define (1)
- `MBTOWC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_mbtowc::Cmbtowc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmbtowc()` （声明） `L9`
  - `~Cmbtowc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int mbtowc_c(wchar_t* pwc, const char* pmb, size_t max)` （声明） `L14`

## cstdlib/qsort.cpp (35 行)

### 宏 #define (1)
- `QSORT_TEST` = 0  `L24`

### 函数 (5)
- `Cqsort::my_init()` — 定义  `L2`
- `Cqsort::Cqsort()` — 定义  `L9`
- `Cqsort::Cqsort()` — 定义  `L14`
- `Cqsort::int()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cqsort::my_init(void *p)`、`Cqsort::Cqsort()`、`Cqsort::~Cqsort()`、`void Cqsort::qsort_c(void* base, size_t num, size_t size, i…`、`int main(int argc, char *argv[])`

## cstdlib/qsort.h (22 行)

### 宏 #define (1)
- `QSORT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_qsort::Cqsort  `L7`  `class`
- 继承: `Object`
- 成员变量 (1): `void qsort_c(void* base, size_t num, size_t size, int compar`
- 方法 (4):
  - `Cqsort()` （声明） `L9`
  - `~Cqsort()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdlib/quick_exit.cpp (35 行)

### 宏 #define (1)
- `QUICK_EXIT_TEST` = 0  `L24`

### 函数 (5)
- `Cquick_exit::my_init()` — 定义  `L2`
- `Cquick_exit::Cquick_exit()` — 定义  `L9`
- `Cquick_exit::Cquick_exit()` — 定义  `L14`
- `Cquick_exit::quick_exit_c()` — 定义  `L18`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cquick_exit::my_init(void *p)`、`Cquick_exit::Cquick_exit()`、`Cquick_exit::~Cquick_exit()`、`void Cquick_exit::quick_exit_c(int status)`、`int main(int argc, char *argv[])`

## cstdlib/quick_exit.h (22 行)

### 宏 #define (1)
- `QUICK_EXIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_quick_exit::Cquick_exit  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cquick_exit()` （声明） `L9`
  - `~Cquick_exit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void quick_exit_c(int status)` （声明） `L14`

## cstdlib/rand.cpp (34 行)

### 宏 #define (1)
- `RAND_TEST` = 0  `L23`

### 函数 (5)
- `Crand::my_init()` — 定义  `L2`
- `Crand::Crand()` — 定义  `L9`
- `Crand::Crand()` — 定义  `L14`
- `rand_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Crand::my_init(void *p)`、`Crand::Crand()`、`Crand::~Crand()`、`int Crand:: rand_c(void)`、`int main(int argc, char *argv[])`

## cstdlib/rand.h (21 行)

### 宏 #define (1)
- `RAND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_rand::Crand  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Crand()` （声明） `L9`
  - `~Crand()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int rand_c(void)` （声明） `L14`

## cstdlib/realloc.cpp (34 行)

### 宏 #define (1)
- `REALLOC_TEST` = 0  `L23`

### 函数 (5)
- `Crealloc::my_init()` — 定义  `L2`
- `Crealloc::Crealloc()` — 定义  `L9`
- `Crealloc::Crealloc()` — 定义  `L14`
- `Crealloc::realloc_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Crealloc::my_init(void *p)`、`Crealloc::Crealloc()`、`Crealloc::~Crealloc()`、`void* Crealloc::realloc_c(void* ptr, size_t size)`、`int main(int argc, char *argv[])`

## cstdlib/realloc.h (21 行)

### 宏 #define (1)
- `REALLOC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_realloc::Crealloc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Crealloc()` （声明） `L9`
  - `~Crealloc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void* realloc_c(void* ptr, size_t size)` （声明） `L14`

## cstdlib/srand.cpp (35 行)

### 宏 #define (1)
- `SRAND_TEST` = 0  `L24`

### 函数 (5)
- `Csrand::my_init()` — 定义  `L2`
- `Csrand::Csrand()` — 定义  `L9`
- `Csrand::Csrand()` — 定义  `L14`
- `Csrand::srand_c()` — 定义  `L18`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Csrand::my_init(void *p)`、`Csrand::Csrand()`、`Csrand::~Csrand()`、`void Csrand::srand_c(unsigned int seed)`、`int main(int argc, char *argv[])`

## cstdlib/srand.h (22 行)

### 宏 #define (1)
- `SRAND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_srand::Csrand  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csrand()` （声明） `L9`
  - `~Csrand()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void srand_c(unsigned int seed)` （声明） `L14`

## cstdlib/strtod.cpp (35 行)

### 宏 #define (1)
- `STRTOD_TEST` = 0  `L24`

### 函数 (5)
- `Cstrtod::my_init()` — 定义  `L2`
- `Cstrtod::Cstrtod()` — 定义  `L9`
- `Cstrtod::Cstrtod()` — 定义  `L14`
- `Cstrtod::strtod_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cstrtod::my_init(void *p)`、`Cstrtod::Cstrtod()`、`Cstrtod::~Cstrtod()`、`double Cstrtod::strtod_c(const char* str, char** endptr)`、`int main(int argc, char *argv[])`

## cstdlib/strtod.h (22 行)

### 宏 #define (1)
- `STRTOD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtod::Cstrtod  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtod()` （声明） `L9`
  - `~Cstrtod()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double strtod_c(const char* str, char** endptr)` （声明） `L14`

## cstdlib/strtof.cpp (34 行)

### 宏 #define (1)
- `STRTOF_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtof::my_init()` — 定义  `L2`
- `Cstrtof::Cstrtof()` — 定义  `L9`
- `Cstrtof::Cstrtof()` — 定义  `L14`
- `Cstrtof::strtof_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtof::my_init(void *p)`、`Cstrtof::Cstrtof()`、`Cstrtof::~Cstrtof()`、`float Cstrtof::strtof_c(const char* str, char** endptr)`、`int main(int argc, char *argv[])`

## cstdlib/strtof.h (21 行)

### 宏 #define (1)
- `STRTOF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtof::Cstrtof  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtof()` （声明） `L9`
  - `~Cstrtof()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static float strtof_c(const char* str, char** endptr)` （声明） `L14`

## cstdlib/strtol.cpp (34 行)

### 宏 #define (1)
- `STRTOL_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtol::my_init()` — 定义  `L2`
- `Cstrtol::Cstrtol()` — 定义  `L9`
- `Cstrtol::Cstrtol()` — 定义  `L14`
- `Cstrtol::strtol_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtol::my_init(void *p)`、`Cstrtol::Cstrtol()`、`Cstrtol::~Cstrtol()`、`long int Cstrtol::strtol_c(const char* str, char** endptr, …`、`int main(int argc, char *argv[])`

## cstdlib/strtol.h (22 行)

### 宏 #define (1)
- `STRTOL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtol::Cstrtol  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtol()` （声明） `L9`
  - `~Cstrtol()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long int strtol_c(const char* str, char** endptr, int base)` （声明） `L14`

## cstdlib/strtold.cpp (34 行)

### 宏 #define (1)
- `STRTOLD_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtold::my_init()` — 定义  `L2`
- `Cstrtold::Cstrtold()` — 定义  `L9`
- `Cstrtold::Cstrtold()` — 定义  `L14`
- `Cstrtold::strtold_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtold::my_init(void *p)`、`Cstrtold::Cstrtold()`、`Cstrtold::~Cstrtold()`、`long double Cstrtold::strtold_c(const char* str, char** end…`、`int main(int argc, char *argv[])`

## cstdlib/strtold.h (22 行)

### 宏 #define (1)
- `STRTOLD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtold::Cstrtold  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtold()` （声明） `L9`
  - `~Cstrtold()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long double strtold_c(const char* str, char** endptr)` （声明） `L14`

## cstdlib/strtoll.cpp (34 行)

### 宏 #define (1)
- `STRTOLL_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtoll::my_init()` — 定义  `L2`
- `Cstrtoll::Cstrtoll()` — 定义  `L9`
- `Cstrtoll::Cstrtoll()` — 定义  `L14`
- `Cstrtoll::strtoll_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtoll::my_init(void *p)`、`Cstrtoll::Cstrtoll()`、`Cstrtoll::~Cstrtoll()`、`long long int Cstrtoll::strtoll_c(const char* str, char** e…`、`int main(int argc, char *argv[])`

## cstdlib/strtoll.h (22 行)

### 宏 #define (1)
- `STRTOLL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtoll::Cstrtoll  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtoll()` （声明） `L9`
  - `~Cstrtoll()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long long int strtoll_c(const char* str, char** endptr, int base)` （声明） `L14`

## cstdlib/strtoul.cpp (34 行)

### 宏 #define (1)
- `STRTOUL_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtoul::my_init()` — 定义  `L2`
- `Cstrtoul::Cstrtoul()` — 定义  `L9`
- `Cstrtoul::Cstrtoul()` — 定义  `L14`
- `Cstrtoul::strtoul_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtoul::my_init(void *p)`、`Cstrtoul::Cstrtoul()`、`Cstrtoul::~Cstrtoul()`、`unsigned long int Cstrtoul::strtoul_c(const char* str, char…`、`int main(int argc, char *argv[])`

## cstdlib/strtoul.h (22 行)

### 宏 #define (1)
- `STRTOUL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtoul::Cstrtoul  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtoul()` （声明） `L9`
  - `~Cstrtoul()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static unsigned long int strtoul_c(const char* str, char** endptr, int base)` （声明） `L14`

## cstdlib/strtoull.cpp (34 行)

### 宏 #define (1)
- `STRTOULL_TEST` = 0  `L23`

### 函数 (5)
- `Cstrtoull::my_init()` — 定义  `L2`
- `Cstrtoull::Cstrtoull()` — 定义  `L9`
- `Cstrtoull::Cstrtoull()` — 定义  `L14`
- `Cstrtoull::strtoull_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cstrtoull::my_init(void *p)`、`Cstrtoull::Cstrtoull()`、`Cstrtoull::~Cstrtoull()`、`unsigned long long int Cstrtoull::strtoull_c(const char* st…`、`int main(int argc, char *argv[])`

## cstdlib/strtoull.h (22 行)

### 宏 #define (1)
- `STRTOULL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_strtoull::Cstrtoull  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cstrtoull()` （声明） `L9`
  - `~Cstrtoull()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static unsigned long long int strtoull_c(const char* str, char** endptr, int base)` （声明） `L14`

## cstdlib/system.cpp (34 行)

### 宏 #define (1)
- `SYSTEM_TEST` = 0  `L23`

### 函数 (5)
- `Csystem::my_init()` — 定义  `L2`
- `Csystem::Csystem()` — 定义  `L9`
- `Csystem::Csystem()` — 定义  `L14`
- `Csystem::system_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Csystem::my_init(void *p)`、`Csystem::Csystem()`、`Csystem::~Csystem()`、`int Csystem::system_c(const char* command)`、`int main(int argc, char *argv[])`

## cstdlib/system.h (21 行)

### 宏 #define (1)
- `SYSTEM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_system::Csystem  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csystem()` （声明） `L9`
  - `~Csystem()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int system_c(const char* command)` （声明） `L14`

## cstdlib/wcstombs.cpp (34 行)

### 宏 #define (1)
- `WCSTOMBS_TEST` = 0  `L23`

### 函数 (5)
- `Cwcstombs::my_init()` — 定义  `L2`
- `Cwcstombs::Cwcstombs()` — 定义  `L9`
- `Cwcstombs::Cwcstombs()` — 定义  `L14`
- `Cwcstombs::wcstombs_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cwcstombs::my_init(void *p)`、`Cwcstombs::Cwcstombs()`、`Cwcstombs::~Cwcstombs()`、`size_t Cwcstombs::wcstombs_c(char* dest, const wchar_t* src…`、`int main(int argc, char *argv[])`

## cstdlib/wcstombs.h (22 行)

### 宏 #define (1)
- `WCSTOMBS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_wcstombs::Cwcstombs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cwcstombs()` （声明） `L9`
  - `~Cwcstombs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static size_t wcstombs_c(char* dest, const wchar_t* src, size_t max)` （声明） `L14`

## cstdlib/wctomb.cpp (36 行)

### 宏 #define (1)
- `WCTOMB_TEST` = 0  `L25`

### 函数 (5)
- `Cwctomb::my_init()` — 定义  `L2`
- `Cwctomb::Cwctomb()` — 定义  `L9`
- `Cwctomb::Cwctomb()` — 定义  `L14`
- `Cwctomb::wctomb_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cwctomb::my_init(void *p)`、`Cwctomb::Cwctomb()`、`Cwctomb::~Cwctomb()`、`int Cwctomb::wctomb_c(char* pmb, wchar_t wc)`、`int main(int argc, char *argv[])`

## cstdlib/wctomb.h (22 行)

### 宏 #define (1)
- `WCTOMB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_wctomb::Cwctomb  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cwctomb()` （声明） `L9`
  - `~Cwctomb()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int wctomb_c(char* pmb, wchar_t wc)` （声明） `L14`
