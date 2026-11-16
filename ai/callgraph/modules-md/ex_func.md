# 模块 `ex_func` 调用图

| 指标 | 数值 |
|---|---|
| functions | 6 |
| intra | 1 |
| out | 0 |
| in | 3 |
| unresolved | 0 |
| external | 9 |
| indirect | 0 |
| macro | 0 |
| callsites | 1 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `wait_char_abcd` | - | 2 |
| `Cex_func::my_init` | Cex_func | 1 |
| `time_cmd` | - | 1 |
| `Cex_func::Cex_func` | Cex_func | 0 |
| `runcmd` | - | 0 |
| `rename_cmd` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cex_func::Cex_func` | Cex_func | 1 |
| `Cex_func::my_init` | Cex_func | 0 |
| `wait_char_abcd` | - | 0 |
| `time_cmd` | - | 0 |
| `runcmd` | - | 0 |
| `rename_cmd` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| stock | 2 |
| time | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cex_func | 2 | 1 | 1 |
| 自由函数 | 4 | 0 | 3 |

未解析调用点: 0 | 外部(容器/库)调用点: 9 | 间接(函数指针)调用点: 0
