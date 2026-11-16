# src/cstdio

> 统计: 102 文件 / 2959 行 / 50 类 / 247 方法 / 204 自由函数 / 0 成员变量 / 0 全局变量 / 102 宏 / 0 typedef / 0 枚举

## cstdio/clearerr.cpp (35 行)

### 宏 #define (1)
- `CLEARERR_TEST` = 0  `L25`

### 函数 (4)
- `Cclearerr::my_init()` — 定义  `L2`
- `Cclearerr::Cclearerr()` — 定义  `L9`
- `Cclearerr::Cclearerr()` — 定义  `L14`
- `Cclearerr::clearerr_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cclearerr::my_init(void *p)`、`Cclearerr::Cclearerr()`、`Cclearerr::~Cclearerr()`、`void Cclearerr::clearerr_c(FILE* stream)`

## cstdio/clearerr.h (21 行)

### 宏 #define (1)
- `CLEARERR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_clearerr::Cclearerr  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cclearerr()` （声明） `L9`
  - `~Cclearerr()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void clearerr_c(FILE* stream)` （声明） `L14`

## cstdio/cstdio.cpp (38 行)

### 宏 #define (1)
- `CSTDIO_TEST` = 0  `L27`

### 函数 (5)
- `Ccstdio::my_init()` — 定义  `L4`
- `Ccstdio::Ccstdio()` — 定义  `L11`
- `Ccstdio::Ccstdio()` — 定义  `L16`
- `Ccstdio::add_global_objects()` — 定义  `L21`
- `main()` — 定义  `L32`

> 完整签名见 JSON: `int Ccstdio::my_init(void *p)`、`Ccstdio::Ccstdio()`、`Ccstdio::~Ccstdio()`、`void Ccstdio::add_global_objects(Object* p)`、`int main(int argc, char *argv[])`

## cstdio/cstdio.h (22 行)

### 宏 #define (1)
- `CSTDIO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cstdio::Ccstdio  `L8`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccstdio()` （声明） `L10`
  - `~Ccstdio()` （声明） `L12`
  - `int my_init(void *p=nullptr)` （声明） `L13`
  - `size_t my_size()` （定义） `L14`
  - `void add_global_objects(Object* p)` （声明） `L15`

## cstdio/cstdio_all_h_include.h (56 行)

### 宏 #define (1)
- `CSTDIO_ALL_H_INCLUDE`（无值，通常为头文件守卫）  `L2`

## cstdio/cstdio_g_code.h (6 行)

### 宏 #define (1)
- `CSTDIO_G_CODE_H`（无值，通常为头文件守卫）  `L2`

### 函数 (1)
- `cstdio_add_objects()` — 声明  `L4`

> 完整签名见 JSON: `void cstdio_add_objects(Object *p)`

## cstdio/fclose.cpp (35 行)

### 宏 #define (1)
- `FCLOSE_TEST` = 0  `L25`

### 函数 (4)
- `Cfclose::my_init()` — 定义  `L2`
- `Cfclose::Cfclose()` — 定义  `L9`
- `Cfclose::Cfclose()` — 定义  `L14`
- `Cfclose::fclose_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfclose::my_init(void *p)`、`Cfclose::Cfclose()`、`Cfclose::~Cfclose()`、`int Cfclose::fclose_c(FILE* stream)`

## cstdio/fclose.h (21 行)

### 宏 #define (1)
- `FCLOSE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fclose::Cfclose  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfclose()` （声明） `L9`
  - `~Cfclose()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fclose_c(FILE* stream)` （声明） `L14`

## cstdio/feof.cpp (33 行)

### 宏 #define (1)
- `FEOF_TEST` = 0  `L23`

### 函数 (4)
- `Cfeof::my_init()` — 定义  `L2`
- `Cfeof::Cfeof()` — 定义  `L9`
- `Cfeof::Cfeof()` — 定义  `L14`
- `Cfeof::feof_c()` — 定义  `L18`

> 完整签名见 JSON: `int Cfeof::my_init(void *p)`、`Cfeof::Cfeof()`、`Cfeof::~Cfeof()`、`int Cfeof::feof_c(FILE* stream)`

## cstdio/feof.h (21 行)

### 宏 #define (1)
- `FEOF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_feof::Cfeof  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfeof()` （声明） `L9`
  - `~Cfeof()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int feof_c(FILE* stream)` （声明） `L14`

## cstdio/ferror.cpp (35 行)

### 宏 #define (1)
- `FERROR_TEST` = 0  `L25`

### 函数 (4)
- `Cferror::my_init()` — 定义  `L2`
- `Cferror::Cferror()` — 定义  `L9`
- `Cferror::Cferror()` — 定义  `L14`
- `Cferror::ferror_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cferror::my_init(void *p)`、`Cferror::Cferror()`、`Cferror::~Cferror()`、`int Cferror::ferror_c(FILE* stream)`

## cstdio/ferror.h (21 行)

### 宏 #define (1)
- `FERROR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ferror::Cferror  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cferror()` （声明） `L9`
  - `~Cferror()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int ferror_c(FILE* stream)` （声明） `L14`

## cstdio/fflush.cpp (35 行)

### 宏 #define (1)
- `FFLUSH_TEST` = 0  `L25`

