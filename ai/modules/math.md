# src/math

> 统计: 136 文件 / 6156 行 / 68 类 / 468 方法 / 468 自由函数 / 7 成员变量 / 9 全局变量 / 175 宏 / 6 typedef / 1 枚举

## math/_math.cpp (8 行)

### 函数 (1)
- `Cmath::Cmath()` — 定义  `L3`

> 完整签名见 JSON: `Cmath::Cmath()`

## math/_math.h (21 行)

### 宏 #define (2)
- `MATH_H`（无值，通常为头文件守卫）  `L2`
- `PI` = 3.1415926535898  `L7`

### 类 (1)
#### n_math::Cmath  `L11`  `class`
- 继承: `Object`
- 方法 (1):
  - `Cmath()` （声明） `L13`

## math/abs.cpp (51 行)

### 宏 #define (1)
- `ABS_TEST` = 0  `L40`

### 函数 (8)
- `Cabs::my_init()` — 定义  `L2`
- `Cabs::Cabs()` — 定义  `L9`
- `Cabs::Cabs()` — 定义  `L14`
- `Cabs::abs_c()` — 定义  `L19`
- `Cabs::abs_c()` — 定义  `L24`
- `Cabs::abs_c()` — 定义  `L29`
- `Cabs::abs_c()` — 定义  `L34`
- `main()` — 定义  `L45`

> 完整签名见 JSON。

## math/abs.h (24 行)

### 宏 #define (1)
- `ABS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_abs::Cabs  `L7`  `class`
- 继承: `Object`
- 方法 (8):
  - `Cabs()` （声明） `L9`
  - `~Cabs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int abs_c(int n)` （声明） `L14`
  - `static double abs_c(double x)` （声明） `L15`
  - `static float abs_c(float x)` （声明） `L16`
  - `static long double abs_c(long double x)` （声明） `L17`

## math/acos.cpp (36 行)

### 宏 #define (1)
- `ACOS_TEST` = 0  `L25`

### 函数 (5)
- `Cacos::my_init()` — 定义  `L2`
- `Cacos::Cacos()` — 定义  `L9`
- `Cacos::Cacos()` — 定义  `L14`
- `Cacos::acos_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cacos::my_init(void *p)`、`Cacos::Cacos()`、`Cacos::~Cacos()`、`double Cacos::acos_c(double x)`、`int main(int argc, char *argv[])`

## math/acos.h (21 行)

### 宏 #define (1)
- `ACOS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_acos::Cacos  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cacos()` （声明） `L9`
  - `~Cacos()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double acos_c(double x)` （声明） `L14`

## math/acosh.cpp (46 行)

### 宏 #define (1)
- `ACOSH_TEST` = 0  `L35`

### 函数 (7)
- `Cacosh::my_init()` — 定义  `L2`
- `Cacosh::Cacosh()` — 定义  `L9`
- `Cacosh::Cacosh()` — 定义  `L14`
- `Cacosh::acosh_c()` — 定义  `L19`
- `Cacosh::acoshf_c()` — 定义  `L24`
- `Cacosh::acoshl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/acosh.h (24 行)

### 宏 #define (1)
- `ACOSH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_acosh::Cacosh  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cacosh()` （声明） `L9`
  - `~Cacosh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double acosh_c(double x)` （声明） `L14`
  - `static float acoshf_c(float x)` （声明） `L15`
  - `static long double acoshl_c(long double x)` （声明） `L16`

## math/asin.cpp (36 行)

### 宏 #define (1)
- `ASIN_TEST` = 0  `L25`

### 函数 (5)
- `Casin::my_init()` — 定义  `L2`
- `Casin::Casin()` — 定义  `L9`
- `Casin::Casin()` — 定义  `L14`
- `Casin::asin_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Casin::my_init(void *p)`、`Casin::Casin()`、`Casin::~Casin()`、`double Casin::asin_c(double x)`、`int main(int argc, char *argv[])`

## math/asin.h (22 行)

### 宏 #define (1)
- `ASIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_asin::Casin  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Casin()` （声明） `L9`
  - `~Casin()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double asin_c(double x)` （声明） `L14`

## math/asinh.cpp (43 行)

### 宏 #define (1)
- `ASINH_TEST` = 0  `L32`

### 函数 (7)
- `Casinh::my_init()` — 定义  `L2`
- `Casinh::Casinh()` — 定义  `L9`
- `Casinh::Casinh()` — 定义  `L14`
- `Casinh::asinh_c()` — 定义  `L18`
- `Casinh::asinhf_c()` — 定义  `L22`
- `Casinh::asinhl_c()` — 定义  `L27`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/asinh.h (23 行)

### 宏 #define (1)
- `ASINH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_asinh::Casinh  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Casinh()` （声明） `L9`
  - `~Casinh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double asinh_c(double x)` （声明） `L14`
  - `static float asinhf_c(float x)` （声明） `L15`
  - `static long double asinhl_c(long double x)` （声明） `L16`

## math/atan.cpp (35 行)

### 宏 #define (1)
- `ATAN_TEST` = 0  `L24`

### 函数 (5)
- `Catan::my_init()` — 定义  `L2`
- `Catan::Catan()` — 定义  `L9`
- `Catan::Catan()` — 定义  `L14`
- `Catan::atan_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Catan::my_init(void *p)`、`Catan::Catan()`、`Catan::~Catan()`、`double Catan::atan_c(double x)`、`int main(int argc, char *argv[])`

## math/atan.h (22 行)

### 宏 #define (1)
- `ATAN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atan::Catan  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catan()` （声明） `L9`
  - `~Catan()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double atan_c(double x)` （声明） `L14`

## math/atan2.cpp (36 行)

### 宏 #define (1)
- `ATAN2_TEST` = 0  `L25`

### 函数 (5)
- `Catan2::my_init()` — 定义  `L2`
- `Catan2::Catan2()` — 定义  `L9`
- `Catan2::Catan2()` — 定义  `L14`
- `Catan2::atan2_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Catan2::my_init(void *p)`、`Catan2::Catan2()`、`Catan2::~Catan2()`、`double Catan2::atan2_c(double y, double x)`、`int main(int argc, char *argv[])`

## math/atan2.h (22 行)

### 宏 #define (1)
- `ATAN2_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atan2::Catan2  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Catan2()` （声明） `L9`
  - `~Catan2()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double atan2_c(double y, double x)` （声明） `L14`

## math/atanh.cpp (42 行)

### 宏 #define (1)
- `ATANH_TEST` = 0  `L31`

### 函数 (7)
- `Catanh::my_init()` — 定义  `L2`
- `Catanh::Catanh()` — 定义  `L9`
- `Catanh::Catanh()` — 定义  `L14`
- `Catanh::atanh_c()` — 定义  `L18`
- `Catanh::atanhf_c()` — 定义  `L22`
- `Catanh::atanhl_c()` — 定义  `L26`
- `main()` — 定义  `L36`

> 完整签名见 JSON。

## math/atanh.h (24 行)

### 宏 #define (1)
- `ATANH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_atanh::Catanh  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Catanh()` （声明） `L9`
  - `~Catanh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double atanh_c(double x)` （声明） `L14`
  - `static float atanhf_c(float x)` （声明） `L15`
  - `static long double atanhl_c(long double x)` （声明） `L16`

## math/cbrt.cpp (43 行)

### 宏 #define (1)
- `CBRT_TEST` = 0  `L32`

### 函数 (7)
- `Ccbrt::my_init()` — 定义  `L2`
- `Ccbrt::Ccbrt()` — 定义  `L9`
- `Ccbrt::Ccbrt()` — 定义  `L14`
- `Ccbrt::cbrt_c()` — 定义  `L18`
- `Ccbrt::cbrtf_c()` — 定义  `L22`
- `Ccbrt::cbrtl_c()` — 定义  `L26`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/cbrt.h (24 行)

### 宏 #define (1)
- `CBRT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cbrt::Ccbrt  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Ccbrt()` （声明） `L9`
  - `~Ccbrt()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double cbrt_c(double x)` （声明） `L14`
  - `static float cbrtf_c(float x)` （声明） `L15`
  - `static long double cbrtl_c(long double x)` （声明） `L16`

## math/ceil.cpp (34 行)

### 宏 #define (1)
- `CEIL_TEST` = 0  `L23`

### 函数 (5)
- `Cceil::my_init()` — 定义  `L2`
- `Cceil::Cceil()` — 定义  `L9`
- `Cceil::Cceil()` — 定义  `L14`
- `Cceil::ceil_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cceil::my_init(void *p)`、`Cceil::Cceil()`、`Cceil::~Cceil()`、`double Cceil::ceil_c(double x)`、`int main(int argc, char *argv[])`

## math/ceil.h (21 行)

### 宏 #define (1)
- `CEIL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ceil::Cceil  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cceil()` （声明） `L9`
  - `~Cceil()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double ceil_c(double x)` （声明） `L14`

## math/cmath.cpp (35 行)

