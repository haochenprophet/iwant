# 模块 `code` 调用图

| 指标 | 数值 |
|---|---|
| functions | 345 |
| intra | 75 |
| out | 39 |
| in | 0 |
| unresolved | 0 |
| external | 25 |
| indirect | 0 |
| macro | 0 |
| callsites | 114 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccode::init_file` | Ccode | 2 |
| `Ccode::set_package_action` | Ccode | 1 |
| `Ccode::my_init` | Ccode | 1 |
| `Ccode::help` | Ccode | 1 |
| `Ccode::create_tail` | Ccode | 1 |
| `Ccode::create_head` | Ccode | 1 |
| `Ccode::create_cmd` | Ccode | 1 |
| `Ccode::create_action` | Ccode | 1 |
| `Ccode_value::my_init` | Ccode_value | 1 |
| `Ccode_update::my_init` | Ccode_update | 1 |
| `Ccode_tree::my_init` | Ccode_tree | 1 |
| `Ccode_token::my_init` | Ccode_token | 1 |
| `Ccode_template::my_init` | Ccode_template | 1 |
| `Ccode_tag::my_init` | Ccode_tag | 1 |
| `Ccode_syntax::my_init` | Ccode_syntax | 1 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccode::create_head` | Ccode | 15 |
| `Ccode::create_tail` | Ccode | 9 |
| `Ccode::create_action` | Ccode | 7 |
| `Ccode::deal_cmd` | Ccode | 5 |
| `Ccode::create_cmd` | Ccode | 4 |
| `Ccode::Ccode` | Ccode | 2 |
| `main` | - | 2 |
| `Ccode::~Ccode` | Ccode | 1 |
| `Ccode::my_init` | Ccode | 1 |
| `Ccode::help` | Ccode | 1 |
| `Ccode::func` | Ccode | 1 |
| `Ccode_value::Ccode_value` | Ccode_value | 1 |
| `Ccode_update::Ccode_update` | Ccode_update | 1 |
| `Ccode_tree::Ccode_tree` | Ccode_tree | 1 |
| `Ccode_token::Ccode_token` | Ccode_token | 1 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| file | 26 |
| object | 12 |
| path | 1 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ccode | 13 | 46 | 9 |
| Ccode_action | 4 | 1 | 1 |
| Ccode_add | 4 | 1 | 1 |
| Ccode_build | 4 | 1 | 1 |
| Ccode_check | 4 | 1 | 1 |
| Ccode_checksum | 4 | 1 | 1 |
| Ccode_class | 4 | 1 | 1 |
| Ccode_clone | 4 | 1 | 1 |
| Ccode_command | 4 | 1 | 1 |
| Ccode_comment | 4 | 1 | 1 |
| Ccode_commit | 4 | 1 | 1 |
| Ccode_copy | 4 | 1 | 1 |
| Ccode_create | 4 | 1 | 1 |
| Ccode_cut | 4 | 1 | 1 |
| Ccode_data_type | 4 | 1 | 1 |
| Ccode_db | 4 | 1 | 1 |
| Ccode_define | 4 | 1 | 1 |
| Ccode_delete | 4 | 1 | 1 |
| Ccode_diff | 4 | 1 | 1 |
| Ccode_error | 4 | 1 | 1 |
| Ccode_event | 4 | 1 | 1 |
| Ccode_exception | 4 | 1 | 1 |
| Ccode_expression | 4 | 1 | 1 |
| Ccode_feedback | 4 | 1 | 1 |
| Ccode_fetch | 4 | 1 | 1 |
| Ccode_file | 4 | 1 | 1 |
| Ccode_find | 4 | 1 | 1 |
| Ccode_fork | 4 | 1 | 1 |
| Ccode_function | 4 | 1 | 1 |
| Ccode_import | 4 | 1 | 1 |
| Ccode_include | 4 | 1 | 1 |
| Ccode_info | 4 | 1 | 1 |
| Ccode_init | 4 | 1 | 1 |
| Ccode_insert | 4 | 1 | 1 |
| Ccode_keyword | 4 | 1 | 1 |
| Ccode_library | 4 | 1 | 1 |
| Ccode_macro | 4 | 1 | 1 |
| Ccode_main | 4 | 1 | 1 |
| Ccode_makefile | 4 | 1 | 1 |
| Ccode_merge | 4 | 1 | 1 |
| Ccode_method | 4 | 1 | 1 |
| Ccode_move | 4 | 1 | 1 |
| Ccode_namespace | 4 | 1 | 1 |
| Ccode_operator | 4 | 1 | 1 |
| Ccode_package | 4 | 1 | 1 |
| Ccode_paste | 4 | 1 | 1 |
| Ccode_patch | 4 | 1 | 1 |
| Ccode_property | 4 | 1 | 1 |
| Ccode_pull | 4 | 1 | 1 |
| Ccode_push | 4 | 1 | 1 |
| Ccode_remove | 4 | 1 | 1 |
| Ccode_replace | 4 | 1 | 1 |
| Ccode_result | 4 | 1 | 1 |
| Ccode_return | 4 | 1 | 1 |
| Ccode_revert | 4 | 1 | 1 |
| Ccode_run | 4 | 1 | 1 |
| Ccode_select | 4 | 1 | 1 |
| Ccode_setting | 4 | 1 | 1 |
| Ccode_static | 4 | 1 | 1 |
| Ccode_struct | 4 | 1 | 1 |
| Ccode_syntax | 4 | 1 | 1 |
| Ccode_tag | 4 | 1 | 1 |
| Ccode_template | 4 | 1 | 1 |
| Ccode_token | 4 | 1 | 1 |
| Ccode_tree | 4 | 1 | 1 |
| Ccode_update | 4 | 1 | 1 |
| Ccode_value | 4 | 1 | 1 |
| 自由函数 | 68 | 2 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 25 | 间接(函数指针)调用点: 0
