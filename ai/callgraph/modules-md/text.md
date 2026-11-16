# 模块 `text` 调用图

| 指标 | 数值 |
|---|---|
| functions | 52 |
| intra | 12 |
| out | 7 |
| in | 3 |
| unresolved | 0 |
| external | 9 |
| indirect | 0 |
| macro | 0 |
| callsites | 19 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctext_line::split_line` | Ctext_line | 2 |
| `Cline_range::set_size` | Cline_range | 2 |
| `TextEncode::my_name` | TextEncode | 1 |
| `TextEncode::isMe` | TextEncode | 1 |
| `Ctext::my_init` | Ctext | 1 |
| `Ctext_type::my_init` | Ctext_type | 1 |
| `Ctext_status::my_init` | Ctext_status | 1 |
| `Ctext_split::my_init` | Ctext_split | 1 |
| `Ctext_line::my_init` | Ctext_line | 1 |
| `Ctext_line::diff` | Ctext_line | 1 |
| `Ctext_encode::my_init` | Ctext_encode | 1 |
| `Ctext_attribute::my_init` | Ctext_attribute | 1 |
| `Ctext_action::my_init` | Ctext_action | 1 |
| `TextEncode::set_encode` | TextEncode | 0 |
| `Ctext::~Ctext` | Ctext | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctext_line::diff` | Ctext_line | 4 |
| `TextEncode::set_encode` | TextEncode | 2 |
| `Ctext_split::line` | Ctext_split | 2 |
| `Ctext_line::display` | Ctext_line | 2 |
| `Ctext::Ctext` | Ctext | 1 |
| `Ctext_type::Ctext_type` | Ctext_type | 1 |
| `Ctext_status::Ctext_status` | Ctext_status | 1 |
| `Ctext_split::Ctext_split` | Ctext_split | 1 |
| `Ctext_line::split_line` | Ctext_line | 1 |
| `Ctext_line::Ctext_line` | Ctext_line | 1 |
| `Ctext_encode::Ctext_encode` | Ctext_encode | 1 |
| `Ctext_attribute::Ctext_attribute` | Ctext_attribute | 1 |
| `Ctext_action::Ctext_action` | Ctext_action | 1 |
| `TextEncode::my_name` | TextEncode | 0 |
| `TextEncode::isMe` | TextEncode | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| memory | 6 |
| path | 1 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| file | 3 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cline_range | 4 | 0 | 2 |
| Ctext | 4 | 1 | 1 |
| Ctext_action | 4 | 1 | 1 |
| Ctext_attribute | 4 | 1 | 1 |
| Ctext_encode | 4 | 1 | 1 |
| Ctext_line | 7 | 8 | 4 |
| Ctext_split | 5 | 3 | 1 |
| Ctext_status | 4 | 1 | 1 |
| Ctext_type | 4 | 1 | 1 |
| TextEncode | 3 | 2 | 2 |
| 自由函数 | 9 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 9 | 间接(函数指针)调用点: 0