### 宏 #define (1)
- `CMATH_TEST` = 0  `L24`

### 函数 (5)
- `Ccmath::my_init()` — 定义  `L3`
- `Ccmath::Ccmath()` — 定义  `L10`
- `Ccmath::Ccmath()` — 定义  `L15`
- `Ccmath::add_global_objects()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Ccmath::my_init(void *p)`、`Ccmath::Ccmath()`、`Ccmath::~Ccmath()`、`void Ccmath::add_global_objects(Object* p)`、`int main(int argc, char *argv[])`

## math/cmath.h (21 行)

### 宏 #define (1)
- `CMATH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cmath::Ccmath  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccmath()` （声明） `L9`
  - `~Ccmath()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `void add_global_objects(Object* p)` （声明） `L14`

## math/copysign.cpp (46 行)

### 宏 #define (1)
- `COPYSIGN_TEST` = 0  `L35`

### 函数 (7)
- `Ccopysign::my_init()` — 定义  `L2`
- `Ccopysign::Ccopysign()` — 定义  `L9`
- `Ccopysign::Ccopysign()` — 定义  `L14`
- `copysign_c()` — 定义  `L19`
- `copysignf_c()` — 定义  `L24`
- `copysignl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/copysign.h (24 行)

### 宏 #define (1)
- `COPYSIGN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_copysign::Ccopysign  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Ccopysign()` （声明） `L9`
  - `~Ccopysign()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double copysign_c(double x, double y)` （声明） `L14`
  - `static float copysignf_c(float x, float y)` （声明） `L15`
  - `static long double copysignl_c(long double x, long double y)` （声明） `L16`

## math/cos.cpp (35 行)

### 宏 #define (1)
- `COS_TEST` = 0  `L24`

### 函数 (5)
- `Ccos::my_init()` — 定义  `L2`
- `Ccos::Ccos()` — 定义  `L9`
- `Ccos::Ccos()` — 定义  `L14`
- `Ccos::cos_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Ccos::my_init(void *p)`、`Ccos::Ccos()`、`Ccos::~Ccos()`、`double Ccos::cos_c(double x)`、`int main(int argc, char *argv[])`

## math/cos.h (21 行)

### 宏 #define (1)
- `COS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cos::Ccos  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccos()` （声明） `L9`
  - `~Ccos()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double cos_c(double x)` （声明） `L14`

## math/cosh.cpp (34 行)

### 宏 #define (1)
- `COSH_TEST` = 0  `L23`

### 函数 (5)
- `Ccosh::my_init()` — 定义  `L2`
- `Ccosh::Ccosh()` — 定义  `L9`
- `Ccosh::Ccosh()` — 定义  `L14`
- `Ccosh::cosh_h()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Ccosh::my_init(void *p)`、`Ccosh::Ccosh()`、`Ccosh::~Ccosh()`、`double Ccosh::cosh_h(double x)`、`int main(int argc, char *argv[])`

## math/cosh.h (22 行)

### 宏 #define (1)
- `COSH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cosh::Ccosh  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccosh()` （声明） `L9`
  - `~Ccosh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double cosh_h(double x)` （声明） `L14`

## math/crc.cpp (632 行)

### 宏 #define (1)
- `CRC_TEST` = 0  `L620`

### 函数 (26)
- `Ccrc::my_init()` — 定义  `L2`
- `Ccrc::Ccrc()` — 定义  `L9`
- `Ccrc::Ccrc()` — 定义  `L14`
- `Ccrc::execute()` — 定义  `L19`
- `Ccrc::crc4_itu()` — 定义  `L51`
- `Ccrc::crc5_epc()` — 定义  `L70`
- `Ccrc::crc5_itu()` — 定义  `L89`
- `Ccrc::crc5_usb()` — 定义  `L108`
- `Ccrc::crc6_itu()` — 定义  `L127`
- `Ccrc::crc7_mmc()` — 定义  `L146`
- `Ccrc::crc8()` — 定义  `L165`
- `Ccrc::crc8_itu()` — 定义  `L184`
- `Ccrc::crc8_rohc()` — 定义  `L203`
- `Ccrc::crc8_maxim()` — 定义  `L222`
- `Ccrc::crc16_ibm()` — 定义  `L241`
- `Ccrc::crc16_maxim()` — 定义  `L260`
- `Ccrc::crc16_usb()` — 定义  `L279`
- `Ccrc::crc16_modbus()` — 定义  `L298`
- `Ccrc::crc16_ccitt()` — 定义  `L317`
- `Ccrc::crc16_ccitt_false()` — 定义  `L336`
- `Ccrc::crc16_x25()` — 定义  `L355`
- `Ccrc::crc16_xmodem()` — 定义  `L374`
- `Ccrc::crc16_dnp()` — 定义  `L393`
- `Ccrc::crc32()` — 定义  `L412`
- `Ccrc::crc32_mpeg_2()` — 定义  `L431`
- `main()` — 定义  `L455`

> 完整签名见 JSON。

## math/crc.h (42 行)

### 宏 #define (1)
- `CRC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_crc::Ccrc  `L7`  `class`
- 继承: `Object`
- 方法 (26):
  - `Ccrc()` （声明） `L9`
  - `~Ccrc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `int execute(char* fun_name, uint8_t* data, size_t length, uint32_t* crc)` （声明） `L14`
  - `uint8_t crc4_itu(uint8_t* data, size_t length)` （声明） `L15`
  - `uint8_t crc5_epc(uint8_t* data, size_t length)` （声明） `L16`
  - `uint8_t crc5_itu(uint8_t* data, size_t length)` （声明） `L17`
  - `uint8_t crc5_usb(uint8_t* data, size_t length)` （声明） `L18`
  - `uint8_t crc6_itu(uint8_t* data, size_t length)` （声明） `L19`
  - `uint8_t crc7_mmc(uint8_t* data, size_t length)` （声明） `L20`
  - `uint8_t crc8(uint8_t* data, size_t length)` （声明） `L21`
  - `uint8_t crc8_itu(uint8_t* data, size_t length)` （声明） `L22`
  - `uint8_t crc8_rohc(uint8_t* data, size_t length)` （声明） `L23`
  - `uint8_t crc8_maxim(uint8_t* data, size_t length)` （声明） `L24`
  - `uint16_t crc16_ibm(uint8_t* data, size_t length)` （声明） `L25`
  - `uint16_t crc16_maxim(uint8_t* data, size_t length)` （声明） `L26`
  - `uint16_t crc16_usb(uint8_t* data, size_t length)` （声明） `L27`
  - `uint16_t crc16_modbus(uint8_t* data, size_t length)` （声明） `L28`
  - `uint16_t crc16_ccitt(uint8_t* data, size_t length)` （声明） `L29`
  - `uint16_t crc16_ccitt_false(uint8_t* data, size_t length)` （声明） `L30`
  - `uint16_t crc16_x25(uint8_t* data, size_t length)` （声明） `L31`
  - `uint16_t crc16_xmodem(uint8_t* data, size_t length)` （声明） `L32`
  - `uint16_t crc16_dnp(uint8_t* data, size_t length)` （声明） `L33`
  - `uint32_t crc32(uint8_t* data, size_t length)` （声明） `L34`
  - `uint32_t crc32_mpeg_2(uint8_t* data, size_t length)` （声明） `L35`

## math/erf.cpp (42 行)

### 宏 #define (1)
- `ERF_TEST` = 0  `L31`

### 函数 (7)
- `Cerf::my_init()` — 定义  `L2`
- `Cerf::Cerf()` — 定义  `L9`
- `Cerf::Cerf()` — 定义  `L14`
- `Cerf::erf_c()` — 定义  `L18`
- `Cerf::erff_c()` — 定义  `L22`
- `Cerf::erfl_c()` — 定义  `L26`
- `main()` — 定义  `L36`

> 完整签名见 JSON。

## math/erf.h (24 行)

### 宏 #define (1)
- `ERF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_erf::Cerf  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cerf()` （声明） `L9`
  - `~Cerf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double erf_c(double x)` （声明） `L14`
  - `static float erff_c(float x)` （声明） `L15`
  - `static long double erfl_c(long double x)` （声明） `L16`

## math/erfc.cpp (44 行)

### 宏 #define (1)
- `ERFC_TEST` = 0  `L33`

### 函数 (7)
- `Cerfc::my_init()` — 定义  `L2`
- `Cerfc::Cerfc()` — 定义  `L9`
- `Cerfc::Cerfc()` — 定义  `L14`
- `Cerfc::erfc_c()` — 定义  `L19`
- `Cerfc::erfcf_c()` — 定义  `L23`
- `Cerfc::erfcl_c()` — 定义  `L27`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/erfc.h (24 行)

### 宏 #define (1)
- `ERFC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_erfc::Cerfc  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cerfc()` （声明） `L9`
  - `~Cerfc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double erfc_c(double x)` （声明） `L14`
  - `static float erfcf_c(float x)` （声明） `L15`
  - `static long double erfcl_c(long double x)` （声明） `L16`

