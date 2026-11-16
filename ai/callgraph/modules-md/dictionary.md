# 模块 `dictionary` 调用图

| 指标 | 数值 |
|---|---|
| functions | 6 |
| intra | 2 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 0 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Chello::my_init` | Chello | 1 |
| `Cdictionary::my_init` | Cdictionary | 1 |
| `Chello::~Chello` | Chello | 0 |
| `Chello::Chello` | Chello | 0 |
| `Cdictionary::~Cdictionary` | Cdictionary | 0 |
| `Cdictionary::Cdictionary` | Cdictionary | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Chello::Chello` | Chello | 1 |
| `Cdictionary::Cdictionary` | Cdictionary | 1 |
| `Chello::~Chello` | Chello | 0 |
| `Chello::my_init` | Chello | 0 |
| `Cdictionary::~Cdictionary` | Cdictionary | 0 |
| `Cdictionary::my_init` | Cdictionary | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cdictionary | 3 | 1 | 1 |
| Chello | 3 | 1 | 1 |

未解析调用点: 0 | 外部(容器/库)调用点: 0 | 间接(函数指针)调用点: 0
