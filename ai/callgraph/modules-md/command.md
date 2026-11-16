# 模块 `command` 调用图

| 指标 | 数值 |
|---|---|
| functions | 12 |
| intra | 1 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 4 |
| indirect | 0 |
| macro | 0 |
| callsites | 1 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccommand::my_init` | Ccommand | 1 |
| `Crun::func` | Crun | 0 |
| `Crun::Crun` | Crun | 0 |
| `Cexit::func` | Cexit | 0 |
| `Cexit::exit_c` | Cexit | 0 |
| `Cexit::Cexit` | Cexit | 0 |
| `Cexec::Cexec` | Cexec | 0 |
| `Cesc::Cesc` | Cesc | 0 |
| `Ccommand::~Ccommand` | Ccommand | 0 |
| `Ccommand::my_size` | Ccommand | 0 |
| `Ccommand::Ccommand` | Ccommand | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccommand::Ccommand` | Ccommand | 1 |
| `Crun::func` | Crun | 0 |
| `Crun::Crun` | Crun | 0 |
| `Cexit::func` | Cexit | 0 |
| `Cexit::exit_c` | Cexit | 0 |
| `Cexit::Cexit` | Cexit | 0 |
| `Cexec::Cexec` | Cexec | 0 |
| `Cesc::Cesc` | Cesc | 0 |
| `Ccommand::~Ccommand` | Ccommand | 0 |
| `Ccommand::my_size` | Ccommand | 0 |
| `Ccommand::my_init` | Ccommand | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ccommand | 4 | 1 | 1 |
| Cesc | 1 | 0 | 0 |
| Cexec | 1 | 0 | 0 |
| Cexit | 3 | 0 | 0 |
| Crun | 2 | 0 | 0 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 4 | 间接(函数指针)调用点: 0