## math/exp.cpp (36 行)

### 宏 #define (1)
- `EXP_TEST` = 0  `L25`

### 函数 (5)
- `Cexp::my_init()` — 定义  `L2`
- `Cexp::Cexp()` — 定义  `L9`
- `Cexp::Cexp()` — 定义  `L14`
- `Cexp::exp_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cexp::my_init(void *p)`、`Cexp::Cexp()`、`Cexp::~Cexp()`、`double Cexp::exp_c(double x)`、`int main(int argc, char *argv[])`

## math/exp.h (21 行)

### 宏 #define (1)
- `EXP_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_exp::Cexp  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cexp()` （声明） `L9`
  - `~Cexp()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double exp_c(double x)` （声明） `L14`

## math/exp2.cpp (43 行)

### 宏 #define (1)
- `EXP2_TEST` = 0  `L32`

### 函数 (7)
- `Cexp2::my_init()` — 定义  `L2`
- `Cexp2::Cexp2()` — 定义  `L9`
- `Cexp2::Cexp2()` — 定义  `L14`
- `Cexp2::exp2_c()` — 定义  `L18`
- `Cexp2::exp2f_c()` — 定义  `L22`
- `Cexp2::exp2l_c()` — 定义  `L26`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/exp2.h (24 行)

### 宏 #define (1)
- `EXP2_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_exp2::Cexp2  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cexp2()` （声明） `L9`
  - `~Cexp2()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double exp2_c(double x)` （声明） `L14`
  - `static float exp2f_c(float x)` （声明） `L15`
  - `static long double exp2l_c(long double x)` （声明） `L16`

## math/expm1.cpp (42 行)

### 宏 #define (1)
- `EXPM1_TEST` = 0  `L31`

### 函数 (7)
- `Cexpm1::my_init()` — 定义  `L2`
- `Cexpm1::Cexpm1()` — 定义  `L9`
- `Cexpm1::Cexpm1()` — 定义  `L14`
- `Cexpm1::expm1_c()` — 定义  `L18`
- `Cexpm1::expm1f_c()` — 定义  `L22`
- `Cexpm1::expm1l_c()` — 定义  `L26`
- `main()` — 定义  `L36`

> 完整签名见 JSON。

## math/expm1.h (24 行)

### 宏 #define (1)
- `EXPM1_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_expm1::Cexpm1  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cexpm1()` （声明） `L9`
  - `~Cexpm1()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double expm1_c(double x)` （声明） `L14`
  - `static float expm1f_c(float x)` （声明） `L15`
  - `static long double expm1l_c(long double x)` （声明） `L16`

## math/fabs_.cpp (35 行)

### 宏 #define (1)
- `FABS__TEST` = 0  `L24`

### 函数 (5)
- `Cfabs::my_init()` — 定义  `L2`
- `Cfabs::Cfabs()` — 定义  `L9`
- `Cfabs::Cfabs()` — 定义  `L14`
- `Cfabs::fabs_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cfabs::my_init(void *p)`、`Cfabs::Cfabs()`、`Cfabs::~Cfabs()`、`double Cfabs::fabs_c(double x)`、`int main(int argc, char *argv[])`

## math/fabs_.h (21 行)

### 宏 #define (1)
- `FABS_H_`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fabs::Cfabs  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfabs()` （声明） `L9`
  - `~Cfabs()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fabs_c(double x)` （声明） `L14`

## math/fdim.cpp (44 行)

### 宏 #define (1)
- `FDIM_TEST` = 0  `L33`

### 函数 (7)
- `Cfdim::my_init()` — 定义  `L2`
- `Cfdim::Cfdim()` — 定义  `L9`
- `Cfdim::Cfdim()` — 定义  `L14`
- `Cfdim::fdim_c()` — 定义  `L19`
- `Cfdim::fdimf_c()` — 定义  `L23`
- `Cfdim::fdiml_c()` — 定义  `L27`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/fdim.h (24 行)

### 宏 #define (1)
- `FDIM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fdim::Cfdim  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cfdim()` （声明） `L9`
  - `~Cfdim()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fdim_c(double x, double y)` （声明） `L14`
  - `static float fdimf_c(float x, float y)` （声明） `L15`
  - `static long double fdiml_c(long double x, long double y)` （声明） `L16`

## math/floor.cpp (34 行)

### 宏 #define (1)
- `FLOOR_TEST` = 0  `L23`

### 函数 (5)
- `Cfloor::my_init()` — 定义  `L2`
- `Cfloor::Cfloor()` — 定义  `L9`
- `Cfloor::Cfloor()` — 定义  `L14`
- `Cfloor::floor_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Cfloor::my_init(void *p)`、`Cfloor::Cfloor()`、`Cfloor::~Cfloor()`、`double Cfloor::floor_c(double x)`、`int main(int argc, char *argv[])`

## math/floor.h (22 行)

### 宏 #define (1)
- `FLOOR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_floor::Cfloor  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfloor()` （声明） `L9`
  - `~Cfloor()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double floor_c(double x)` （声明） `L14`

## math/fma.cpp (46 行)

### 宏 #define (1)
- `FMA_TEST` = 0  `L35`

### 函数 (7)
- `Cfma::my_init()` — 定义  `L2`
- `Cfma::Cfma()` — 定义  `L9`
- `Cfma::Cfma()` — 定义  `L14`
- `Cfma::fma_c()` — 定义  `L19`
- `Cfma::fmaf_c()` — 定义  `L24`
- `Cfma::fmal_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/fma.h (24 行)

### 宏 #define (1)
- `FMA_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fma::Cfma  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cfma()` （声明） `L9`
  - `~Cfma()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fma_c(double x, double y, double z)` （声明） `L14`
  - `static float fmaf_c(float x, float y, float z)` （声明） `L15`
  - `static long double fmal_c(long double x, long double y, long double z)` （声明） `L16`

## math/fmax.cpp (42 行)

### 宏 #define (1)
- `FMAX_TEST` = 0  `L31`

### 函数 (7)
- `Cfmax::my_init()` — 定义  `L2`
- `Cfmax::Cfmax()` — 定义  `L9`
- `Cfmax::Cfmax()` — 定义  `L14`
- `Cfmax::fmax_c()` — 定义  `L18`
- `Cfmax::fmaxf_c()` — 定义  `L22`
- `Cfmax::fmaxl_c()` — 定义  `L26`
- `main()` — 定义  `L36`

> 完整签名见 JSON。

## math/fmax.h (24 行)

### 宏 #define (1)
- `FMAX_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fmax::Cfmax  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cfmax()` （声明） `L9`
  - `~Cfmax()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fmax_c(double x, double y)` （声明） `L14`
  - `static float fmaxf_c(float x, float y)` （声明） `L15`
  - `static long double fmaxl_c(long double x, long double y)` （声明） `L16`

## math/fmin.cpp (43 行)

### 宏 #define (1)
- `FMIN_TEST` = 0  `L32`

### 函数 (7)
- `Cfmin::my_init()` — 定义  `L2`
- `Cfmin::Cfmin()` — 定义  `L9`
- `Cfmin::Cfmin()` — 定义  `L14`
- `Cfmin::fmin_c()` — 定义  `L18`
- `Cfmin::fminf_c()` — 定义  `L22`
- `Cfmin::fminl_c()` — 定义  `L26`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/fmin.h (24 行)

### 宏 #define (1)
- `FMIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fmin::Cfmin  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cfmin()` （声明） `L9`
  - `~Cfmin()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fmin_c(double x, double y)` （声明） `L14`
  - `static float fminf_c(float x, float y)` （声明） `L15`
  - `static long double fminl_c(long double x, long double y)` （声明） `L16`

## math/fmod.cpp (36 行)

### 宏 #define (1)
- `FMOD_TEST` = 0  `L25`

### 函数 (5)
- `Cfmod::my_init()` — 定义  `L2`
- `Cfmod::Cfmod()` — 定义  `L9`
- `Cfmod::Cfmod()` — 定义  `L14`
- `Cfmod::fmod_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cfmod::my_init(void *p)`、`Cfmod::Cfmod()`、`Cfmod::~Cfmod()`、`double Cfmod::fmod_c(double numer, double denom)`、`int main(int argc, char *argv[])`

## math/fmod.h (22 行)

### 宏 #define (1)
- `FMOD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fmod::Cfmod  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfmod()` （声明） `L9`
  - `~Cfmod()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double fmod_c(double numer, double denom)` （声明） `L14`

## math/fpclassify.cpp (37 行)

### 宏 #define (1)
- `FPCLASSIFY_TEST` = 0  `L25`

### 函数 (5)
- `Cfpclassify::my_init()` — 定义  `L2`
- `Cfpclassify::Cfpclassify()` — 定义  `L9`
- `Cfpclassify::Cfpclassify()` — 定义  `L14`
- `Cfpclassify::fpclassify_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cfpclassify::my_init(void *p)`、`Cfpclassify::Cfpclassify()`、`Cfpclassify::~Cfpclassify()`、`int Cfpclassify::fpclassify_c(double x)`、`int main(int argc, char *argv[])`

