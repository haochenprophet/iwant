# 模块 `data` 调用图

| 指标 | 数值 |
|---|---|
| functions | 32 |
| intra | 465 |
| out | 0 |
| in | 0 |
| unresolved | 8 |
| external | 26 |
| indirect | 0 |
| macro | 0 |
| callsites | 465 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Udata::cmp` | Udata | 222 |
| `Udata::set` | Udata | 66 |
| `Udata::or_` | Udata | 62 |
| `Udata::and_` | Udata | 62 |
| `Udata::get` | Udata | 30 |
| `Udata::cmp_t` | Udata | 15 |
| `Udata::not_by_type` | Udata | 2 |
| `Udata::set_by_type` | Udata | 1 |
| `Udata::or_by_type` | Udata | 1 |
| `Udata::not_` | Udata | 1 |
| `Udata::get_by_type` | Udata | 1 |
| `Udata::cmp_by_type` | Udata | 1 |
| `Udata::and_by_type` | Udata | 1 |
| `Udata::runme` | Udata | 0 |
| `Udata::or_t` | Udata | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Udata::operator =` | Udata | 34 |
| `Udata::operator ||` | Udata | 32 |
| `Udata::operator >=` | Udata | 32 |
| `Udata::operator >` | Udata | 32 |
| `Udata::operator ==` | Udata | 32 |
| `Udata::operator <=` | Udata | 32 |
| `Udata::operator <` | Udata | 32 |
| `Udata::operator &&` | Udata | 32 |
| `Udata::operator !=` | Udata | 32 |
| `Udata::set_by_type` | Udata | 30 |
| `Udata::or_by_type` | Udata | 30 |
| `Udata::get_by_type` | Udata | 30 |
| `Udata::cmp_by_type` | Udata | 30 |
| `Udata::and_by_type` | Udata | 30 |
| `Udata::cmp` | Udata | 15 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cdata | 1 | 0 | 0 |
| CdataTypeToken | 1 | 0 | 0 |
| Udata | 27 | 465 | 465 |
| 自由函数 | 3 | 0 | 0 |

未解析调用点: 8 | 外部(容器/库)调用点: 26 | 间接(函数指针)调用点: 0
