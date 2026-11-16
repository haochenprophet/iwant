# 模块 `iwant` 调用图

| 指标 | 数值 |
|---|---|
| functions | 6 |
| intra | 1 |
| out | 24 |
| in | 0 |
| unresolved | 1 |
| external | 22 |
| indirect | 0 |
| macro | 0 |
| callsites | 25 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `add_me_test` | - | 1 |
| `Ciwant::~Ciwant` | Ciwant | 0 |
| `Ciwant::who` | Ciwant | 0 |
| `Ciwant::Ciwant` | Ciwant | 0 |
| `main` | - | 0 |
| `iwant_func` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `main` | - | 18 |
| `add_me_test` | - | 7 |
| `Ciwant::~Ciwant` | Ciwant | 0 |
| `Ciwant::who` | Ciwant | 0 |
| `Ciwant::Ciwant` | Ciwant | 0 |
| `iwant_func` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 24 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ciwant | 3 | 0 | 0 |
| 自由函数 | 3 | 25 | 1 |

未解析调用点: 1 | 外部(容器/库)调用点: 22 | 间接(函数指针)调用点: 0
