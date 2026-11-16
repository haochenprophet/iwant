# 模块 `file` 调用图

| 指标 | 数值 |
|---|---|
| functions | 47 |
| intra | 81 |
| out | 35 |
| in | 55 |
| unresolved | 7 |
| external | 137 |
| indirect | 0 |
| macro | 0 |
| callsites | 116 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cfile::f_append` | Cfile | 32 |
| `Cfile::f_read` | Cfile | 24 |
| `Cfile::f_write` | Cfile | 6 |
| `Cfile::replace` | Cfile | 5 |
| `CfileAllot::allot` | CfileAllot | 5 |
| `Cfile::is_exist` | Cfile | 4 |
| `Cfile::f_size` | Cfile | 4 |
| `Cfile::cut` | Cfile | 4 |
| `Cfile::create` | Cfile | 4 |
| `CfileMem::clear` | CfileMem | 4 |
| `CfileAllot::my_init` | CfileAllot | 3 |
| `CfileAllot::freeMe` | CfileAllot | 3 |
| `CfileAllot::clear` | CfileAllot | 3 |
| `Cfile::swap` | Cfile | 2 |
| `Cfile::my_init` | Cfile | 2 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cfile::do_action` | Cfile | 42 |
| `CfileAllot::CfileAllot` | CfileAllot | 8 |
| `Cfile::f_append` | Cfile | 5 |
| `Cfile::deal_cmd` | Cfile | 5 |
| `CfileAllot::allot` | CfileAllot | 5 |
| `Cfile::set_action_parameter` | Cfile | 4 |
| `Cfile::different` | Cfile | 4 |
| `Cfile::swap` | Cfile | 3 |
| `Cfile::md5` | Cfile | 3 |
| `Cfile::compare` | Cfile | 3 |
| `Cfile::Cfile` | Cfile | 3 |
| `Cfile::f_write` | Cfile | 2 |
| `Cfile::f_read` | Cfile | 2 |
| `Cfile::f_find` | Cfile | 2 |
| `Cfile::cut` | Cfile | 2 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 28 |
| text | 3 |
| algorithm | 2 |
| memory | 1 |
| output | 1 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| code | 26 |
| algorithm | 17 |
| math | 5 |
| class | 4 |
| main | 2 |
| stock | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cfile | 34 | 95 | 115 |
| CfileAllot | 9 | 20 | 17 |
| CfileMem | 2 | 1 | 4 |
| 自由函数 | 2 | 0 | 0 |

未解析调用点: 7 | 外部(容器/库)调用点: 137 | 间接(函数指针)调用点: 0
