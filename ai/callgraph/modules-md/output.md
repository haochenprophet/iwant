# 模块 `output` 调用图

| 指标 | 数值 |
|---|---|
| functions | 13 |
| intra | 17 |
| out | 0 |
| in | 1 |
| unresolved | 0 |
| external | 18 |
| indirect | 0 |
| macro | 0 |
| callsites | 17 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cdisplay::display_hex` | Cdisplay | 7 |
| `Cdisplay::dispay_space` | Cdisplay | 6 |
| `Cdisplay::dispay_data` | Cdisplay | 2 |
| `Cdisplay::my_init` | Cdisplay | 1 |
| `Cdisplay::display` | Cdisplay | 1 |
| `display_test` | - | 1 |
| `Cecho::echo` | Cecho | 0 |
| `Cecho::Cecho` | Cecho | 0 |
| `Cdisplay::Cdisplay` | Cdisplay | 0 |
| `Ccout::func` | Ccout | 0 |
| `Ccout::Ccout` | Ccout | 0 |
| `main` | - | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cdisplay::display_hex` | Cdisplay | 8 |
| `display_test` | - | 5 |
| `Cdisplay::display` | Cdisplay | 2 |
| `Cdisplay::Cdisplay` | Cdisplay | 1 |
| `main` | - | 1 |
| `Cecho::echo` | Cecho | 0 |
| `Cecho::Cecho` | Cecho | 0 |
| `Cdisplay::my_init` | Cdisplay | 0 |
| `Cdisplay::dispay_space` | Cdisplay | 0 |
| `Cdisplay::dispay_data` | Cdisplay | 0 |
| `Ccout::func` | Ccout | 0 |
| `Ccout::Ccout` | Ccout | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| file | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ccout | 2 | 0 | 0 |
| Cdisplay | 6 | 11 | 17 |
| Cecho | 2 | 0 | 0 |
| 自由函数 | 3 | 6 | 1 |

未解析调用点: 0 | 外部(容器/库)调用点: 18 | 间接(函数指针)调用点: 0
