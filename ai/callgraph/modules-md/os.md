# 模块 `os` 调用图

| 指标 | 数值 |
|---|---|
| functions | 4 |
| intra | 2 |
| out | 0 |
| in | 0 |
| unresolved | 1 |
| external | 2 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cos::init_winsock` | Cos | 1 |
| `Cos::exit_winsock` | Cos | 1 |
| `Cos::~Cos` | Cos | 0 |
| `Cos::Cos` | Cos | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cos::~Cos` | Cos | 1 |
| `Cos::Cos` | Cos | 1 |
| `Cos::init_winsock` | Cos | 0 |
| `Cos::exit_winsock` | Cos | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cos | 4 | 2 | 2 |

未解析调用点: 1 | 外部(容器/库)调用点: 2 | 间接(函数指针)调用点: 0
