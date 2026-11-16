# 模块 `stock` 调用图

| 指标 | 数值 |
|---|---|
| functions | 126 |
| intra | 134 |
| out | 127 |
| in | 0 |
| unresolved | 1 |
| external | 83 |
| indirect | 0 |
| macro | 0 |
| callsites | 261 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cstock_db::add_column` | Cstock_db | 9 |
| `Cstock_db::calculate_ma` | Cstock_db | 6 |
| `Cquestion::q_dir_value` | Cquestion | 6 |
| `Cquestion::get_result` | Cquestion | 3 |
| `Cstock_db::parse_run_action` | Cstock_db | 2 |
| `Cquestion::q_question` | Cquestion | 2 |
| `Cquestion::get_feedback` | Cquestion | 2 |
| `Cstock_db::verify_ma_second` | Cstock_db | 1 |
| `Cstock_db::verify_ma_first` | Cstock_db | 1 |
| `Cstock_db::verify_ma_cmd` | Cstock_db | 1 |
| `Cstock_db::verify_id_second` | Cstock_db | 1 |
| `Cstock_db::verify_id_first` | Cstock_db | 1 |
| `Cstock_db::verify_id_cmd` | Cstock_db | 1 |
| `Cstock_db::update_type_cmd` | Cstock_db | 1 |
| `Cstock_db::update_dir_second` | Cstock_db | 1 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cstock_db::parse_run_action` | Cstock_db | 37 |
| `Cstock_db::func` | Cstock_db | 31 |
| `Cstock_db::execute` | Cstock_db | 31 |
| `Cquestion::q_type` | Cquestion | 17 |
| `Cquestion::Cquestion` | Cquestion | 6 |
| `Cquestion::q_question` | Cquestion | 5 |
| `Cstock_db::deal_cmd` | Cstock_db | 4 |
| `Cstock_db::calculate_ma_cmd` | Cstock_db | 4 |
| `Cquestion::q_dir_value` | Cquestion | 4 |
| `Cstock_db::verify_ma_second` | Cstock_db | 3 |
| `Cstock_db::insert_dir_second` | Cstock_db | 3 |
| `Cstock_db::calculate_rd_cmd` | Cstock_db | 3 |
| `Cstock_db::calculate_ma` | Cstock_db | 3 |
| `Cstock_db::calculate_avg_second` | Cstock_db | 3 |
| `Cstock_db::verify_id_first` | Cstock_db | 2 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| my_sql | 106 |
| object | 18 |
| ex_func | 2 |
| file | 1 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cquestion | 10 | 33 | 16 |
| Cquestion_def | 2 | 1 | 1 |
| Cstock_db | 112 | 227 | 117 |
| 自由函数 | 2 | 0 | 0 |

未解析调用点: 1 | 外部(容器/库)调用点: 83 | 间接(函数指针)调用点: 0
