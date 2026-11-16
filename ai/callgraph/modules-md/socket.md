# 模块 `socket` 调用图

| 指标 | 数值 |
|---|---|
| functions | 16 |
| intra | 16 |
| out | 6 |
| in | 0 |
| unresolved | 0 |
| external | 34 |
| indirect | 0 |
| macro | 0 |
| callsites | 22 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Csocket::s_close` | Csocket | 12 |
| `Csocket::server` | Csocket | 2 |
| `Csocket::client` | Csocket | 2 |
| `Csocket::~Csocket` | Csocket | 0 |
| `Csocket::sizeof` | Csocket | 0 |
| `Csocket::s_socket` | Csocket | 0 |
| `Csocket::s_shutdown` | Csocket | 0 |
| `Csocket::s_send` | Csocket | 0 |
| `Csocket::s_recv` | Csocket | 0 |
| `Csocket::s_listen` | Csocket | 0 |
| `Csocket::s_connect` | Csocket | 0 |
| `Csocket::s_bind` | Csocket | 0 |
| `Csocket::s_accept` | Csocket | 0 |
| `Csocket::display` | Csocket | 0 |
| `Csocket::Csocket` | Csocket | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Csocket::server` | Csocket | 9 |
| `Csocket::client` | Csocket | 6 |
| `Csocket::~Csocket` | Csocket | 2 |
| `Csocket::Csocket` | Csocket | 2 |
| `main` | - | 2 |
| `Csocket::s_connect` | Csocket | 1 |
| `Csocket::sizeof` | Csocket | 0 |
| `Csocket::s_socket` | Csocket | 0 |
| `Csocket::s_shutdown` | Csocket | 0 |
| `Csocket::s_send` | Csocket | 0 |
| `Csocket::s_recv` | Csocket | 0 |
| `Csocket::s_listen` | Csocket | 0 |
| `Csocket::s_close` | Csocket | 0 |
| `Csocket::s_bind` | Csocket | 0 |
| `Csocket::s_accept` | Csocket | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 4 |
| my_sql | 2 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Csocket | 15 | 20 | 16 |
| 自由函数 | 1 | 2 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 34 | 间接(函数指针)调用点: 0
