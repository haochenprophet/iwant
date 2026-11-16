# 模块 `object` 调用图

| 指标 | 数值 |
|---|---|
| functions | 186 |
| intra | 157 |
| out | 33 |
| in | 160 |
| unresolved | 11 |
| external | 154 |
| indirect | 1 |
| macro | 1 |
| callsites | 190 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Object::set_main_ret` | Object | 28 |
| `Object::execute` | Object | 26 |
| `Object::allot` | Object | 20 |
| `Object::s_replace` | Object | 13 |
| `Object::action_help` | Object | 13 |
| `Object::myName` | Object | 11 |
| `Object::delete_allot` | Object | 11 |
| `Object::copy` | Object | 10 |
| `Object::where` | Object | 9 |
| `Object::my_family` | Object | 9 |
| `Object::isMe` | Object | 9 |
| `Object::register_signal` | Object | 8 |
| `Object::at_cin_buf` | Object | 8 |
| `Object::get_action` | Object | 7 |
| `Object::addMe` | Object | 7 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Object::runme` | Object | 37 |
| `Object::execute` | Object | 17 |
| `Object::operator ()` | Object | 13 |
| `Object::register_all_signal` | Object | 8 |
| `Object::dispatch_cmd` | Object | 7 |
| `Object::deal_cmd` | Object | 6 |
| `Object::allot` | Object | 6 |
| `Object::~Object` | Object | 4 |
| `Object::sys_cmd` | Object | 4 |
| `Object::operator ==` | Object | 4 |
| `Object::operator !=` | Object | 4 |
| `Object::get_action` | Object | 4 |
| `Object::dispatch_runme` | Object | 4 |
| `Object::Object` | Object | 4 |
| `Object::toupper_replace` | Object | 3 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| memory | 22 |
| path | 10 |
| global | 1 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| file | 28 |
| iwant | 24 |
| hardware | 19 |
| algorithm | 18 |
| stock | 18 |
| my_sql | 13 |
| code | 12 |
| path | 7 |
| main | 6 |
| socket | 4 |
| class | 3 |
| collect | 2 |
| public | 2 |
| tree | 1 |
| time | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| CKeywordParam | 1 | 0 | 0 |
| Ccmd | 1 | 0 | 0 |
| Cmove | 2 | 1 | 1 |
| Cmyfunc | 3 | 0 | 1 |
| Cobject | 2 | 1 | 1 |
| Cparameter | 2 | 0 | 0 |
| CtagItem | 1 | 0 | 0 |
| Cvelocity | 3 | 0 | 0 |
| Object | 158 | 187 | 313 |
| Ocoord | 1 | 0 | 0 |
| Omove | 2 | 0 | 0 |
| Otime | 1 | 0 | 0 |
| 自由函数 | 9 | 1 | 1 |

未解析调用点: 11 | 外部(容器/库)调用点: 154 | 间接(函数指针)调用点: 1
