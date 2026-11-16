# 模块 `my_sql` 调用图

| 指标 | 数值 |
|---|---|
| functions | 29 |
| intra | 54 |
| out | 14 |
| in | 108 |
| unresolved | 4 |
| external | 46 |
| indirect | 0 |
| macro | 0 |
| callsites | 68 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cmy_sql::execute` | Cmy_sql | 86 |
| `Cmy_sql::get` | Cmy_sql | 40 |
| `Cmy_sql::query` | Cmy_sql | 7 |
| `Cmy_sql::my_init` | Cmy_sql | 4 |
| `Cmy_sql::store_result` | Cmy_sql | 3 |
| `Cmy_sql::connect` | Cmy_sql | 3 |
| `Cmy_sql::create_tab` | Cmy_sql | 2 |
| `Cmy_sql::verify_id_second` | Cmy_sql | 1 |
| `Cmy_sql::verify_id_first` | Cmy_sql | 1 |
| `Cmy_sql::verify_id_cmd` | Cmy_sql | 1 |
| `Cmy_sql::update_uuid_second` | Cmy_sql | 1 |
| `Cmy_sql::update_uuid_first` | Cmy_sql | 1 |
| `Cmy_sql::update_uuid_cmd` | Cmy_sql | 1 |
| `Cmy_sql::show_tab` | Cmy_sql | 1 |
| `Cmy_sql::show_db` | Cmy_sql | 1 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cmy_sql::do_action` | Cmy_sql | 12 |
| `Cmy_sql::execute` | Cmy_sql | 10 |
| `Cmy_sql::func` | Cmy_sql | 6 |
| `Cmy_sql::get` | Cmy_sql | 5 |
| `Cmy_sql::deal_cmd` | Cmy_sql | 5 |
| `Cmy_sql::query` | Cmy_sql | 4 |
| `Cmy_sql::Cmy_sql` | Cmy_sql | 4 |
| `Cmy_sql::connect` | Cmy_sql | 3 |
| `Cmy_sql::verify_id_first` | Cmy_sql | 2 |
| `Cmy_sql::update_uuid_second` | Cmy_sql | 2 |
| `Cmy_sql::create_tab` | Cmy_sql | 2 |
| `Cmy_sql::verify_id_second` | Cmy_sql | 1 |
| `Cmy_sql::verify_id_cmd` | Cmy_sql | 1 |
| `Cmy_sql::update_uuid_first` | Cmy_sql | 1 |
| `Cmy_sql::update_uuid_cmd` | Cmy_sql | 1 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 13 |
| uuid | 1 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| stock | 106 |
| socket | 2 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cmy_sql | 28 | 68 | 162 |
| 自由函数 | 1 | 0 | 0 |

未解析调用点: 4 | 外部(容器/库)调用点: 46 | 间接(函数指针)调用点: 0