## math/fpclassify.h (21 行)

### 宏 #define (1)
- `FPCLASSIFY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_fpclassify::Cfpclassify  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfpclassify()` （声明） `L9`
  - `~Cfpclassify()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int fpclassify_c(double x)` （声明） `L14`

## math/frexp.cpp (36 行)

### 宏 #define (1)
- `FREXP_TEST` = 0  `L25`

### 函数 (5)
- `Cfrexp::my_init()` — 定义  `L2`
- `Cfrexp::Cfrexp()` — 定义  `L9`
- `Cfrexp::Cfrexp()` — 定义  `L14`
- `Cfrexp::frexp_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cfrexp::my_init(void *p)`、`Cfrexp::Cfrexp()`、`Cfrexp::~Cfrexp()`、`double Cfrexp::frexp_c(double x, int* exp)`、`int main(int argc, char *argv[])`

## math/frexp.h (22 行)

### 宏 #define (1)
- `FREXP_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_frexp::Cfrexp  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cfrexp()` （声明） `L9`
  - `~Cfrexp()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double frexp_c(double x, int* exp)` （声明） `L14`

## math/hypot.cpp (46 行)

### 宏 #define (1)
- `HYPOT_TEST` = 0  `L35`

### 函数 (7)
- `Chypot::my_init()` — 定义  `L2`
- `Chypot::Chypot()` — 定义  `L9`
- `Chypot::Chypot()` — 定义  `L14`
- `Chypot::hypot_c()` — 定义  `L19`
- `Chypot::hypotf_c()` — 定义  `L24`
- `Chypot::hypotl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/hypot.h (24 行)

### 宏 #define (1)
- `HYPOT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_hypot::Chypot  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Chypot()` （声明） `L9`
  - `~Chypot()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double hypot_c(double x, double y)` （声明） `L14`
  - `static float hypotf_c(float x, float y)` （声明） `L15`
  - `static long double hypotl_c(long double x, long double y)` （声明） `L16`

## math/ilogb.cpp (46 行)

### 宏 #define (1)
- `ILOGB_TEST` = 0  `L35`

### 函数 (7)
- `Cilogb::my_init()` — 定义  `L2`
- `Cilogb::Cilogb()` — 定义  `L9`
- `Cilogb::Cilogb()` — 定义  `L14`
- `Cilogb::ilogb_c()` — 定义  `L19`
- `Cilogb::ilogbf_c()` — 定义  `L24`
- `Cilogb::ilogbl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/ilogb.h (24 行)

### 宏 #define (1)
- `ILOGB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ilogb::Cilogb  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cilogb()` （声明） `L9`
  - `~Cilogb()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int ilogb_c(double x)` （声明） `L14`
  - `static int ilogbf_c(float x)` （声明） `L15`
  - `static int ilogbl_c(long double x)` （声明） `L16`

## math/ldexp.cpp (35 行)

### 宏 #define (1)
- `LDEXP_TEST` = 0  `L24`

### 函数 (5)
- `Cldexp::my_init()` — 定义  `L2`
- `Cldexp::Cldexp()` — 定义  `L9`
- `Cldexp::Cldexp()` — 定义  `L14`
- `Cldexp::ldexp_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Cldexp::my_init(void *p)`、`Cldexp::Cldexp()`、`Cldexp::~Cldexp()`、`double Cldexp::ldexp_c(double x, int exp)`、`int main(int argc, char *argv[])`

## math/ldexp.h (22 行)

### 宏 #define (1)
- `LDEXP_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_ldexp::Cldexp  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cldexp()` （声明） `L9`
  - `~Cldexp()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double ldexp_c(double x, int exp)` （声明） `L14`

## math/lgamma.cpp (46 行)

### 宏 #define (1)
- `LGAMMA_TEST` = 0  `L35`

### 函数 (7)
- `Clgamma::my_init()` — 定义  `L2`
- `Clgamma::Clgamma()` — 定义  `L9`
- `Clgamma::Clgamma()` — 定义  `L14`
- `Clgamma::lgamma_c()` — 定义  `L19`
- `Clgamma::lgammaf_c()` — 定义  `L24`
- `Clgamma::lgammal_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/lgamma.h (24 行)

### 宏 #define (1)
- `LGAMMA_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_lgamma::Clgamma  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clgamma()` （声明） `L9`
  - `~Clgamma()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double lgamma_c(double x)` （声明） `L14`
  - `static float lgammaf_c(float x)` （声明） `L15`
  - `static long double lgammal_c(long double x)` （声明） `L16`

## math/llrint.cpp (44 行)

### 宏 #define (1)
- `LLRINT_TEST` = 0  `L33`

### 函数 (7)
- `Cllrint::my_init()` — 定义  `L2`
- `Cllrint::Cllrint()` — 定义  `L9`
- `Cllrint::Cllrint()` — 定义  `L14`
- `Cllrint::llrint_c()` — 定义  `L18`
- `Cllrint::llrintf_c()` — 定义  `L23`
- `Cllrint::llrintl_c()` — 定义  `L28`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/llrint.h (24 行)

### 宏 #define (1)
- `LLRINT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_llrint::Cllrint  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cllrint()` （声明） `L9`
  - `~Cllrint()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long long int llrint_c(double x)` （声明） `L14`
  - `static long long int llrintf_c(float x)` （声明） `L15`
  - `static long long int llrintl_c(long double x)` （声明） `L16`

## math/llround.cpp (46 行)

### 宏 #define (1)
- `LLROUND_TEST` = 0  `L35`

### 函数 (7)
- `Cllround::my_init()` — 定义  `L2`
- `Cllround::Cllround()` — 定义  `L9`
- `Cllround::Cllround()` — 定义  `L14`
- `llround_c()` — 定义  `L19`
- `llroundf_c()` — 定义  `L24`
- `llroundl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/llround.h (24 行)

### 宏 #define (1)
- `LLROUND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_llround::Cllround  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cllround()` （声明） `L9`
  - `~Cllround()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long long int llround_c(double x)` （声明） `L14`
  - `static long long int llroundf_c(float x)` （声明） `L15`
  - `static long long int llroundl_c(long double x)` （声明） `L16`

## math/log.cpp (35 行)

### 宏 #define (1)
- `LOG_TEST` = 0  `L24`

### 函数 (5)
- `Clog::my_init()` — 定义  `L2`
- `Clog::Clog()` — 定义  `L9`
- `Clog::Clog()` — 定义  `L14`
- `Clog::log_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Clog::my_init(void *p)`、`Clog::Clog()`、`Clog::~Clog()`、`double Clog::log_c(double x)`、`int main(int argc, char *argv[])`

## math/log.h (21 行)

### 宏 #define (1)
- `LOG_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_log::Clog  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Clog()` （声明） `L9`
  - `~Clog()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double log_c(double x)` （声明） `L14`

## math/log10.cpp (35 行)

### 宏 #define (1)
- `LOG10_TEST` = 0  `L24`

### 函数 (5)
- `Clog10::my_init()` — 定义  `L2`
- `Clog10::Clog10()` — 定义  `L9`
- `Clog10::Clog10()` — 定义  `L14`
- `Clog10::log10_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Clog10::my_init(void *p)`、`Clog10::Clog10()`、`Clog10::~Clog10()`、`double Clog10::log10_c(double x)`、`int main(int argc, char *argv[])`

## math/log10.h (22 行)

### 宏 #define (1)
- `LOG10_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_log10::Clog10  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Clog10()` （声明） `L9`
  - `~Clog10()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double log10_c(double x)` （声明） `L14`

## math/log1p.cpp (46 行)

### 宏 #define (1)
- `LOG1P_TEST` = 0  `L35`

### 函数 (7)
- `Clog1p::my_init()` — 定义  `L2`
- `Clog1p::Clog1p()` — 定义  `L9`
- `Clog1p::Clog1p()` — 定义  `L14`
- `Clog1p::log1p_c()` — 定义  `L19`
- `Clog1p::log1pf_c()` — 定义  `L24`
- `Clog1p::log1pl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/log1p.h (24 行)

### 宏 #define (1)
- `LOG1P_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_log1p::Clog1p  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clog1p()` （声明） `L9`
  - `~Clog1p()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double log1p_c(double x)` （声明） `L14`
  - `static float log1pf_c(float x)` （声明） `L15`
  - `static long double log1pl_c(long double x)` （声明） `L16`

## math/log2.cpp (44 行)

### 宏 #define (1)
- `LOG2_TEST` = 0  `L33`

### 函数 (7)
- `Clog2::my_init()` — 定义  `L2`
- `Clog2::Clog2()` — 定义  `L9`
- `Clog2::Clog2()` — 定义  `L14`
- `log2_c()` — 定义  `L19`
- `log2f_c()` — 定义  `L23`
- `log2l_c()` — 定义  `L27`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/log2.h (24 行)

### 宏 #define (1)
- `LOG2_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_log2::Clog2  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clog2()` （声明） `L9`
  - `~Clog2()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double log2_c(double x)` （声明） `L14`
  - `static float log2f_c(float x)` （声明） `L15`
  - `static long double log2l_c(long double x)` （声明） `L16`

## math/logb.cpp (46 行)

### 宏 #define (1)
- `LOGB_TEST` = 0  `L35`

### 函数 (7)
- `Clogb::my_init()` — 定义  `L2`
- `Clogb::Clogb()` — 定义  `L9`
- `Clogb::Clogb()` — 定义  `L14`
- `Clogb::logb_c()` — 定义  `L19`
- `Clogb::logbf_c()` — 定义  `L24`
- `Clogb::logbl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/logb.h (23 行)

