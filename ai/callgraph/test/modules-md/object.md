# 模块 `object` 调用图

| 指标 | 数值 |
|---|---|
| functions | 188 |
| intra | 167 |
| out | 3 |
| in | 18 |
| unresolved | 83 |
| external | 102 |
| indirect | 1 |
| macro | 1 |
| callsites | 170 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Object::execute` | Object | 23 |
| `Object::clear` | Object | 10 |
| `Object::allot` | Object | 10 |
| `Object::myName` | Object | 9 |
| `Object::isMe` | Object | 9 |
| `Object::register_signal` | Object | 8 |
| `Object::at_cin_buf` | Object | 8 |
| `Object::s_replace` | Object | 7 |
| `Object::is_action_end` | Object | 5 |
| `Object::func` | Object | 4 |
| `Object::do_action` | Object | 4 |
| `Object::delete_allot` | Object | 4 |
| `Object::where` | Object | 3 |
| `Object::sys_cmd` | Object | 3 |
| `Object::s_toupper` | Object | 3 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Object::runme` | Object | 37 |
| `Object::execute` | Object | 16 |
| `Object::~Object` | Object | 14 |
| `Object::operator ()` | Object | 13 |
| `Object::register_all_signal` | Object | 8 |
| `Object::deal_cmd` | Object | 6 |
| `Object::allot` | Object | 6 |
| `Object::dispatch_cmd` | Object | 5 |
| `Object::sys_cmd` | Object | 4 |
| `Object::operator ==` | Object | 4 |
| `Object::operator !=` | Object | 4 |
| `Object::get_action` | Object | 4 |
| `Object::Object` | Object | 4 |
| `Object::toupper_replace` | Object | 3 |
| `Object::replace_temp` | Object | 3 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| stock | 3 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| stock | 18 |

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
| Object | 158 | 167 | 181 |
| Ocoord | 1 | 0 | 0 |
| Omove | 2 | 0 | 0 |
| Otime | 1 | 0 | 0 |
| 自由函数 | 11 | 1 | 1 |

未解析调用点: 83 | 外部(容器/库)调用点: 102 | 间接(函数指针)调用点: 1
