# 模块 `locate` 调用图

| 指标 | 数值 |
|---|---|
| functions | 6 |
| intra | 2 |
| out | 0 |
| in | 2 |
| unresolved | 0 |
| external | 0 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Clocate::line` | Clocate | 3 |
| `Clocate::my_init` | Clocate | 1 |
| `Clocate::~Clocate` | Clocate | 0 |
| `Clocate::my_size` | Clocate | 0 |
| `Clocate::Clocate` | Clocate | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Clocate::line` | Clocate | 1 |
| `Clocate::Clocate` | Clocate | 1 |
| `Clocate::~Clocate` | Clocate | 0 |
| `Clocate::my_size` | Clocate | 0 |
| `Clocate::my_init` | Clocate | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| algorithm | 2 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Clocate | 5 | 2 | 4 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 0 | 间接(函数指针)调用点: 0
