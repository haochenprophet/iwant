# 模块 `engine` 调用图

| 指标 | 数值 |
|---|---|
| functions | 5 |
| intra | 1 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 0 |
| indirect | 0 |
| macro | 0 |
| callsites | 1 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cengine::my_init` | Cengine | 1 |
| `Cengine::~Cengine` | Cengine | 0 |
| `Cengine::my_size` | Cengine | 0 |
| `Cengine::Cengine` | Cengine | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cengine::Cengine` | Cengine | 1 |
| `Cengine::~Cengine` | Cengine | 0 |
| `Cengine::my_size` | Cengine | 0 |
| `Cengine::my_init` | Cengine | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cengine | 4 | 1 | 1 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 0 | 间接(函数指针)调用点: 0