### 函数 (4)
- `Cfflush::my_init()` — 定义  `L2`
- `Cfflush::Cfflush()` — 定义  `L9`
- `Cfflush::Cfflush()` — 定义  `L14`
- `Cfflush::fflush_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfflush::my_init(void *p)`、`Cfflush::Cfflush()`、`Cfflush::~Cfflush()`、`int Cfflush::fflush_c(FILE* stream)`

## cstdio/fflush.h (21 行)

### 宏 #define (1)
- `FFLUSH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fflush::Cfflush  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfflush()` （声明） `L9`
  - `~Cfflush()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fflush_c(FILE* stream)` （声明） `L14`

## cstdio/fgetc.cpp (35 行)

### 宏 #define (1)
- `FGETC_TEST` = 0  `L25`

### 函数 (4)
- `Cfgetc::my_init()` — 定义  `L2`
- `Cfgetc::Cfgetc()` — 定义  `L9`
- `Cfgetc::Cfgetc()` — 定义  `L14`
- `Cfgetc::fgetc_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfgetc::my_init(void *p)`、`Cfgetc::Cfgetc()`、`Cfgetc::~Cfgetc()`、`int Cfgetc::fgetc_c(FILE* stream)`

## cstdio/fgetc.h (21 行)

### 宏 #define (1)
- `FGETC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fgetc::Cfgetc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfgetc()` （声明） `L9`
  - `~Cfgetc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fgetc_c(FILE* stream)` （声明） `L14`

## cstdio/fgetpos.cpp (35 行)

### 宏 #define (1)
- `FGETPOS_TEST` = 0  `L25`

### 函数 (4)
- `Cfgetpos::my_init()` — 定义  `L2`
- `Cfgetpos::Cfgetpos()` — 定义  `L9`
- `Cfgetpos::Cfgetpos()` — 定义  `L14`
- `Cfgetpos::fgetpos_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfgetpos::my_init(void *p)`、`Cfgetpos::Cfgetpos()`、`Cfgetpos::~Cfgetpos()`、`int Cfgetpos::fgetpos_c(FILE* stream, fpos_t* pos)`

## cstdio/fgetpos.h (21 行)

### 宏 #define (1)
- `FGETPOS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fgetpos::Cfgetpos  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfgetpos()` （声明） `L9`
  - `~Cfgetpos()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fgetpos_c(FILE* stream, fpos_t* pos)` （声明） `L14`

## cstdio/fgets.cpp (35 行)

### 宏 #define (1)
- `FGETS_TEST` = 0  `L25`

### 函数 (4)
- `Cfgets::my_init()` — 定义  `L2`
- `Cfgets::Cfgets()` — 定义  `L9`
- `Cfgets::Cfgets()` — 定义  `L14`
- `Cfgets::fgets_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfgets::my_init(void *p)`、`Cfgets::Cfgets()`、`Cfgets::~Cfgets()`、`char* Cfgets::fgets_c(char* str, int num, FILE* stream)`

## cstdio/fgets.h (21 行)

### 宏 #define (1)
- `FGETS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fgets::Cfgets  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfgets()` （声明） `L9`
  - `~Cfgets()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* fgets_c(char* str, int num, FILE* stream)` （声明） `L14`

## cstdio/fopen.cpp (35 行)

### 宏 #define (1)
- `FOPEN_TEST` = 0  `L25`

### 函数 (4)
- `Cfopen::my_init()` — 定义  `L2`
- `Cfopen::Cfopen()` — 定义  `L9`
- `Cfopen::Cfopen()` — 定义  `L14`
- `Cfopen::fopen_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfopen::my_init(void *p)`、`Cfopen::Cfopen()`、`Cfopen::~Cfopen()`、`FILE* Cfopen::fopen_c(const char* filename, const char* mod…`

## cstdio/fopen.h (22 行)

### 宏 #define (1)
- `FOPEN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fopen::Cfopen  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfopen()` （声明） `L9`
  - `~Cfopen()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static FILE* fopen_c(const char* filename, const char* mode)` （声明） `L14`

## cstdio/fprintf.cpp (44 行)

### 宏 #define (1)
- `FPRINTF_TEST` = 0  `L34`

### 函数 (4)
- `Cfprintf::my_init()` — 定义  `L4`
- `Cfprintf::Cfprintf()` — 定义  `L11`
- `Cfprintf::Cfprintf()` — 定义  `L16`
- `Cfprintf::fprintf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Cfprintf::my_init(void *p)`、`Cfprintf::Cfprintf()`、`Cfprintf::~Cfprintf()`、`int Cfprintf::fprintf_c(FILE* stream, const char* format, .…`

## cstdio/fprintf.h (22 行)

### 宏 #define (1)
- `FPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fprintf::Cfprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfprintf()` （声明） `L9`
  - `~Cfprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fprintf_c(FILE* stream, const char* format, ...)` （声明） `L14`

## cstdio/fputc.cpp (35 行)

### 宏 #define (1)
- `FPUTC_TEST` = 0  `L25`

### 函数 (4)
- `Cfputc::my_init()` — 定义  `L2`
- `Cfputc::Cfputc()` — 定义  `L9`
- `Cfputc::Cfputc()` — 定义  `L14`
- `Cfputc::fputc_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfputc::my_init(void *p)`、`Cfputc::Cfputc()`、`Cfputc::~Cfputc()`、`int Cfputc::fputc_c(int character, FILE* stream)`

