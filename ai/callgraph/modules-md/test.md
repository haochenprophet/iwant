# 模块 `test` 调用图

| 指标 | 数值 |
|---|---|
| functions | 4 |
| intra | 1 |
| out | 2 |
| in | 0 |
| unresolved | 0 |
| external | 1 |
| indirect | 0 |
| macro | 0 |
| callsites | 3 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctest::my_init` | Ctest | 1 |
| `Ctest::~Ctest` | Ctest | 0 |
| `Ctest::Ctest` | Ctest | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `main` | - | 2 |
| `Ctest::Ctest` | Ctest | 1 |
| `Ctest::~Ctest` | Ctest | 0 |
| `Ctest::my_init` | Ctest | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| global | 1 |
| object | 1 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ctest | 3 | 1 | 1 |
| 自由函数 | 1 | 2 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 1 | 间接(函数指针)调用点: 0
