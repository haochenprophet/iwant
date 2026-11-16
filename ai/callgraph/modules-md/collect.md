# 模块 `collect` 调用图

| 指标 | 数值 |
|---|---|
| functions | 12 |
| intra | 4 |
| out | 2 |
| in | 0 |
| unresolved | 0 |
| external | 6 |
| indirect | 0 |
| macro | 0 |
| callsites | 6 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccollect_file::collect` | Ccollect_file | 2 |
| `Ccollect::my_init` | Ccollect | 1 |
| `Ccollect_file::my_init` | Ccollect_file | 1 |
| `Ccollect::~Ccollect` | Ccollect | 0 |
| `Ccollect::my_size` | Ccollect | 0 |
| `Ccollect::Ccollect` | Ccollect | 0 |
| `Ccollect_file::~Ccollect_file` | Ccollect_file | 0 |
| `Ccollect_file::my_size` | Ccollect_file | 0 |
| `Ccollect_file::func` | Ccollect_file | 0 |
| `Ccollect_file::Ccollect_file` | Ccollect_file | 0 |
| `main` | - | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccollect_file::func` | Ccollect_file | 2 |
| `main` | - | 2 |
| `Ccollect::Ccollect` | Ccollect | 1 |
| `Ccollect_file::Ccollect_file` | Ccollect_file | 1 |
| `Ccollect::~Ccollect` | Ccollect | 0 |
| `Ccollect::my_size` | Ccollect | 0 |
| `Ccollect::my_init` | Ccollect | 0 |
| `Ccollect_file::~Ccollect_file` | Ccollect_file | 0 |
| `Ccollect_file::my_size` | Ccollect_file | 0 |
| `Ccollect_file::my_init` | Ccollect_file | 0 |
| `Ccollect_file::collect` | Ccollect_file | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 2 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ccollect | 4 | 1 | 1 |
| Ccollect_file | 6 | 3 | 3 |
| 自由函数 | 2 | 2 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 6 | 间接(函数指针)调用点: 0