### 宏 #define (1)
- `LOGB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_logb::Clogb  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clogb()` （声明） `L9`
  - `~Clogb()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double logb_c(double x)` （声明） `L14`
  - `static float logbf_c(float x)` （声明） `L15`
  - `static long double logbl_c(long double x)` （声明） `L16`

## math/lrint.cpp (44 行)

### 宏 #define (1)
- `LRINT_TEST` = 0  `L33`

### 函数 (7)
- `Clrint::my_init()` — 定义  `L2`
- `Clrint::Clrint()` — 定义  `L9`
- `Clrint::Clrint()` — 定义  `L14`
- `lrint_c()` — 定义  `L19`
- `lrintf_c()` — 定义  `L23`
- `lrintl_c()` — 定义  `L27`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/lrint.h (24 行)

### 宏 #define (1)
- `LRINT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_lrint::Clrint  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clrint()` （声明） `L9`
  - `~Clrint()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static long int lrint_c(double x)` （声明） `L14`
  - `static long int lrintf_c(float x)` （声明） `L15`
  - `static long int lrintl_c(long double x)` （声明） `L16`

## math/lround.cpp (46 行)

### 宏 #define (1)
- `LROUND_TEST` = 0  `L35`

### 函数 (7)
- `Clround::my_init()` — 定义  `L2`
- `Clround::Clround()` — 定义  `L9`
- `Clround::Clround()` — 定义  `L14`
- `Clround::lround_c()` — 定义  `L19`
- `Clround::lroundf_c()` — 定义  `L24`
- `Clround::lroundl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/lround.h (24 行)

### 宏 #define (1)
- `LROUND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_lround::Clround  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Clround()` （声明） `L9`
  - `~Clround()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `long int lround_c(double x)` （声明） `L14`
  - `long int lroundf_c(float x)` （声明） `L15`
  - `long int lroundl_c(long double x)` （声明） `L16`

## math/math_all_h_include.h (70 行)

### 宏 #define (1)
- `MATH_ALL_H_INCLUDE`（无值，通常为头文件守卫）  `L2`

## math/math_g_code.h (6 行)

### 宏 #define (1)
- `MATH_G_CODE_H`（无值，通常为头文件守卫）  `L2`

### 函数 (1)
- `math_add_objects()` — 声明  `L4`

> 完整签名见 JSON: `void math_add_objects(Object *p)`

## math/md5.cpp (246 行)

### 宏 #define (1)
- `MD5_TEST` = 0  `L223`

### 函数 (17)
- `Cmd5::my_init()` — 定义  `L2`
- `Cmd5::Cmd5()` — 定义  `L9`
- `Cmd5::Cmd5()` — 定义  `L14`
- `Cmd5::init()` — 定义  `L19`
- `Cmd5::update()` — 定义  `L29`
- `Cmd5::finalize()` — 定义  `L64`
- `Cmd5::step()` — 定义  `L96`
- `Cmd5::buffer()` — 定义  `L140`
- `Cmd5::str()` — 定义  `L152`
- `Cmd5::str()` — 定义  `L157`
- `Cmd5::file()` — 定义  `L162`
- `Cmd5::file()` — 定义  `L185`
- `Cmd5::file()` — 定义  `L190`
- `Cmd5::file()` — 定义  `L204`
- `Cmd5::display()` — 定义  `L209`
- `Cmd5::display()` — 定义  `L217`
- `main()` — 定义  `L228`

> 完整签名见 JSON。

### 全局变量 (1)
- `uint8_t PADDING` [static]  `L55`

## math/md5.h (82 行)

### 宏 #define (10)
- `MD5_H_H_`（无值，通常为头文件守卫）  `L2`
- `MD5_INPUT_LEN` = 64  `L6`
- `MD5_A` = 0x67452301  `L8`
- `MD5_B` = 0xefcdab89  `L9`
- `MD5_C` = 0x98badcfe  `L10`
- `MD5_D` = 0x10325476  `L11`
- `MD5_F` = (X, Y, Z) ((X & Y) | (~X & Z))  `L35`
- `MD5_G` = (X, Y, Z) ((X & Z) | (Y & ~Z))  `L36`
- `MD5_H` = (X, Y, Z) (X ^ Y ^ Z)  `L37`
- `MD5_I` = (X, Y, Z) (Y ^ (X | ~Z))  `L38`

### typedef / using (1)
- `typedef struct MD5Context`  `L42`

### 全局变量 (2)
- `uint32_t MD5_S` [static]  `L13`
- `uint32_t MD5_K` [static]  `L18`

### 类 (1)
#### n_md5::Cmd5  `L49`  `class`
- 继承: `Object`
- 成员变量 (1): `uint8_t md5_result`
- 方法 (18):
  - `Cmd5()` （声明） `L53`
  - `~Cmd5()` （声明） `L55`
  - `int my_init(void *p=nullptr)` （声明） `L56`
  - `size_t my_size()` （定义） `L57`
  - `uint32_t rotateLeft(uint32_t x, uint32_t n)` （定义） `L59`
  - `void init(MD5Context* ctx)` （声明） `L61`
  - `void update(MD5Context* ctx, uint8_t* input_buffer, size_t input_len)` （声明） `L62`
  - `void finalize(MD5Context* ctx)` （声明） `L63`
  - `void step(uint32_t* buffer, uint32_t* input)` （声明） `L64`
  - `int buffer(uint8_t * input, size_t input_len, uint8_t* result, int result_len)` （声明） `L66`
  - `int str(char* input, uint8_t* result, int len)` （声明） `L67`
  - `int str(char* input)` （声明） `L68`
  - `int file(FILE* file, uint8_t* result, int len)` （声明） `L69`
  - `int file(FILE* file)` （声明） `L70`
  - `int file(char* filename, uint8_t* result, int len)` （声明） `L71`
  - `int file(char* filename)` （声明） `L72`
  - `void display(uint8_t* p, int len, bool cr_lf = true)` （声明） `L74`
  - `void display(bool cr_lf = true)` （声明） `L75`

## math/modf.cpp (36 行)

### 宏 #define (1)
- `MODF_TEST` = 0  `L25`

### 函数 (5)
- `Cmodf::my_init()` — 定义  `L2`
- `Cmodf::Cmodf()` — 定义  `L9`
- `Cmodf::Cmodf()` — 定义  `L14`
- `modf_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cmodf::my_init(void *p)`、`Cmodf::Cmodf()`、`Cmodf::~Cmodf()`、`double Cmodf:: modf_c(double x, double* intpart)`、`int main(int argc, char *argv[])`

## math/modf.h (22 行)

### 宏 #define (1)
- `MODF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_modf::Cmodf  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cmodf()` （声明） `L9`
  - `~Cmodf()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double modf_c(double x, double* intpart)` （声明） `L14`

## math/nan.cpp (45 行)

### 宏 #define (1)
- `NAN_TEST` = 0  `L34`

### 函数 (7)
- `Cnan::my_init()` — 定义  `L2`
- `Cnan::Cnan()` — 定义  `L9`
- `Cnan::Cnan()` — 定义  `L14`
- `Cnan::nan_c()` — 定义  `L19`
- `Cnan::nanf_c()` — 定义  `L24`
- `Cnan::nanl_c()` — 定义  `L29`
- `main()` — 定义  `L39`

> 完整签名见 JSON。

## math/nan.h (26 行)

### 宏 #define (1)
- `NAN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_nan::Cnan  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cnan()` （声明） `L9`
  - `~Cnan()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double nan_c(const char* tagp)` （声明） `L14`
  - `static float nanf_c(const char* tagp)` （声明） `L15`
  - `static double nanl_c(const char* tagp)` （声明） `L16`

## math/nearbyint.cpp (46 行)

### 宏 #define (1)
- `NEARBYINT_TEST` = 0  `L35`