## cstdio/fputc.h (22 行)

### 宏 #define (1)
- `FPUTC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fputc::Cfputc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfputc()` （声明） `L9`
  - `~Cfputc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fputc_c(int character, FILE* stream)` （声明） `L14`

## cstdio/fputs.cpp (35 行)

### 宏 #define (1)
- `FPUTS_TEST` = 0  `L25`

### 函数 (4)
- `Cfputs::my_init()` — 定义  `L2`
- `Cfputs::Cfputs()` — 定义  `L9`
- `Cfputs::Cfputs()` — 定义  `L14`
- `Cfputs::fputs_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfputs::my_init(void *p)`、`Cfputs::Cfputs()`、`Cfputs::~Cfputs()`、`int Cfputs::fputs_c(const char* str, FILE* stream)`

## cstdio/fputs.h (22 行)

### 宏 #define (1)
- `FPUTS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fputs::Cfputs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfputs()` （声明） `L9`
  - `~Cfputs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fputs_c(const char* str, FILE* stream)` （声明） `L14`

## cstdio/fread.cpp (35 行)

### 宏 #define (1)
- `FREAD_TEST` = 0  `L25`

### 函数 (4)
- `Cfread::my_init()` — 定义  `L2`
- `Cfread::Cfread()` — 定义  `L9`
- `Cfread::Cfread()` — 定义  `L14`
- `Cfread::fread_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfread::my_init(void *p)`、`Cfread::Cfread()`、`Cfread::~Cfread()`、`size_t Cfread::fread_c(void* ptr, size_t size, size_t count…`

## cstdio/fread.h (22 行)

### 宏 #define (1)
- `FREAD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fread::Cfread  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfread()` （声明） `L9`
  - `~Cfread()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static size_t fread_c(void* ptr, size_t size, size_t count, FILE* stream)` （声明） `L14`

## cstdio/freopen.cpp (35 行)

### 宏 #define (1)
- `FREOPEN_TEST` = 0  `L25`

### 函数 (4)
- `Cfreopen::my_init()` — 定义  `L2`
- `Cfreopen::Cfreopen()` — 定义  `L9`
- `Cfreopen::Cfreopen()` — 定义  `L14`
- `Cfreopen::freopen_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfreopen::my_init(void *p)`、`Cfreopen::Cfreopen()`、`Cfreopen::~Cfreopen()`、`FILE* Cfreopen::freopen_c(const char* filename, const char*…`

## cstdio/freopen.h (21 行)

### 宏 #define (1)
- `FREOPEN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_freopen::Cfreopen  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfreopen()` （声明） `L9`
  - `~Cfreopen()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static FILE* freopen_c(const char* filename, const char* mode, FILE* stream)` （声明） `L14`

## cstdio/fscanf.cpp (44 行)

### 宏 #define (1)
- `FSCANF_TEST` = 0  `L34`

### 函数 (4)
- `Cfscanf::my_init()` — 定义  `L4`
- `Cfscanf::Cfscanf()` — 定义  `L11`
- `Cfscanf::Cfscanf()` — 定义  `L16`
- `Cfscanf::fscanf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Cfscanf::my_init(void *p)`、`Cfscanf::Cfscanf()`、`Cfscanf::~Cfscanf()`、`int Cfscanf::fscanf_c(FILE* stream, const char* format, ...)`

## cstdio/fscanf.h (22 行)

### 宏 #define (1)
- `FSCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fscanf::Cfscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfscanf()` （声明） `L9`
  - `~Cfscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fscanf_c(FILE* stream, const char* format, ...)` （声明） `L14`

## cstdio/fseek.cpp (35 行)

### 宏 #define (1)
- `FSEEK_TEST` = 0  `L25`

### 函数 (4)
- `Cfseek::my_init()` — 定义  `L2`
- `Cfseek::Cfseek()` — 定义  `L9`
- `Cfseek::Cfseek()` — 定义  `L14`
- `Cfseek::fseek_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfseek::my_init(void *p)`、`Cfseek::Cfseek()`、`Cfseek::~Cfseek()`、`int Cfseek::fseek_c(FILE* stream, long int offset, int orig…`

## cstdio/fseek.h (22 行)

### 宏 #define (1)
- `FSEEK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fseek::Cfseek  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfseek()` （声明） `L9`
  - `~Cfseek()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fseek_c(FILE* stream, long int offset, int origin)` （声明） `L14`

## cstdio/fsetpos.cpp (35 行)

### 宏 #define (1)
- `FSETPOS_TEST` = 0  `L25`

### 函数 (4)
- `Cfsetpos::my_init()` — 定义  `L2`
- `Cfsetpos::Cfsetpos()` — 定义  `L9`
- `Cfsetpos::Cfsetpos()` — 定义  `L14`
- `Cfsetpos::fsetpos_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfsetpos::my_init(void *p)`、`Cfsetpos::Cfsetpos()`、`Cfsetpos::~Cfsetpos()`、`int Cfsetpos::fsetpos_c(FILE* stream, const fpos_t* pos)`

## cstdio/fsetpos.h (22 行)

