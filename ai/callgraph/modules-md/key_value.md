# 模块 `key_value` 调用图

| 指标 | 数值 |
|---|---|
| functions | 10 |
| intra | 2 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 1 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `key_value::my_init` | key_value | 1 |
| `Ckey_value::my_init` | Ckey_value | 1 |
| `key_value::~key_value` | key_value | 0 |
| `key_value::set` | key_value | 0 |
| `key_value::key_value` | key_value | 0 |
| `key_value::is_me` | key_value | 0 |
| `Ckey_value::~Ckey_value` | Ckey_value | 0 |
| `Ckey_value::my_size` | Ckey_value | 0 |
| `Ckey_value::Ckey_value` | Ckey_value | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `key_value::key_value` | key_value | 1 |
| `Ckey_value::Ckey_value` | Ckey_value | 1 |
| `key_value::~key_value` | key_value | 0 |
| `key_value::set` | key_value | 0 |
| `key_value::my_init` | key_value | 0 |
| `key_value::is_me` | key_value | 0 |
| `Ckey_value::~Ckey_value` | Ckey_value | 0 |
| `Ckey_value::my_size` | Ckey_value | 0 |
| `Ckey_value::my_init` | Ckey_value | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ckey_value | 4 | 1 | 1 |
| key_value | 5 | 1 | 1 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 1 | 间接(函数指针)调用点: 0