### 函数 (7)
- `Cnearbyint::my_init()` — 定义  `L2`
- `Cnearbyint::Cnearbyint()` — 定义  `L9`
- `Cnearbyint::Cnearbyint()` — 定义  `L14`
- `Cnearbyint::nearbyint_c()` — 定义  `L19`
- `Cnearbyint::nearbyintf_c()` — 定义  `L24`
- `Cnearbyint::nearbyintl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/nearbyint.h (24 行)

### 宏 #define (1)
- `NEARBYINT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_nearbyint::Cnearbyint  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cnearbyint()` （声明） `L9`
  - `~Cnearbyint()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double nearbyint_c(double x)` （声明） `L14`
  - `static float nearbyintf_c(float x)` （声明） `L15`
  - `static long double nearbyintl_c(long double x)` （声明） `L16`

## math/nextafter.cpp (46 行)

### 宏 #define (1)
- `NEXTAFTER_TEST` = 0  `L35`

### 函数 (7)
- `Cnextafter::my_init()` — 定义  `L2`
- `Cnextafter::Cnextafter()` — 定义  `L9`
- `Cnextafter::Cnextafter()` — 定义  `L14`
- `Cnextafter::nextafter_c()` — 定义  `L19`
- `Cnextafter::nextafterf_c()` — 定义  `L24`
- `Cnextafter::nextafterl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/nextafter.h (24 行)

### 宏 #define (1)
- `NEXTAFTER_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_nextafter::Cnextafter  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cnextafter()` （声明） `L9`
  - `~Cnextafter()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `double nextafter_c(double x, double y)` （声明） `L14`
  - `float nextafterf_c(float x, float y)` （声明） `L15`
  - `long double nextafterl_c(long double x, long double y)` （声明） `L16`

## math/nexttoward.cpp (45 行)

### 宏 #define (1)
- `NEXTTOWARD_TEST` = 0  `L34`

### 函数 (7)
- `Cnexttoward::my_init()` — 定义  `L2`
- `Cnexttoward::Cnexttoward()` — 定义  `L9`
- `Cnexttoward::Cnexttoward()` — 定义  `L14`
- `nexttoward_c()` — 定义  `L19`
- `nexttowardf_c()` — 定义  `L24`
- `nexttowardl_c()` — 定义  `L29`
- `main()` — 定义  `L39`

> 完整签名见 JSON。

## math/nexttoward.h (24 行)

### 宏 #define (1)
- `NEXTTOWARD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_nexttoward::Cnexttoward  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cnexttoward()` （声明） `L9`
  - `~Cnexttoward()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double nexttoward_c(double x, long double y)` （声明） `L14`
  - `static float nexttowardf_c(float x, long double y)` （声明） `L15`
  - `static long double nexttowardl_c(long double x, long double y)` （声明） `L16`

## math/pow.cpp (36 行)

### 宏 #define (1)
- `POW_TEST` = 0  `L25`

### 函数 (5)
- `Cpow::my_init()` — 定义  `L2`
- `Cpow::Cpow()` — 定义  `L9`
- `Cpow::Cpow()` — 定义  `L14`
- `Cpow::pow_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Cpow::my_init(void *p)`、`Cpow::Cpow()`、`Cpow::~Cpow()`、`double Cpow::pow_c(double base, double exponent)`、`int main(int argc, char *argv[])`

## math/pow.h (22 行)

### 宏 #define (1)
- `POW_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_pow::Cpow  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Cpow()` （声明） `L9`
  - `~Cpow()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double pow_c(double base, double exponent)` （声明） `L14`

## math/remainder.cpp (47 行)

### 宏 #define (1)
- `REMAINDER_TEST` = 0  `L36`

### 函数 (7)
- `Cremainder::my_init()` — 定义  `L2`
- `Cremainder::Cremainder()` — 定义  `L9`
- `Cremainder::Cremainder()` — 定义  `L14`
- `Cremainder::remainder_c()` — 定义  `L19`
- `Cremainder::remainderf_c()` — 定义  `L24`
- `Cremainder::remainderl_c()` — 定义  `L29`
- `main()` — 定义  `L41`

> 完整签名见 JSON。

## math/remainder.h (24 行)

### 宏 #define (1)
- `REMAINDER_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_remainder::Cremainder  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cremainder()` （声明） `L9`
  - `~Cremainder()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `double remainder_c(double numer, double denom)` （声明） `L14`
  - `float remainderf_c(float numer, float denom)` （声明） `L15`
  - `long double remainderl_c(long double numer, long double denom)` （声明） `L16`

## math/remquo.cpp (44 行)

### 宏 #define (1)
- `REMQUO_TEST` = 0  `L33`

### 函数 (7)
- `Cremquo::my_init()` — 定义  `L2`
- `Cremquo::Cremquo()` — 定义  `L9`
- `Cremquo::Cremquo()` — 定义  `L14`
- `Cremquo::remquo_c()` — 定义  `L19`
- `Cremquo::remquof_c()` — 定义  `L23`
- `Cremquo::remquol_c()` — 定义  `L27`
- `main()` — 定义  `L38`

> 完整签名见 JSON。

## math/remquo.h (24 行)

### 宏 #define (1)
- `REMQUO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_remquo::Cremquo  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cremquo()` （声明） `L9`
  - `~Cremquo()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `double remquo_c(double numer, double denom, int* quot)` （声明） `L14`
  - `float remquof_c(float numer, float denom, int* quot)` （声明） `L15`
  - `long double remquol_c(long double numer, long double denom, int* quot)` （声明） `L16`

## math/rint.cpp (45 行)

### 宏 #define (1)
- `RINT_TEST` = 0  `L34`

### 函数 (7)
- `Crint::my_init()` — 定义  `L2`
- `Crint::Crint()` — 定义  `L9`
- `Crint::Crint()` — 定义  `L14`
- `rint_c()` — 定义  `L19`
- `rintf_c()` — 定义  `L23`
- `rintl_c()` — 定义  `L27`
- `main()` — 定义  `L39`

> 完整签名见 JSON。

## math/rint.h (24 行)

### 宏 #define (1)
- `RINT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_rint::Crint  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Crint()` （声明） `L9`
  - `~Crint()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double rint_c(double x)` （声明） `L14`
  - `static float rintf_c(float x)` （声明） `L15`
  - `static long double rintl_c(long double x)` （声明） `L16`

## math/round.cpp (43 行)

### 宏 #define (1)
- `ROUND_TEST` = 0  `L32`

### 函数 (7)
- `Cround::my_init()` — 定义  `L2`
- `Cround::Cround()` — 定义  `L9`
- `Cround::Cround()` — 定义  `L14`
- `Cround::round_c()` — 定义  `L19`
- `Cround::roundf_c()` — 定义  `L23`
- `Cround::roundl_c()` — 定义  `L27`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/round.h (24 行)

### 宏 #define (1)
- `ROUND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_round::Cround  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cround()` （声明） `L9`
  - `~Cround()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double round_c(double x)` （声明） `L14`
  - `static float roundf_c(float x)` （声明） `L15`
  - `static long double roundl_c(long double x)` （声明） `L16`

## math/rsa.cpp (32 行)

### 宏 #define (1)
- `RSA_TEST` = 0  `L20`

### 函数 (4)
- `Crsa::my_init()` — 定义  `L2`
- `Crsa::Crsa()` — 定义  `L9`
- `Crsa::Crsa()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Crsa::my_init(void *p)`、`Crsa::Crsa()`、`Crsa::~Crsa()`、`int main(int argc, char *argv[])`

## math/rsa.h (20 行)

### 宏 #define (1)
- `RSA_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_rsa::Crsa  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Crsa()` （声明） `L9`
  - `~Crsa()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## math/scalbln.cpp (42 行)

### 宏 #define (1)
- `SCALBLN_TEST` = 0  `L31`

### 函数 (7)
- `Cscalbln::my_init()` — 定义  `L2`
- `Cscalbln::Cscalbln()` — 定义  `L9`
- `Cscalbln::Cscalbln()` — 定义  `L14`
- `Cscalbln::scalbln_c()` — 定义  `L18`
- `Cscalbln::scalblnf_c()` — 定义  `L22`
- `Cscalbln::scalblnl_c()` — 定义  `L26`
- `main()` — 定义  `L36`

> 完整签名见 JSON。

## math/scalbln.h (24 行)

### 宏 #define (1)
- `SCALBLN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_scalbln::Cscalbln  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cscalbln()` （声明） `L9`
  - `~Cscalbln()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double scalbln_c(double x, long int n)` （声明） `L14`
  - `static float scalblnf_c(float x, long int n)` （声明） `L15`
  - `static long double scalblnl_c(long double x, long int n)` （声明） `L16`

## math/scalbn.cpp (46 行)

### 宏 #define (1)
- `SCALBN_TEST` = 0  `L35`

### 函数 (7)
- `Cscalbn::my_init()` — 定义  `L2`
- `Cscalbn::Cscalbn()` — 定义  `L9`
- `Cscalbn::Cscalbn()` — 定义  `L14`
- `Cscalbn::scalbn_c()` — 定义  `L19`
- `Cscalbn::scalbnf_c()` — 定义  `L24`
- `Cscalbn::scalbnl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/scalbn.h (24 行)

### 宏 #define (1)
- `SCALBN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_scalbn::Cscalbn  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Cscalbn()` （声明） `L9`
  - `~Cscalbn()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `double scalbn_c(double x, int n)` （声明） `L14`
  - `float scalbnf_c(float x, int n)` （声明） `L15`
  - `long double scalbnl_c(long double x, int n)` （声明） `L16`