### 宏 #define (1)
- `FSETPOS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fsetpos::Cfsetpos  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfsetpos()` （声明） `L9`
  - `~Cfsetpos()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fsetpos_c(FILE* stream, const fpos_t* pos)` （声明） `L14`

## cstdio/ftell.cpp (35 行)

### 宏 #define (1)
- `FTELL_TEST` = 0  `L25`

### 函数 (4)
- `Cftell::my_init()` — 定义  `L2`
- `Cftell::Cftell()` — 定义  `L9`
- `Cftell::Cftell()` — 定义  `L14`
- `Cftell::ftell_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cftell::my_init(void *p)`、`Cftell::Cftell()`、`Cftell::~Cftell()`、`long int Cftell::ftell_c(FILE* stream)`

## cstdio/ftell.h (22 行)

### 宏 #define (1)
- `FTELL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ftell::Cftell  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cftell()` （声明） `L9`
  - `~Cftell()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long int ftell_c(FILE* stream)` （声明） `L14`

## cstdio/fwrite.cpp (36 行)

### 宏 #define (1)
- `FWRITE_TEST` = 0  `L26`

### 函数 (4)
- `Cfwrite::my_init()` — 定义  `L2`
- `Cfwrite::Cfwrite()` — 定义  `L9`
- `Cfwrite::Cfwrite()` — 定义  `L14`
- `Cfwrite::fwrite_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cfwrite::my_init(void *p)`、`Cfwrite::Cfwrite()`、`Cfwrite::~Cfwrite()`、`size_t Cfwrite::fwrite_c(const void* ptr, size_t size, size…`

## cstdio/fwrite.h (22 行)

### 宏 #define (1)
- `FWRITE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fwrite::Cfwrite  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfwrite()` （声明） `L9`
  - `~Cfwrite()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static size_t fwrite_c(const void* ptr, size_t size, size_t count, FILE* stream)` （声明） `L14`

## cstdio/getc.cpp (35 行)

### 宏 #define (1)
- `GETC_TEST` = 0  `L25`

### 函数 (4)
- `Cgetc::my_init()` — 定义  `L2`
- `Cgetc::Cgetc()` — 定义  `L9`
- `Cgetc::Cgetc()` — 定义  `L14`
- `Cgetc::getc_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cgetc::my_init(void *p)`、`Cgetc::Cgetc()`、`Cgetc::~Cgetc()`、`int Cgetc::getc_c(FILE* stream)`

## cstdio/getc.h (21 行)

### 宏 #define (1)
- `GETC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_getc::Cgetc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cgetc()` （声明） `L9`
  - `~Cgetc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int getc_c(FILE* stream)` （声明） `L14`

## cstdio/getchar.cpp (35 行)

### 宏 #define (1)
- `GETCHAR_TEST` = 0  `L25`

### 函数 (4)
- `Cgetchar::my_init()` — 定义  `L2`
- `Cgetchar::Cgetchar()` — 定义  `L9`
- `Cgetchar::Cgetchar()` — 定义  `L14`
- `Cgetchar::getchar_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cgetchar::my_init(void *p)`、`Cgetchar::Cgetchar()`、`Cgetchar::~Cgetchar()`、`int Cgetchar::getchar_c(void)`

## cstdio/getchar.h (21 行)

### 宏 #define (1)
- `GETCHAR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_getchar::Cgetchar  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cgetchar()` （声明） `L9`
  - `~Cgetchar()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int getchar_c(void)` （声明） `L14`

## cstdio/gets.cpp (39 行)

### 宏 #define (1)
- `GETS_TEST` = 0  `L29`

### 函数 (4)
- `Cgets::my_init()` — 定义  `L4`
- `Cgets::Cgets()` — 定义  `L11`
- `Cgets::Cgets()` — 定义  `L16`
- `Cgets::gets_c()` — 定义  `L21`

> 完整签名见 JSON: `int Cgets::my_init(void *p)`、`Cgets::Cgets()`、`Cgets::~Cgets()`、`char* Cgets::gets_c(char* str)`

## cstdio/gets.h (22 行)

### 宏 #define (1)
- `GETS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_gets::Cgets  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cgets()` （声明） `L9`
  - `~Cgets()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* gets_c(char* str)` （声明） `L14`

## cstdio/perror.cpp (36 行)

### 宏 #define (1)
- `PERROR_TEST` = 0  `L26`

### 函数 (4)
- `Cperror::my_init()` — 定义  `L2`
- `Cperror::Cperror()` — 定义  `L9`
- `Cperror::Cperror()` — 定义  `L14`
- `Cperror::perror_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cperror::my_init(void *p)`、`Cperror::Cperror()`、`Cperror::~Cperror()`、`void Cperror::perror_c(const char* str)`

## cstdio/perror.h (22 行)

### 宏 #define (1)
- `PERROR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_perror::Cperror  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cperror()` （声明） `L9`
  - `~Cperror()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void perror_c(const char* str)` （声明） `L14`

## cstdio/printf.cpp (44 行)

### 宏 #define (1)
- `PRINTF_TEST` = 0  `L34`

### 函数 (4)
- `Cprintf::my_init()` — 定义  `L4`
- `Cprintf::Cprintf()` — 定义  `L11`
- `Cprintf::Cprintf()` — 定义  `L16`
- `Cprintf::printf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Cprintf::my_init(void *p)`、`Cprintf::Cprintf()`、`Cprintf::~Cprintf()`、`int Cprintf::printf_c(const char* format, ...)`

