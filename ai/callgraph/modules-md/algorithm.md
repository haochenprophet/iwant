# 模块 `algorithm` 调用图

| 指标 | 数值 |
|---|---|
| functions | 77 |
| intra | 75 |
| out | 49 |
| in | 2 |
| unresolved | 0 |
| external | 83 |
| indirect | 0 |
| macro | 0 |
| callsites | 124 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cinsert::insert` | Cinsert | 17 |
| `Cinsert::set` | Cinsert | 9 |
| `Cfind::find` | Cfind | 9 |
| `Creplace::replace` | Creplace | 8 |
| `CinsertParameter::clear` | CinsertParameter | 5 |
| `Creplace::analyze` | Creplace | 3 |
| `Creplace::add_parameter_list` | Creplace | 3 |
| `Cinsert::allot_memory` | Cinsert | 2 |
| `Cget::getStringX` | Cget | 2 |
| `Csearch::my_init` | Csearch | 1 |
| `Csearch::get_next` | Csearch | 1 |
| `Creplace::my_init` | Creplace | 1 |
| `Creplace::build_map` | Creplace | 1 |
| `Cistring::my_init` | Cistring | 1 |
| `Cinsert::my_init` | Cinsert | 1 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cinsert::insert` | Cinsert | 43 |
| `Creplace::replace` | Creplace | 29 |
| `Creplace::analyze` | Creplace | 6 |
| `Cinsert::set` | Cinsert | 5 |
| `Creplace::add_parameter_list` | Creplace | 4 |
| `replace_test` | - | 4 |
| `Creplace::build_map` | Creplace | 3 |
| `Cget::Cget` | Cget | 3 |
| `Cfind::find` | Cfind | 3 |
| `Creplace::list_map` | Creplace | 2 |
| `Cget::getLine` | Cget | 2 |
| `Cfind::find_to_list` | Cfind | 2 |
| `Csearch::searchKmp` | Csearch | 1 |
| `Csearch::Csearch` | Csearch | 1 |
| `Creplace::~Creplace` | Creplace | 1 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 18 |
| file | 17 |
| path | 6 |
| memory | 6 |
| locate | 2 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| file | 2 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| CLocationRange | 2 | 0 | 0 |
| Calgorithm | 4 | 1 | 1 |
| Ccompare | 5 | 1 | 1 |
| Ccopy | 3 | 1 | 1 |
| Cfind | 5 | 6 | 10 |
| Cget | 18 | 10 | 8 |
| Cinsert | 7 | 50 | 29 |
| CinsertParameter | 5 | 1 | 7 |
| Cistring | 3 | 1 | 1 |
| Creplace | 8 | 46 | 16 |
| CreplaceParameter | 2 | 0 | 0 |
| Csearch | 5 | 2 | 2 |
| 自由函数 | 10 | 5 | 1 |

未解析调用点: 0 | 外部(容器/库)调用点: 83 | 间接(函数指针)调用点: 0
