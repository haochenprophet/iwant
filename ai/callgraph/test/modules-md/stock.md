# 模块 `stock` 调用图

| 指标 | 数值 |
|---|---|
| functions | 124 |
| intra | 134 |
| out | 18 |
| in | 3 |
| unresolved | 83 |
| external | 110 |
| indirect | 0 |
| macro | 0 |
| callsites | 152 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cstock_db::add_column` | Cstock_db | 9 |
| `Cstock_db::calculate_ma` | Cstock_db | 6 |
| `Cquestion::q_dir_value` | Cquestion | 6 |
| `Cstock_db::execute` | Cstock_db | 3 |
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

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cstock_db::parse_run_action` | Cstock_db | 37 |
| `Cstock_db::func` | Cstock_db | 31 |
| `Cstock_db::execute` | Cstock_db | 31 |
| `Cquestion::q_type` | Cquestion | 15 |
| `Cquestion::Cquestion` | Cquestion | 6 |
| `Cstock_db::deal_cmd` | Cstock_db | 4 |
| `Cquestion::q_question` | Cquestion | 4 |
| `Cquestion::q_dir_value` | Cquestion | 4 |
| `Cstock_db::execute_add_cmd` | Cstock_db | 1 |
| `Cstock_db::do_action` | Cstock_db | 1 |
| `Cstock_db::calculate_ma60_second` | Cstock_db | 1 |
| `Cstock_db::calculate_ma5_second` | Cstock_db | 1 |
| `Cstock_db::calculate_ma30_second` | Cstock_db | 1 |
| `Cstock_db::calculate_ma20_second` | Cstock_db | 1 |
| `Cstock_db::calculate_ma10_second` | Cstock_db | 1 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 18 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| object | 3 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cquestion | 9 | 30 | 16 |
| Cquestion_def | 2 | 1 | 1 |
| Cstock_db | 111 | 121 | 120 |
| 自由函数 | 2 | 0 | 0 |

未解析调用点: 83 | 外部(容器/库)调用点: 110 | 间接(函数指针)调用点: 0
