# 模块 `ctime` 调用图

| 指标 | 数值 |
|---|---|
| functions | 59 |
| intra | 9 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 7 |
| indirect | 0 |
| macro | 0 |
| callsites | 9 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctime::my_init` | Ctime | 1 |
| `Cstrftime::my_init` | Cstrftime | 1 |
| `Cmktime::my_init` | Cmktime | 1 |
| `Clocaltime::my_init` | Clocaltime | 1 |
| `Cgmtime::my_init` | Cgmtime | 1 |
| `Cdifftime::my_init` | Cdifftime | 1 |
| `Cctime::my_init` | Cctime | 1 |
| `Cclock::my_init` | Cclock | 1 |
| `Casctime::my_init` | Casctime | 1 |
| `Ctime::~Ctime` | Ctime | 0 |
| `Ctime::time_c` | Ctime | 0 |
| `Ctime::my_size` | Ctime | 0 |
| `Ctime::Ctime` | Ctime | 0 |
| `Cstrftime::~Cstrftime` | Cstrftime | 0 |
| `Cstrftime::strftime_c` | Cstrftime | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctime::Ctime` | Ctime | 1 |
| `Cstrftime::Cstrftime` | Cstrftime | 1 |
| `Cmktime::Cmktime` | Cmktime | 1 |
| `Clocaltime::Clocaltime` | Clocaltime | 1 |
| `Cgmtime::Cgmtime` | Cgmtime | 1 |
| `Cdifftime::Cdifftime` | Cdifftime | 1 |
| `Cctime::Cctime` | Cctime | 1 |
| `Cclock::Cclock` | Cclock | 1 |
| `Casctime::Casctime` | Casctime | 1 |
| `Ctime::~Ctime` | Ctime | 0 |
| `Ctime::time_c` | Ctime | 0 |
| `Ctime::my_size` | Ctime | 0 |
| `Ctime::my_init` | Ctime | 0 |
| `Cstrftime::~Cstrftime` | Cstrftime | 0 |
| `Cstrftime::strftime_c` | Cstrftime | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Casctime | 5 | 1 | 1 |
| Cclock | 5 | 1 | 1 |
| Cctime | 5 | 1 | 1 |
| Cdifftime | 5 | 1 | 1 |
| Cgmtime | 5 | 1 | 1 |
| Clocaltime | 5 | 1 | 1 |
| Cmktime | 5 | 1 | 1 |
| Cstrftime | 5 | 1 | 1 |
| Ctime | 5 | 1 | 1 |
| 自由函数 | 14 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 7 | 间接(函数指针)调用点: 0
