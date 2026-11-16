# 模块 `main` 调用图

| 指标 | 数值 |
|---|---|
| functions | 7 |
| intra | 4 |
| out | 8 |
| in | 0 |
| unresolved | 0 |
| external | 6 |
| indirect | 0 |
| macro | 0 |
| callsites | 12 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cmain::my_init` | Cmain | 1 |
| `Cmain::is_exist_main` | Cmain | 1 |
| `Cmain::do_action` | Cmain | 1 |
| `Cmain::create_main_cmd` | Cmain | 1 |
| `Cmain::deal_cmd` | Cmain | 0 |
| `Cmain::Cmain` | Cmain | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cmain::create_main_cmd` | Cmain | 5 |
| `Cmain::deal_cmd` | Cmain | 4 |
| `Cmain::is_exist_main` | Cmain | 1 |
| `Cmain::do_action` | Cmain | 1 |
| `Cmain::Cmain` | Cmain | 1 |
| `Cmain::my_init` | Cmain | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 6 |
| file | 2 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cmain | 6 | 12 | 4 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 6 | 间接(函数指针)调用点: 0