## math/sha.cpp (920 行)

### 宏 #define (23)
- `UNROLL_LOOPS`（无值，通常为头文件守卫）  `L5`
- `SHFR` = (x, n)    (x >> n)  `L105`
- `ROTR` = (x, n)   ((x >> n) | (x << ((sizeof (x) << 3) - n)))  `L106`
- `ROTL` = (x, n)   ((x << n) | (x >> ((sizeof (x) << 3) - n)))  `L107`
- `CH` = (x, y, z)  ((x & y) ^ (~x & z))  `L108`
- `MAJ` = (x, y, z) ((x & y) ^ (x & z) ^ (y & z))  `L109`
- `SHA256_F1` = (x) (ROTR(x,  2) ^ ROTR(x, 13) ^ ROTR(x, 22))  `L111`
- `SHA256_F2` = (x) (ROTR(x,  6) ^ ROTR(x, 11) ^ ROTR(x, 25))  `L112`
- `SHA256_F3` = (x) (ROTR(x,  7) ^ ROTR(x, 18) ^ SHFR(x,  3))  `L113`
- `SHA256_F4` = (x) (ROTR(x, 17) ^ ROTR(x, 19) ^ SHFR(x, 10))  `L114`
- `SHA512_F1` = (x) (ROTR(x, 28) ^ ROTR(x, 34) ^ ROTR(x, 39))  `L116`
- `SHA512_F2` = (x) (ROTR(x, 14) ^ ROTR(x, 18) ^ ROTR(x, 41))  `L117`
- `SHA512_F3` = (x) (ROTR(x,  1) ^ ROTR(x,  8) ^ SHFR(x,  7))  `L118`
- `SHA512_F4` = (x) (ROTR(x, 19) ^ ROTR(x, 61) ^ SHFR(x,  6))  `L119`
- `UNPACK32` = (x, str) { *((str) + 3) = (uint8) ((x)      ); *((str) + 2) = (uint…  `L127`
- `PACK32` = (str, x) { *(x) =   ((uint32) *((str) + 3)      ) | ((uint32) *((st…  `L135`
- `UNPACK64` = (x, str) { *((str) + 7) = (uint8) ((x)      ); *((str) + 6) = (uint…  `L147`
- `PACK64` = (str, x) { *(x) =   ((uint64) *((str) + 7)      ) | ((uint64) *((st…  `L159`
- `SHA256_SCR` = (i) { w[i] =  SHA256_F4(w[i -  2]) + w[i -  7] + SHA256_F3(w[i - 15…  `L167`
- `SHA512_SCR` = (i) { w[i] =  SHA512_F4(w[i -  2]) + w[i -  7] + SHA512_F3(w[i - 15…  `L173`
- `SHA256_EXP` = (a, b, c, d, e, f, g, h, j) { t1 = wv[h] + SHA256_F2(wv[e]) + CH(wv…  `L182`
- `SHA512_EXP` = (a, b, c, d, e, f, g ,h, j) { t1 = wv[h] + SHA512_F2(wv[e]) + CH(wv…  `L191`
- `SHA_TEST` = 0  `L900`

### 函数 (35)
- `Csha::my_init()` — 定义  `L8`
- `Csha::Csha()` — 定义  `L15`
- `Csha::Csha()` — 定义  `L20`
- `Csha::display()` — 定义  `L25`
- `Csha::sha224()` — 定义  `L33`
- `Csha::sha256()` — 定义  `L41`
- `Csha::sha384()` — 定义  `L49`
- `Csha::sha512()` — 定义  `L57`
- `Csha::sha224()` — 定义  `L65`
- `Csha::sha256()` — 定义  `L70`
- `Csha::sha384()` — 定义  `L75`
- `Csha::sha512()` — 定义  `L80`
- `Csha::sha224()` — 定义  `L85`
- `Csha::sha256()` — 定义  `L90`
- `Csha::sha384()` — 定义  `L95`
- `Csha::sha512()` — 定义  `L100`
- `Csha::sha256_transf()` — 定义  `L276`
- `Csha::sha512_transf()` — 定义  `L390`
- `Csha::sha224()` — 定义  `L487`
- `Csha::sha224_init()` — 定义  `L496`
- `Csha::sha224_update()` — 定义  `L514`
- `Csha::sha224_final()` — 定义  `L546`
- `Csha::sha256()` — 定义  `L590`
- `Csha::sha256_init()` — 定义  `L599`
- `Csha::sha256_update()` — 定义  `L617`
- `Csha::sha256_final()` — 定义  `L649`
- `Csha::sha384()` — 定义  `L694`
- `Csha::sha384_init()` — 定义  `L703`
- `Csha::sha384_update()` — 定义  `L721`
- `Csha::sha384_final()` — 定义  `L753`
- `Csha::sha512()` — 定义  `L796`
- `Csha::sha512_init()` — 定义  `L805`
- `Csha::sha512_update()` — 定义  `L823`
- `Csha::sha512_final()` — 定义  `L855`
- `main()` — 定义  `L905`

> 完整签名见 JSON。

### 全局变量 (6)
- `const uint32 sha224_h0` [static]  `L193`
- `const uint32 sha256_h0` [static]  `L197`
- `const uint64 sha384_h0` [static]  `L201`
- `const uint64 sha512_h0` [static]  `L207`
- `const uint32 sha256_k` [static]  `L213`
- `const uint64 sha512_k` [static]  `L231`

## math/sha.h (106 行)

### 宏 #define (9)
- `SHA_H`（无值，通常为头文件守卫）  `L2`
- `SHA224_DIGEST_SIZE` = ( 224 / 8)  `L6`
- `SHA256_DIGEST_SIZE` = ( 256 / 8)  `L7`
- `SHA384_DIGEST_SIZE` = ( 384 / 8)  `L8`
- `SHA512_DIGEST_SIZE` = ( 512 / 8)  `L9`
- `SHA256_BLOCK_SIZE` = ( 512 / 8)  `L11`
- `SHA512_BLOCK_SIZE` = (1024 / 8)  `L12`
- `SHA384_BLOCK_SIZE` = SHA512_BLOCK_SIZE  `L13`
- `SHA224_BLOCK_SIZE` = SHA256_BLOCK_SIZE  `L14`

### 枚举 enum class sha_type   `L35`
- sha224=SHA224_DIGEST_SIZE、sha256=SHA256_DIGEST_SIZE、sha384=SHA384_DIGEST_SIZE、sha512=SHA512_DIGEST_SIZE

### typedef / using (5)
- `typedef struct sha256_ctx`  `L18`
- `typedef struct sha512_ctx`  `L25`
- `typedef sha512_ctx sha384_ctx`  `L32`
- `typedef sha256_ctx sha224_ctx`  `L33`
- `typedef union u_digest;`  `L49`

### 类 (2)
#### n_sha::union_digest (typedef 别名 `u_digest`)  `L42`  `union`
- 成员变量 (5): `uint8 digest_data`、`uint8 digest_224`、`uint8 digest_256`、`uint8 digest_384`、`uint8 digest_512`

#### n_sha::Csha  `L51`  `class`
- 继承: `Object`
- 成员变量 (1): `u_digest digest`
- 方法 (35):
  - `Csha()` （声明） `L55`
  - `~Csha()` （声明） `L57`
  - `int my_init(void *p=nullptr)` （声明） `L58`
  - `size_t my_size()` （定义） `L59`
  - `void display(sha_type size= sha_type::sha512)` （声明） `L60`
  - `int sha224(char* filename)` （声明） `L61`
  - `int sha256(char* filename)` （声明） `L63`
  - `int sha384(char* filename)` （声明） `L64`
  - `int sha512(char* filename)` （声明） `L65`
  - `void sha224(const uint8* message, uint64 len)` （声明） `L66`
  - `void sha256(const uint8* message, uint64 len)` （声明） `L68`
  - `void sha384(const uint8* message, uint64 len)` （声明） `L69`
  - `void sha512(const uint8* message, uint64 len)` （声明） `L70`
  - `void sha224(char * message, uint64 len)` （声明） `L72`
  - `void sha256(char * message, uint64 len)` （声明） `L73`
  - `void sha384(char * message, uint64 len)` （声明） `L74`
  - `void sha512(char * message, uint64 len)` （声明） `L75`
  - `void sha256_transf(sha256_ctx* ctx, const uint8* message, uint64 block_nb)` （声明） `L77`
  - `void sha512_transf(sha512_ctx* ctx, const uint8* message, uint64 block_nb)` （声明） `L79`
  - `void sha224_init(sha224_ctx* ctx)` （声明） `L81`
  - `void sha224_update(sha224_ctx* ctx, const uint8* message, uint64 len)` （声明） `L82`
  - `void sha224_final(sha224_ctx* ctx, uint8* digest)` （声明） `L83`
  - `void sha224(const uint8* message, uint64 len, uint8* digest)` （声明） `L84`
  - `void sha256_init(sha256_ctx* ctx)` （声明） `L86`
  - `void sha256_update(sha256_ctx* ctx, const uint8* message, uint64 len)` （声明） `L87`
  - `void sha256_final(sha256_ctx* ctx, uint8* digest)` （声明） `L88`
  - `void sha256(const uint8* message, uint64 len, uint8* digest)` （声明） `L89`
  - `void sha384_init(sha384_ctx* ctx)` （声明） `L91`
  - `void sha384_update(sha384_ctx* ctx, const uint8* message, uint64 len)` （声明） `L92`
  - `void sha384_final(sha384_ctx* ctx, uint8* digest)` （声明） `L93`
  - `void sha384(const uint8* message, uint64 len, uint8* digest)` （声明） `L94`
  - `void sha512_init(sha512_ctx* ctx)` （声明） `L96`
  - `void sha512_update(sha512_ctx* ctx, const uint8* message, uint64 len)` （声明） `L97`
  - `void sha512_final(sha512_ctx* ctx, uint8* digest)` （声明） `L98`
  - `void sha512(const uint8* message, uint64 len, uint8* digest)` （声明） `L99`

## math/signbit.cpp (35 行)

### 宏 #define (1)
- `SIGNBIT_TEST` = 0  `L23`

### 函数 (5)
- `Csignbit::my_init()` — 定义  `L2`
- `Csignbit::Csignbit()` — 定义  `L9`
- `Csignbit::Csignbit()` — 定义  `L14`
- `Csignbit::signbit_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Csignbit::my_init(void *p)`、`Csignbit::Csignbit()`、`Csignbit::~Csignbit()`、`int Csignbit::signbit_c(double x)`、`int main(int argc, char *argv[])`

## math/signbit.h (21 行)

### 宏 #define (1)
- `SIGNBIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_signbit::Csignbit  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csignbit()` （声明） `L9`
  - `~Csignbit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static int signbit_c(double x)` （声明） `L14`

## math/sin.cpp (36 行)

### 宏 #define (1)
- `SIN_TEST` = 0  `L25`

### 函数 (5)
- `Csin::my_init()` — 定义  `L2`
- `Csin::Csin()` — 定义  `L9`
- `Csin::Csin()` — 定义  `L14`
- `Csin::sin_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Csin::my_init(void *p)`、`Csin::Csin()`、`Csin::~Csin()`、`double Csin::sin_c(double x)`、`int main(int argc, char *argv[])`

## math/sin.h (22 行)

### 宏 #define (1)
- `SIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sin::Csin  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csin()` （声明） `L9`
  - `~Csin()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double sin_c(double x)` （声明） `L14`

## math/sinh.cpp (34 行)

### 宏 #define (1)
- `SINH_TEST` = 0  `L23`

### 函数 (5)
- `Csinh::my_init()` — 定义  `L2`
- `Csinh::Csinh()` — 定义  `L9`
- `Csinh::Csinh()` — 定义  `L14`
- `Csinh::sinh_c()` — 定义  `L18`
- `main()` — 定义  `L28`

> 完整签名见 JSON: `int Csinh::my_init(void *p)`、`Csinh::Csinh()`、`Csinh::~Csinh()`、`double Csinh::sinh_c(double x)`、`int main(int argc, char *argv[])`

## math/sinh.h (22 行)

### 宏 #define (1)
- `SINH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sinh::Csinh  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csinh()` （声明） `L9`
  - `~Csinh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double sinh_c(double x)` （声明） `L14`

## math/sqrt.cpp (35 行)

### 宏 #define (1)
- `SQRT_TEST` = 0  `L24`

### 函数 (5)
- `Csqrt::my_init()` — 定义  `L2`
- `Csqrt::Csqrt()` — 定义  `L9`
- `Csqrt::Csqrt()` — 定义  `L14`
- `Csqrt::sqrt_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Csqrt::my_init(void *p)`、`Csqrt::Csqrt()`、`Csqrt::~Csqrt()`、`double Csqrt::sqrt_c(double x)`、`int main(int argc, char *argv[])`

## math/sqrt.h (22 行)

### 宏 #define (1)
- `SQRT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sqrt::Csqrt  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Csqrt()` （声明） `L9`
  - `~Csqrt()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double sqrt_c(double x)` （声明） `L14`

## math/sum.cpp (51 行)

### 宏 #define (1)
- `SUM_TEST` = 0  `L39`

### 函数 (6)
- `Csum::my_init()` — 定义  `L3`
- `Csum::Csum()` — 定义  `L10`
- `Csum::Csum()` — 定义  `L15`
- `Csum::byte()` — 定义  `L20`
- `Csum::byte()` — 定义  `L30`
- `main()` — 定义  `L44`

> 完整签名见 JSON: `int Csum::my_init(void *p)`、`Csum::Csum()`、`Csum::~Csum()`、`size_t Csum::byte(void * data, size_t size)`、`int Csum::byte(char* filename, size_t* result)`、`int main(int argc, char *argv[])`

## math/sum.h (23 行)

### 宏 #define (1)
- `SUM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_sum::Csum  `L7`  `class`
- 继承: `Object`
- 方法 (6):
  - `Csum()` （声明） `L9`
  - `~Csum()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `size_t byte(void* data, size_t size)` （声明） `L14`
  - `int byte(char* filename, size_t * result)` （声明） `L16`

## math/tan.cpp (36 行)

### 宏 #define (1)
- `TAN_TEST` = 0  `L25`

### 函数 (5)
- `Ctan::my_init()` — 定义  `L2`
- `Ctan::Ctan()` — 定义  `L9`
- `Ctan::Ctan()` — 定义  `L14`
- `Ctan::tan_c()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Ctan::my_init(void *p)`、`Ctan::Ctan()`、`Ctan::~Ctan()`、`double Ctan::tan_c(double x)`、`int main(int argc, char *argv[])`

## math/tan.h (22 行)

### 宏 #define (1)
- `TAN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tan::Ctan  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctan()` （声明） `L9`
  - `~Ctan()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double tan_c(double x)` （声明） `L14`

## math/tanh.cpp (35 行)

### 宏 #define (1)
- `TANH_TEST` = 0  `L24`

### 函数 (5)
- `Ctanh::my_init()` — 定义  `L2`
- `Ctanh::Ctanh()` — 定义  `L9`
- `Ctanh::Ctanh()` — 定义  `L14`
- `Ctanh::tanh_c()` — 定义  `L19`
- `main()` — 定义  `L29`

> 完整签名见 JSON: `int Ctanh::my_init(void *p)`、`Ctanh::Ctanh()`、`Ctanh::~Ctanh()`、`double Ctanh::tanh_c(double x)`、`int main(int argc, char *argv[])`

## math/tanh.h (22 行)

### 宏 #define (1)
- `TANH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tanh::Ctanh  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctanh()` （声明） `L9`
  - `~Ctanh()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double tanh_c(double x)` （声明） `L14`

## math/tgamma.cpp (43 行)

### 宏 #define (1)
- `TGAMMA_TEST` = 0  `L32`

### 函数 (7)
- `Ctgamma::my_init()` — 定义  `L2`
- `Ctgamma::Ctgamma()` — 定义  `L9`
- `Ctgamma::Ctgamma()` — 定义  `L14`
- `Ctgamma::tgamma_c()` — 定义  `L18`
- `Ctgamma::tgammaf_c()` — 定义  `L22`
- `Ctgamma::tgammal_c()` — 定义  `L26`
- `main()` — 定义  `L37`

> 完整签名见 JSON。

## math/tgamma.h (24 行)

### 宏 #define (1)
- `TGAMMA_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tgamma::Ctgamma  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Ctgamma()` （声明） `L9`
  - `~Ctgamma()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double tgamma_c(double x)` （声明） `L14`
  - `static float tgammaf_c(float x)` （声明） `L15`
  - `static long double tgammal_c(long double x)` （声明） `L16`

## math/trunc.cpp (46 行)

### 宏 #define (1)
- `TRUNC_TEST` = 0  `L35`

### 函数 (7)
- `Ctrunc::my_init()` — 定义  `L2`
- `Ctrunc::Ctrunc()` — 定义  `L9`
- `Ctrunc::Ctrunc()` — 定义  `L14`
- `Ctrunc::trunc_c()` — 定义  `L19`
- `Ctrunc::truncf_c()` — 定义  `L24`
- `Ctrunc::truncl_c()` — 定义  `L29`
- `main()` — 定义  `L40`

> 完整签名见 JSON。

## math/trunc.h (24 行)

### 宏 #define (1)
- `TRUNC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_trunc::Ctrunc  `L7`  `class`
- 继承: `Object`
- 方法 (7):
  - `Ctrunc()` （声明） `L9`
  - `~Ctrunc()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `static double trunc_c(double x)` （声明） `L14`
  - `static float truncf_c(float x)` （声明） `L15`
  - `static long double truncl_c(long double x)` （声明） `L16`