## cstdio/printf.h (22 行)

### 宏 #define (1)
- `PRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_printf::Cprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cprintf()` （声明） `L9`
  - `~Cprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int printf_c(const char* format, ...)` （声明） `L14`

## cstdio/putc.cpp (35 行)

### 宏 #define (1)
- `PUTC_TEST` = 0  `L25`

### 函数 (4)
- `Cputc::my_init()` — 定义  `L2`
- `Cputc::Cputc()` — 定义  `L9`
- `Cputc::Cputc()` — 定义  `L14`
- `Cputc::puts_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cputc::my_init(void *p)`、`Cputc::Cputc()`、`Cputc::~Cputc()`、`int Cputc::puts_c(const char* str)`

## cstdio/putc.h (22 行)

### 宏 #define (1)
- `PUTC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_putc::Cputc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cputc()` （声明） `L9`
  - `~Cputc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int puts_c(const char* str)` （声明） `L14`

## cstdio/putchar.cpp (35 行)

### 宏 #define (1)
- `PUTCHAR_TEST` = 0  `L25`

### 函数 (4)
- `Cputchar::my_init()` — 定义  `L2`
- `Cputchar::Cputchar()` — 定义  `L9`
- `Cputchar::Cputchar()` — 定义  `L14`
- `Cputchar::putchar_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cputchar::my_init(void *p)`、`Cputchar::Cputchar()`、`Cputchar::~Cputchar()`、`int Cputchar::putchar_c(int character)`

## cstdio/putchar.h (22 行)

### 宏 #define (1)
- `PUTCHAR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_putchar::Cputchar  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cputchar()` （声明） `L9`
  - `~Cputchar()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int putchar_c(int character)` （声明） `L14`

## cstdio/puts.cpp (35 行)

### 宏 #define (1)
- `PUTS_TEST` = 0  `L25`

### 函数 (4)
- `Cputs::my_init()` — 定义  `L2`
- `Cputs::Cputs()` — 定义  `L9`
- `Cputs::Cputs()` — 定义  `L14`
- `Cputs::puts_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cputs::my_init(void *p)`、`Cputs::Cputs()`、`Cputs::~Cputs()`、`int Cputs::puts_c(const char* str)`

## cstdio/puts.h (22 行)

### 宏 #define (1)
- `PUTS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_puts::Cputs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cputs()` （声明） `L9`
  - `~Cputs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int puts_c(const char* str)` （声明） `L14`

## cstdio/remove.cpp (35 行)

### 宏 #define (1)
- `REMOVE_TEST` = 0  `L25`

### 函数 (4)
- `Cremove::my_init()` — 定义  `L2`
- `Cremove::Cremove()` — 定义  `L9`
- `Cremove::Cremove()` — 定义  `L14`
- `Cremove::remove_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cremove::my_init(void *p)`、`Cremove::Cremove()`、`Cremove::~Cremove()`、`int Cremove::remove_c(const char* filename)`

## cstdio/remove.h (22 行)

### 宏 #define (1)
- `REMOVE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_remove::Cremove  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cremove()` （声明） `L9`
  - `~Cremove()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int remove_c(const char* filename)` （声明） `L14`

## cstdio/rename.cpp (35 行)

### 宏 #define (1)
- `RENAME_TEST` = 0  `L25`

### 函数 (4)
- `Crename::my_init()` — 定义  `L2`
- `Crename::Crename()` — 定义  `L9`
- `Crename::Crename()` — 定义  `L14`
- `Crename::rename_c()` — 定义  `L19`

> 完整签名见 JSON: `int Crename::my_init(void *p)`、`Crename::Crename()`、`Crename::~Crename()`、`int Crename::rename_c(const char* oldname, const char* newn…`

## cstdio/rename.h (22 行)

### 宏 #define (1)
- `RENAME_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_rename::Crename  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Crename()` （声明） `L9`
  - `~Crename()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int rename_c(const char* oldname, const char* newname)` （声明） `L14`

## cstdio/rewind.cpp (35 行)

### 宏 #define (1)
- `REWIND_TEST` = 0  `L25`

### 函数 (4)
- `Crewind::my_init()` — 定义  `L2`
- `Crewind::Crewind()` — 定义  `L9`
- `Crewind::Crewind()` — 定义  `L14`
- `rewind_c()` — 定义  `L19`

> 完整签名见 JSON: `int Crewind::my_init(void *p)`、`Crewind::Crewind()`、`Crewind::~Crewind()`、`void Crewind:: rewind_c(FILE* stream)`

## cstdio/rewind.h (22 行)

### 宏 #define (1)
- `REWIND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_rewind::Crewind  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Crewind()` （声明） `L9`
  - `~Crewind()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void rewind_c(FILE* stream)` （声明） `L14`

## cstdio/scanf.cpp (44 行)

### 宏 #define (1)
- `SCANF_TEST` = 0  `L34`

### 函数 (4)
- `Cscanf::my_init()` — 定义  `L4`
- `Cscanf::Cscanf()` — 定义  `L11`
- `Cscanf::Cscanf()` — 定义  `L16`
- `Cscanf::scanf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Cscanf::my_init(void *p)`、`Cscanf::Cscanf()`、`Cscanf::~Cscanf()`、`int Cscanf::scanf_c(const char* format, ...)`

