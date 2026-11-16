# 模块 `uuid` 调用图

| 指标 | 数值 |
|---|---|
| functions | 8 |
| intra | 2 |
| out | 0 |
| in | 1 |
| unresolved | 2 |
| external | 1 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ouuid::create_uuid` | Ouuid | 2 |
| `Ouuid::create` | Ouuid | 1 |
| `Ouuid::~Ouuid` | Ouuid | 0 |
| `Ouuid::operator ==` | Ouuid | 0 |
| `Ouuid::Ouuid` | Ouuid | 0 |
| `Cuuid::~Cuuid` | Cuuid | 0 |
| `Cuuid::Cuuid` | Cuuid | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ouuid::create` | Ouuid | 1 |
| `Ouuid::Ouuid` | Ouuid | 1 |
| `Ouuid::~Ouuid` | Ouuid | 0 |
| `Ouuid::operator ==` | Ouuid | 0 |
| `Ouuid::create_uuid` | Ouuid | 0 |
| `Cuuid::~Cuuid` | Cuuid | 0 |
| `Cuuid::Cuuid` | Cuuid | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| my_sql | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cuuid | 2 | 0 | 0 |
| Ouuid | 5 | 2 | 3 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 2 | 外部(容器/库)调用点: 1 | 间接(函数指针)调用点: 0
