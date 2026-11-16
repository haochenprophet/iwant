# 模块 `math` 调用图

| 指标 | 数值 |
|---|---|
| functions | 558 |
| intra | 414 |
| out | 5 |
| in | 0 |
| unresolved | 114 |
| external | 71 |
| indirect | 0 |
| macro | 269 |
| callsites | 419 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `#SHA512_SCR` | - | 65 |
| `#SHA256_EXP` | - | 64 |
| `#SHA256_SCR` | - | 49 |
| `#UNPACK64` | - | 20 |
| `#UNPACK32` | - | 17 |
| `#PACK64` | - | 17 |
| `#PACK32` | - | 17 |
| `#SHA512_EXP` | - | 8 |
| `Csha::sha512_transf` | Csha | 6 |
| `Csha::sha256_transf` | Csha | 6 |
| `Csha::sha512` | Csha | 4 |
| `Csha::sha384` | Csha | 3 |
| `Csha::sha256` | Csha | 3 |
| `Csha::sha224` | Csha | 3 |
| `Cmd5::update` | Cmd5 | 3 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Csha::sha256_transf` | Csha | 134 |
| `Csha::sha512_transf` | Csha | 94 |
| `Ccrc::execute` | Ccrc | 23 |
| `Csha::sha512_final` | Csha | 11 |
| `Csha::sha256_final` | Csha | 11 |
| `Csha::sha224_final` | Csha | 10 |
| `Csha::sha384_final` | Csha | 9 |
| `Csha::sha512` | Csha | 7 |
| `Csha::sha384` | Csha | 7 |
| `Csha::sha256` | Csha | 7 |
| `Csha::sha224` | Csha | 7 |
| `Cmd5::file` | Cmd5 | 6 |
| `Cmd5::step` | Cmd5 | 5 |
| `Cmd5::buffer` | Cmd5 | 3 |
| `Csum::byte` | Csum | 2 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| file | 5 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cabs | 5 | 1 | 1 |
| Cacos | 5 | 1 | 1 |
| Cacosh | 7 | 1 | 1 |
| Casin | 5 | 1 | 1 |
| Casinh | 7 | 1 | 1 |
| Catan | 5 | 1 | 1 |
| Catan2 | 5 | 1 | 1 |
| Catanh | 7 | 1 | 1 |
| Ccbrt | 7 | 1 | 1 |
| Cceil | 5 | 1 | 1 |
| Ccmath | 5 | 2 | 1 |
| Ccopysign | 7 | 1 | 1 |
| Ccos | 5 | 1 | 1 |
| Ccosh | 5 | 1 | 1 |
| Ccrc | 26 | 24 | 24 |
| Cerf | 7 | 1 | 1 |
| Cerfc | 7 | 1 | 1 |
| Cexp | 5 | 1 | 1 |
| Cexp2 | 7 | 1 | 1 |
| Cexpm1 | 7 | 1 | 1 |
| Cfabs | 5 | 1 | 1 |
| Cfdim | 7 | 1 | 1 |
| Cfloor | 5 | 1 | 1 |
| Cfma | 7 | 1 | 1 |
| Cfmax | 7 | 1 | 1 |
| Cfmin | 7 | 1 | 1 |
| Cfmod | 5 | 1 | 1 |
| Cfpclassify | 5 | 1 | 1 |
| Cfrexp | 5 | 1 | 1 |
| Chypot | 7 | 1 | 1 |
| Cilogb | 7 | 1 | 1 |
| Cldexp | 5 | 1 | 1 |
| Clgamma | 7 | 1 | 1 |
| Cllrint | 7 | 1 | 1 |
| Cllround | 7 | 1 | 1 |
| Clog | 5 | 1 | 1 |
| Clog10 | 5 | 1 | 1 |
| Clog1p | 7 | 1 | 1 |
| Clog2 | 7 | 1 | 1 |
| Clogb | 7 | 1 | 1 |
| Clrint | 7 | 1 | 1 |
| Clround | 7 | 1 | 1 |
| Cmath | 1 | 0 | 0 |
| Cmd5 | 13 | 21 | 18 |
| Cmodf | 5 | 1 | 1 |
| Cnan | 7 | 1 | 1 |
| Cnearbyint | 7 | 1 | 1 |
| Cnextafter | 7 | 1 | 1 |
| Cnexttoward | 7 | 1 | 1 |
| Cpow | 5 | 1 | 1 |
| Cremainder | 7 | 1 | 1 |
| Cremquo | 7 | 1 | 1 |
| Crint | 7 | 1 | 1 |
| Cround | 7 | 1 | 1 |
| Crsa | 4 | 1 | 1 |
| Cscalbln | 7 | 1 | 1 |
| Cscalbn | 7 | 1 | 1 |
| Csha | 23 | 306 | 38 |
| Csignbit | 5 | 1 | 1 |
| Csin | 5 | 1 | 1 |
| Csinh | 5 | 1 | 1 |
| Csqrt | 5 | 1 | 1 |
| Csum | 5 | 3 | 2 |
| Ctan | 5 | 1 | 1 |
| Ctanh | 5 | 1 | 1 |
| Ctgamma | 7 | 1 | 1 |
| Ctrunc | 7 | 1 | 1 |
| 自由函数 | 111 | 2 | 270 |

未解析调用点: 114 | 外部(容器/库)调用点: 71 | 间接(函数指针)调用点: 0