## cstdio/scanf.h (22 行)

### 宏 #define (1)
- `SCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_scanf::Cscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cscanf()` （声明） `L9`
  - `~Cscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int scanf_c(const char* format, ...)` （声明） `L14`

## cstdio/setbuf.cpp (37 行)

### 宏 #define (1)
- `SETBUF_TEST` = 0  `L25`

### 函数 (5)
- `Csetbuf::my_init()` — 定义  `L2`
- `Csetbuf::Csetbuf()` — 定义  `L9`
- `Csetbuf::Csetbuf()` — 定义  `L14`
- `Csetbuf::setbuf_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Csetbuf::my_init(void *p)`、`Csetbuf::Csetbuf()`、`Csetbuf::~Csetbuf()`、`void Csetbuf::setbuf_c(FILE* stream, char* buffer)`、`int main(int argc, char *argv[])`

## cstdio/setbuf.h (22 行)

### 宏 #define (1)
- `SETBUF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_setbuf::Csetbuf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csetbuf()` （声明） `L9`
  - `~Csetbuf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static void setbuf_c(FILE* stream, char* buffer)` （声明） `L14`

## cstdio/setvbuf.cpp (35 行)

### 宏 #define (1)
- `SETVBUF_TEST` = 0  `L25`

### 函数 (4)
- `Csetvbuf::my_init()` — 定义  `L2`
- `Csetvbuf::Csetvbuf()` — 定义  `L9`
- `Csetvbuf::Csetvbuf()` — 定义  `L14`
- `Csetvbuf::setvbuf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Csetvbuf::my_init(void *p)`、`Csetvbuf::Csetvbuf()`、`Csetvbuf::~Csetvbuf()`、`int Csetvbuf::setvbuf_c(FILE* stream, char* buffer, int mod…`

## cstdio/setvbuf.h (23 行)

### 宏 #define (1)
- `SETVBUF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_setvbuf::Csetvbuf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csetvbuf()` （声明） `L9`
  - `~Csetvbuf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int setvbuf_c(FILE* stream, char* buffer, int mode, size_t size)` （声明） `L14`

## cstdio/snprintf.cpp (44 行)

### 宏 #define (1)
- `SNPRINTF_TEST` = 0  `L34`

### 函数 (4)
- `Csnprintf::my_init()` — 定义  `L4`
- `Csnprintf::Csnprintf()` — 定义  `L11`
- `Csnprintf::Csnprintf()` — 定义  `L16`
- `Csnprintf::snprintf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Csnprintf::my_init(void *p)`、`Csnprintf::Csnprintf()`、`Csnprintf::~Csnprintf()`、`int Csnprintf::snprintf_c(char* s, size_t n, const char* fo…`

## cstdio/snprintf.h (21 行)

### 宏 #define (1)
- `SNPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_snprintf::Csnprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csnprintf()` （声明） `L9`
  - `~Csnprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int snprintf_c(char* s, size_t n, const char* format, ...)` （声明） `L14`

## cstdio/sprintf.cpp (44 行)

### 宏 #define (1)
- `SPRINTF_TEST` = 0  `L34`

### 函数 (4)
- `Csprintf::my_init()` — 定义  `L4`
- `Csprintf::Csprintf()` — 定义  `L11`
- `Csprintf::Csprintf()` — 定义  `L16`
- `Csprintf::sprintf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Csprintf::my_init(void *p)`、`Csprintf::Csprintf()`、`Csprintf::~Csprintf()`、`int Csprintf::sprintf_c(char* str, const char* format, ...)`

## cstdio/sprintf.h (22 行)

### 宏 #define (1)
- `SPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sprintf::Csprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csprintf()` （声明） `L9`
  - `~Csprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int sprintf_c(char* str, const char* format, ...)` （声明） `L14`

## cstdio/sscanf.cpp (44 行)

### 宏 #define (1)
- `SSCANF_TEST` = 0  `L34`

### 函数 (4)
- `Csscanf::my_init()` — 定义  `L4`
- `Csscanf::Csscanf()` — 定义  `L11`
- `Csscanf::Csscanf()` — 定义  `L16`
- `Csscanf::sscanf_c()` — 定义  `L21`

> 完整签名见 JSON: `int Csscanf::my_init(void *p)`、`Csscanf::Csscanf()`、`Csscanf::~Csscanf()`、`int Csscanf::sscanf_c(const char* s, const char* format, ..…`

## cstdio/sscanf.h (22 行)

### 宏 #define (1)
- `SSCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sscanf::Csscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csscanf()` （声明） `L9`
  - `~Csscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int sscanf_c(const char* s, const char* format, ...)` （声明） `L14`

## cstdio/stderr.cpp (32 行)

### 宏 #define (1)
- `STDERR_TEST` = 0  `L20`

### 函数 (4)
- `Cstderr::my_init()` — 定义  `L2`
- `Cstderr::Cstderr()` — 定义  `L9`
- `Cstderr::Cstderr()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cstderr::my_init(void *p)`、`Cstderr::Cstderr()`、`Cstderr::~Cstderr()`、`int main(int argc, char *argv[])`

## cstdio/stderr.h (20 行)

