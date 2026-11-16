# 模块 `path` 调用图

| 指标 | 数值 |
|---|---|
| functions | 10 |
| intra | 14 |
| out | 11 |
| in | 28 |
| unresolved | 9 |
| external | 57 |
| indirect | 0 |
| macro | 0 |
| callsites | 25 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cpath::push_back` | Cpath | 29 |
| `Cpath::list` | Cpath | 9 |
| `Cpath::display` | Cpath | 2 |
| `Cpath::my_clear` | Cpath | 1 |
| `Cpath::list_s` | Cpath | 1 |
| `Cpath::~Cpath` | Cpath | 0 |
| `Cpath::list_ws` | Cpath | 0 |
| `Cpath::execute` | Cpath | 0 |
| `Cpath::Cpath` | Cpath | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cpath::list` | Cpath | 13 |
| `Cpath::execute` | Cpath | 3 |
| `Cpath::display` | Cpath | 3 |
| `Cpath::push_back` | Cpath | 2 |
| `Cpath::~Cpath` | Cpath | 1 |
| `Cpath::my_clear` | Cpath | 1 |
| `Cpath::list_ws` | Cpath | 1 |
| `Cpath::list_s` | Cpath | 1 |
| `Cpath::Cpath` | Cpath | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 7 |
| memory | 4 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| object | 10 |
| algorithm | 6 |
| tree | 3 |
| task | 3 |
| time | 2 |
| build | 2 |
| code | 1 |
| text | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cpath | 9 | 25 | 42 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 9 | 外部(容器/库)调用点: 57 | 间接(函数指针)调用点: 0
