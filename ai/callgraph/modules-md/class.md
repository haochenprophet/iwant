# 模块 `class` 调用图

| 指标 | 数值 |
|---|---|
| functions | 7 |
| intra | 3 |
| out | 7 |
| in | 0 |
| unresolved | 0 |
| external | 6 |
| indirect | 0 |
| macro | 0 |
| callsites | 10 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cclass::my_init` | Cclass | 2 |
| `Cclass::create` | Cclass | 1 |
| `Cclass::~Cclass` | Cclass | 0 |
| `Cclass::func` | Cclass | 0 |
| `Cclass::deal_cmd` | Cclass | 0 |
| `Cclass::Cclass` | Cclass | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cclass::deal_cmd` | Cclass | 5 |
| `Cclass::create` | Cclass | 3 |
| `Cclass::Cclass` | Cclass | 2 |
| `Cclass::~Cclass` | Cclass | 0 |
| `Cclass::my_init` | Cclass | 0 |
| `Cclass::func` | Cclass | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| file | 4 |
| object | 3 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cclass | 6 | 10 | 3 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 6 | 间接(函数指针)调用点: 0