### 宏 #define (1)
- `STDERR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_stderr::Cstderr  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cstderr()` （声明） `L9`
  - `~Cstderr()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdio/stdin.cpp (32 行)

### 宏 #define (1)
- `STDIN_TEST` = 0  `L20`

### 函数 (4)
- `Cstdin::my_init()` — 定义  `L2`
- `Cstdin::Cstdin()` — 定义  `L9`
- `Cstdin::Cstdin()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cstdin::my_init(void *p)`、`Cstdin::Cstdin()`、`Cstdin::~Cstdin()`、`int main(int argc, char *argv[])`

## cstdio/stdin.h (20 行)

### 宏 #define (1)
- `STDIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_stdin::Cstdin  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cstdin()` （声明） `L9`
  - `~Cstdin()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdio/stdout.cpp (32 行)

### 宏 #define (1)
- `STDOUT_TEST` = 0  `L20`

### 函数 (4)
- `Cstdout::my_init()` — 定义  `L2`
- `Cstdout::Cstdout()` — 定义  `L9`
- `Cstdout::Cstdout()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cstdout::my_init(void *p)`、`Cstdout::Cstdout()`、`Cstdout::~Cstdout()`、`int main(int argc, char *argv[])`

## cstdio/stdout.h (20 行)

### 宏 #define (1)
- `STDOUT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_stdout::Cstdout  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cstdout()` （声明） `L9`
  - `~Cstdout()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## cstdio/tmpfile.cpp (35 行)

### 宏 #define (1)
- `TMPFILE_TEST` = 0  `L25`

### 函数 (4)
- `Ctmpfile::my_init()` — 定义  `L2`
- `Ctmpfile::Ctmpfile()` — 定义  `L9`
- `Ctmpfile::Ctmpfile()` — 定义  `L14`
- `Ctmpfile::tmpfile_c()` — 定义  `L19`

> 完整签名见 JSON: `int Ctmpfile::my_init(void *p)`、`Ctmpfile::Ctmpfile()`、`Ctmpfile::~Ctmpfile()`、`FILE* Ctmpfile::tmpfile_c(void)`

## cstdio/tmpfile.h (22 行)

### 宏 #define (1)
- `TMPFILE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tmpfile::Ctmpfile  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctmpfile()` （声明） `L9`
  - `~Ctmpfile()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static FILE* tmpfile_c(void)` （声明） `L14`

## cstdio/tmpnam.cpp (35 行)

### 宏 #define (1)
- `TMPNAM_TEST` = 0  `L25`

### 函数 (4)
- `Ctmpnam::my_init()` — 定义  `L2`
- `Ctmpnam::Ctmpnam()` — 定义  `L9`
- `Ctmpnam::Ctmpnam()` — 定义  `L14`
- `Ctmpnam::tmpnam_c()` — 定义  `L19`

> 完整签名见 JSON: `int Ctmpnam::my_init(void *p)`、`Ctmpnam::Ctmpnam()`、`Ctmpnam::~Ctmpnam()`、`char* Ctmpnam::tmpnam_c(char* str)`

## cstdio/tmpnam.h (22 行)

### 宏 #define (1)
- `TMPNAM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tmpnam::Ctmpnam  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctmpnam()` （声明） `L9`
  - `~Ctmpnam()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static char* tmpnam_c(char* str)` （声明） `L14`

## cstdio/ungetc.cpp (35 行)

### 宏 #define (1)
- `UNGETC_TEST` = 0  `L25`

### 函数 (4)
- `Cungetc::my_init()` — 定义  `L2`
- `Cungetc::Cungetc()` — 定义  `L9`
- `Cungetc::Cungetc()` — 定义  `L14`
- `ungetc_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cungetc::my_init(void *p)`、`Cungetc::Cungetc()`、`Cungetc::~Cungetc()`、`int Cungetc:: ungetc_c(int character, FILE* stream)`

## cstdio/ungetc.h (22 行)

### 宏 #define (1)
- `UNGETC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ungetc::Cungetc  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cungetc()` （声明） `L9`
  - `~Cungetc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int ungetc_c(int character, FILE* stream)` （声明） `L14`

## cstdio/vfprintf.cpp (35 行)

### 宏 #define (1)
- `VFPRINTF_TEST` = 0  `L25`

### 函数 (4)
- `Cvfprintf::my_init()` — 定义  `L2`
- `Cvfprintf::Cvfprintf()` — 定义  `L9`
- `Cvfprintf::Cvfprintf()` — 定义  `L14`
- `Cvfprintf::vfprintf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvfprintf::my_init(void *p)`、`Cvfprintf::Cvfprintf()`、`Cvfprintf::~Cvfprintf()`、`int Cvfprintf::vfprintf_c(FILE* stream, const char* format,…`

## cstdio/vfprintf.h (22 行)

### 宏 #define (1)
- `VFPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vfprintf::Cvfprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvfprintf()` （声明） `L9`
  - `~Cvfprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vfprintf_c(FILE* stream, const char* format, va_list arg)` （声明） `L14`

## cstdio/vfscanf.cpp (35 行)

### 宏 #define (1)
- `VFSCANF_TEST` = 0  `L25`

### 函数 (4)
- `Cvfscanf::my_init()` — 定义  `L2`
- `Cvfscanf::Cvfscanf()` — 定义  `L9`
- `Cvfscanf::Cvfscanf()` — 定义  `L14`
- `Cvfscanf::vfscanf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvfscanf::my_init(void *p)`、`Cvfscanf::Cvfscanf()`、`Cvfscanf::~Cvfscanf()`、`int Cvfscanf::vfscanf_c(FILE* stream, const char* format, v…`

## cstdio/vfscanf.h (22 行)

### 宏 #define (1)
- `VFSCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vfscanf::Cvfscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvfscanf()` （声明） `L9`
  - `~Cvfscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vfscanf_c(FILE* stream, const char* format, va_list arg)` （声明） `L14`

## cstdio/vprintf.cpp (36 行)

### 宏 #define (1)
- `VPRINTF_TEST` = 0  `L25`

### 函数 (5)
- `Cvprintf::my_init()` — 定义  `L2`
- `Cvprintf::Cvprintf()` — 定义  `L9`
- `Cvprintf::Cvprintf()` — 定义  `L14`
- `Cvprintf::vprintf_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cvprintf::my_init(void *p)`、`Cvprintf::Cvprintf()`、`Cvprintf::~Cvprintf()`、`int Cvprintf::vprintf_c(const char* format, va_list arg)`、`int main(int argc, char *argv[])`

## cstdio/vprintf.h (22 行)

### 宏 #define (1)
- `VPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vprintf::Cvprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvprintf()` （声明） `L9`
  - `~Cvprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vprintf_c(const char* format, va_list arg)` （声明） `L14`

## cstdio/vscanf.cpp (35 行)

### 宏 #define (1)
- `VSCANF_TEST` = 0  `L25`

### 函数 (4)
- `Cvscanf::my_init()` — 定义  `L2`
- `Cvscanf::Cvscanf()` — 定义  `L9`
- `Cvscanf::Cvscanf()` — 定义  `L14`
- `Cvscanf::vscanf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvscanf::my_init(void *p)`、`Cvscanf::Cvscanf()`、`Cvscanf::~Cvscanf()`、`int Cvscanf::vscanf_c(const char* format, va_list arg)`

## cstdio/vscanf.h (22 行)

### 宏 #define (1)
- `VSCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vscanf::Cvscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvscanf()` （声明） `L9`
  - `~Cvscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vscanf_c(const char* format, va_list arg)` （声明） `L14`

## cstdio/vsnprintf.cpp (35 行)

### 宏 #define (1)
- `VSNPRINTF_TEST` = 0  `L25`

### 函数 (4)
- `Cvsnprintf::my_init()` — 定义  `L2`
- `Cvsnprintf::Cvsnprintf()` — 定义  `L9`
- `Cvsnprintf::Cvsnprintf()` — 定义  `L14`
- `Cvsnprintf::vsnprintf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvsnprintf::my_init(void *p)`、`Cvsnprintf::Cvsnprintf()`、`Cvsnprintf::~Cvsnprintf()`、`int Cvsnprintf::vsnprintf_c(char* s, size_t n, const char* …`

## cstdio/vsnprintf.h (22 行)

### 宏 #define (1)
- `VSNPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vsnprintf::Cvsnprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvsnprintf()` （声明） `L9`
  - `~Cvsnprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vsnprintf_c(char* s, size_t n, const char* format, va_list arg)` （声明） `L14`

## cstdio/vsprintf.cpp (35 行)

### 宏 #define (1)
- `VSPRINTF_TEST` = 0  `L25`

### 函数 (4)
- `Cvsprintf::my_init()` — 定义  `L2`
- `Cvsprintf::Cvsprintf()` — 定义  `L9`
- `Cvsprintf::Cvsprintf()` — 定义  `L14`
- `Cvsprintf::vsprintf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvsprintf::my_init(void *p)`、`Cvsprintf::Cvsprintf()`、`Cvsprintf::~Cvsprintf()`、`int Cvsprintf::vsprintf_c(char* s, const char* format, va_l…`

## cstdio/vsprintf.h (22 行)

### 宏 #define (1)
- `VSPRINTF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vsprintf::Cvsprintf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvsprintf()` （声明） `L9`
  - `~Cvsprintf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vsprintf_c(char* s, const char* format, va_list arg)` （声明） `L14`

## cstdio/vsscanf.cpp (35 行)

### 宏 #define (1)
- `VSSCANF_TEST` = 0  `L25`

### 函数 (4)
- `Cvsscanf::my_init()` — 定义  `L2`
- `Cvsscanf::Cvsscanf()` — 定义  `L9`
- `Cvsscanf::Cvsscanf()` — 定义  `L14`
- `Cvsscanf::vsscanf_c()` — 定义  `L19`

> 完整签名见 JSON: `int Cvsscanf::my_init(void *p)`、`Cvsscanf::Cvsscanf()`、`Cvsscanf::~Cvsscanf()`、`int Cvsscanf::vsscanf_c(const char* s, const char* format, …`

## cstdio/vsscanf.h (22 行)

### 宏 #define (1)
- `VSSCANF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_vsscanf::Cvsscanf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cvsscanf()` （声明） `L9`
  - `~Cvsscanf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int vsscanf_c(const char* s, const char* format, va_list arg)` （声明） `L14`
