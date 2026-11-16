# 模块 `global` 调用图

| 指标 | 数值 |
|---|---|
| functions | 6 |
| intra | 1 |
| out | 0 |
| in | 2 |
| unresolved | 0 |
| external | 0 |
| indirect | 0 |
| macro | 0 |
| callsites | 1 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `add_objects` | - | 2 |
| `Cglobal_code::my_init` | Cglobal_code | 1 |
| `Cglobal_code::~Cglobal_code` | Cglobal_code | 0 |
| `Cglobal_code::my_size` | Cglobal_code | 0 |
| `Cglobal_code::Cglobal_code` | Cglobal_code | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cglobal_code::Cglobal_code` | Cglobal_code | 1 |
| `Cglobal_code::~Cglobal_code` | Cglobal_code | 0 |
| `Cglobal_code::my_size` | Cglobal_code | 0 |
| `Cglobal_code::my_init` | Cglobal_code | 0 |
| `main` | - | 0 |
| `add_objects` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| object | 1 |
| test | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cglobal_code | 4 | 1 | 1 |
| 自由函数 | 2 | 0 | 2 |

未解析调用点: 0 | 外部(容器/库)调用点: 0 | 间接(函数指针)调用点: 0
