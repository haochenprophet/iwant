# 模块 `task` 调用图

| 指标 | 数值 |
|---|---|
| functions | 12 |
| intra | 2 |
| out | 3 |
| in | 0 |
| unresolved | 0 |
| external | 7 |
| indirect | 0 |
| macro | 0 |
| callsites | 5 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctask::free_task_list` | Ctask | 1 |
| `Ctask::Ctask` | Ctask | 1 |
| `Ctask::~Ctask` | Ctask | 0 |
| `Ctask::t_stop` | Ctask | 0 |
| `Ctask::t_run` | Ctask | 0 |
| `Ctask::t_pend` | Ctask | 0 |
| `Ctask::t_continue` | Ctask | 0 |
| `Ctask::t_complete` | Ctask | 0 |
| `Ctask::t_break` | Ctask | 0 |
| `Ctask::create` | Ctask | 0 |
| `Ctask::add_depend` | Ctask | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctask::create` | Ctask | 3 |
| `Ctask::~Ctask` | Ctask | 1 |
| `Ctask::add_depend` | Ctask | 1 |
| `Ctask::t_stop` | Ctask | 0 |
| `Ctask::t_run` | Ctask | 0 |
| `Ctask::t_pend` | Ctask | 0 |
| `Ctask::t_continue` | Ctask | 0 |
| `Ctask::t_complete` | Ctask | 0 |
| `Ctask::t_break` | Ctask | 0 |
| `Ctask::free_task_list` | Ctask | 0 |
| `Ctask::Ctask` | Ctask | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| path | 3 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ctask | 11 | 5 | 2 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 7 | 间接(函数指针)调用点: 0
