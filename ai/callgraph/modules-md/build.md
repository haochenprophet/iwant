# 模块 `build` 调用图

| 指标 | 数值 |
|---|---|
| functions | 10 |
| intra | 6 |
| out | 6 |
| in | 0 |
| unresolved | 0 |
| external | 3 |
| indirect | 0 |
| macro | 0 |
| callsites | 12 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cbuild_makefile::add_define` | Cbuild_makefile | 2 |
| `Cbuild_makefile::add_block` | Cbuild_makefile | 2 |
| `Cbuild::my_init` | Cbuild | 1 |
| `Cbuild_makefile::my_init` | Cbuild_makefile | 1 |
| `Cbuild::Cbuild` | Cbuild | 0 |
| `Cbuild_makefile::~Cbuild_makefile` | Cbuild_makefile | 0 |
| `Cbuild_makefile::my_size` | Cbuild_makefile | 0 |
| `Cbuild_makefile::display` | Cbuild_makefile | 0 |
| `Cbuild_makefile::Cbuild_makefile` | Cbuild_makefile | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cbuild_makefile::display` | Cbuild_makefile | 4 |
| `main` | - | 4 |
| `Cbuild::Cbuild` | Cbuild | 1 |
| `Cbuild_makefile::add_define` | Cbuild_makefile | 1 |
| `Cbuild_makefile::add_block` | Cbuild_makefile | 1 |
| `Cbuild_makefile::Cbuild_makefile` | Cbuild_makefile | 1 |
| `Cbuild::my_init` | Cbuild | 0 |
| `Cbuild_makefile::~Cbuild_makefile` | Cbuild_makefile | 0 |
| `Cbuild_makefile::my_size` | Cbuild_makefile | 0 |
| `Cbuild_makefile::my_init` | Cbuild_makefile | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| memory | 4 |
| path | 2 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cbuild | 2 | 1 | 1 |
| Cbuild_makefile | 7 | 7 | 5 |
| 自由函数 | 1 | 4 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 3 | 间接(函数指针)调用点: 0
