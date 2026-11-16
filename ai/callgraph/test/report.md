# 全项目函数调用关系图（src/，6201 文件，101 模块）

## 一、总体规模

| 指标 | 数值 |
|---|---|
| 源文件 | 29 |
| 代码行 | 6318 |
| 方法节点（类名::方法，重载合并） | 340 |
| 自由函数节点 | 14 |
| 函数式宏节点 | 4 |
| 函数节点合计 | 358 |
| 解析成功的调用边（去重后的 函数对 数） | 264 |
| 调用点总次数（含重复调用同一函数） | 789 |
| 未解析调用点 | 178 |
| 外部调用点（容器方法/库/std） | 238 |
| 间接调用点（函数指针） | 1 |

### 调用边类型分布

| 类型 | 边数 | 含义 |
|---|---|---|
| this | 244 | 类内方法调用（隐式 this / this->） |
| cross_class | 10 | 跨类调用（对象->方法 / Class::方法 / new 构造） |
| free | 0 | 自由函数调用 |
| macro | 1 | 函数式宏调用 |
| recursive | 9 | 递归（自身调用） |

## 二、枢纽函数 TOP 30（被调用最多，入度）

| # | 函数 | 模块 | 类 | 定义位置 | 调用方数 | 调用点次数 |
|---|---|---|---|---|---|---|
| 1 | `Cstock_db::add_column` | stock | Cstock_db | stock/stock_db.h:8 | 9 | 9 |
| 2 | `Object::myName` | object | Object | object/object.h:246 | 8 | 9 |
| 3 | `Udata::cmp` | data | Udata | data/data.h:97 | 7 | 222 |
| 4 | `Cstock_db::calculate_ma` | stock | Cstock_db | stock/stock_db.h:8 | 6 | 6 |
| 5 | `Object::allot` | object | Object | object/object.h:246 | 4 | 10 |
| 6 | `Object::s_replace` | object | Object | object/object.h:246 | 4 | 7 |
| 7 | `Udata::set` | data | Udata | data/data.h:97 | 3 | 66 |
| 8 | `Object::execute` | object | Object | object/object.h:246 | 3 | 23 |
| 9 | `Object::isMe` | object | Object | object/object.h:246 | 3 | 9 |
| 10 | `Object::do_action` | object | Object | object/object.h:246 | 3 | 4 |
| 11 | `Udata::and_` | data | Udata | data/data.h:97 | 2 | 62 |
| 12 | `Udata::or_` | data | Udata | data/data.h:97 | 2 | 62 |
| 13 | `Object::is_action_end` | object | Object | object/object.h:246 | 2 | 5 |
| 14 | `Object::delete_allot` | object | Object | object/object.h:246 | 2 | 4 |
| 15 | `Object::func` | object | Object | object/object.h:246 | 2 | 4 |
| 16 | `Object::s_toupper` | object | Object | object/object.h:246 | 2 | 3 |
| 17 | `Object::action_help` | object | Object | object/object.h:246 | 2 | 3 |
| 18 | `Object::where` | object | Object | object/object.h:246 | 2 | 3 |
| 19 | `Object::runme` | object | Object | object/object.h:246 | 2 | 3 |
| 20 | `Cquestion::get_result` | stock | Cquestion | stock/stock_question.h:50 | 2 | 3 |
| 21 | `Object::removeMe` | object | Object | object/object.h:246 | 2 | 2 |
| 22 | `Object::toupper_replace` | object | Object | object/object.h:246 | 2 | 2 |
| 23 | `Object::get_cmd` | object | Object | object/object.h:246 | 2 | 2 |
| 24 | `Object::get_action` | object | Object | object/object.h:246 | 2 | 2 |
| 25 | `Udata::not_by_type` | data | Udata | data/data.h:97 | 2 | 2 |
| 26 | `Cstock_db::parse_run_action` | stock | Cstock_db | stock/stock_db.h:8 | 2 | 2 |
| 27 | `Udata::get` | data | Udata | data/data.h:97 | 1 | 30 |
| 28 | `Udata::cmp_t` | data | Udata | data/data.h:97 | 1 | 15 |
| 29 | `Object::clear` | object | Object | object/object.h:246 | 1 | 10 |
| 30 | `Object::at_cin_buf` | object | Object | object/object.h:246 | 1 | 8 |

## 三、枢纽函数 TOP 30（调用最多，出度）

| # | 函数 | 模块 | 类 | 定义位置 | 被调函数数 | 调用点次数 |
|---|---|---|---|---|---|---|
| 1 | `Cstock_db::parse_run_action` | stock | Cstock_db | stock/stock_db.h:8 | 37 | 37 |
| 2 | `Object::runme` | object | Object | object/object.h:246 | 36 | 37 |
| 3 | `Cstock_db::execute` | stock | Cstock_db | stock/stock_db.h:8 | 31 | 31 |
| 4 | `Cstock_db::func` | stock | Cstock_db | stock/stock_db.h:8 | 31 | 31 |
| 5 | `Udata::runme` | data | Udata | data/data.h:97 | 6 | 6 |
| 6 | `Object::execute` | object | Object | object/object.h:246 | 5 | 16 |
| 7 | `Object::~Object` | object | Object | object/object.h:246 | 5 | 14 |
| 8 | `Object::deal_cmd` | object | Object | object/object.h:246 | 5 | 6 |
| 9 | `Object::dispatch_cmd` | object | Object | object/object.h:246 | 4 | 5 |
| 10 | `Cstock_db::deal_cmd` | stock | Cstock_db | stock/stock_db.h:8 | 4 | 4 |
| 11 | `Cquestion::q_type` | stock | Cquestion | stock/stock_question.h:50 | 3 | 15 |
| 12 | `Object::Object` | object | Object | object/object.h:246 | 3 | 4 |
| 13 | `Cquestion::q_question` | stock | Cquestion | stock/stock_question.h:50 | 3 | 4 |
| 14 | `Object::allot` | object | Object | object/object.h:246 | 2 | 6 |
| 15 | `Cquestion::Cquestion` | stock | Cquestion | stock/stock_question.h:50 | 2 | 6 |
| 16 | `Object::sys_cmd` | object | Object | object/object.h:246 | 2 | 4 |
| 17 | `Cquestion::q_dir_value` | stock | Cquestion | stock/stock_question.h:50 | 2 | 4 |
| 18 | `Object::toupper_replace` | object | Object | object/object.h:246 | 2 | 3 |
| 19 | `Object::replace_syntax` | object | Object | object/object.h:246 | 2 | 3 |
| 20 | `Object::replace_temp` | object | Object | object/object.h:246 | 2 | 3 |
| 21 | `Object::deal_action` | object | Object | object/object.h:246 | 2 | 3 |
| 22 | `Object::remove_exist_family` | object | Object | object/object.h:246 | 2 | 2 |
| 23 | `Object::wait_cin` | object | Object | object/object.h:246 | 2 | 2 |
| 24 | `Object::tag_temp` | object | Object | object/object.h:246 | 2 | 2 |
| 25 | `Object::is_definable` | object | Object | object/object.h:246 | 2 | 2 |
| 26 | `Object::dispatch_runme` | object | Object | object/object.h:246 | 2 | 2 |
| 27 | `Udata::operator =` | data | Udata | data/data.h:97 | 1 | 34 |
| 28 | `Udata::operator ==` | data | Udata | data/data.h:97 | 1 | 32 |
| 29 | `Udata::operator !=` | data | Udata | data/data.h:97 | 1 | 32 |
| 30 | `Udata::operator <` | data | Udata | data/data.h:97 | 1 | 32 |

## 四、跨模块调用 TOP 30 流

| 来源模块 | 目标模块 | 调用点次数 |
|---|---|---|
| stock | object | 18 |
| object | stock | 3 |

## 五、每模块摘要

| 模块 | 函数节点 | 内部边 | 出边 | 入边 | 未解析 | 外部 | 间接 | 宏边 |
|---|---|---|---|---|---|---|---|---|
| bit | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| command | 11 | 1 | 0 | 0 | 4 | 0 | 0 | 0 |
| data | 32 | 465 | 0 | 0 | 8 | 26 | 0 | 0 |
| object | 188 | 167 | 3 | 18 | 83 | 102 | 1 | 1 |
| stock | 124 | 134 | 18 | 3 | 83 | 110 | 0 | 0 |

## 六、构建方法与符号消歧规则

1. 解析：扩展 cpp_analyzer.py 捕获每个函数定义体文本（已掩码字符串/注释/预处理），
   用正则提取调用点：name( / recv->name( / recv.name( / qual::name( / (*fp)( / (fp)(。
2. 节点归并：类方法声明(.h) 与 类限定定义(.cpp, owner=Class) 合并为同一节点；重载按方法名合并；
   类限定定义并入方法节点（补充 file_def/line_def）。
3. 消歧优先级（调用点 → 目标）：
   - this-> / 类体内直接调用 → 当前类方法，未命中则沿 Object 继承链向上（Osetting/Ouuid/Otime/Orange…）查找；
   - 对象接收者 → 参数类型（函数签名解析）或全局变量类型（去 const/*/&/模板/n_::前缀）→ 目标类方法；
   - Class::method / n_x::Class::method → 直接按类+方法解析；
   - 无接收者 → 同命名空间自由函数唯一 → 全库唯一函数名回退；
   - 类名作为调用（new Cfoo( / Cfoo()）→ 构造函数节点；
   - 函数式宏（#define F(x) ...）→ 宏节点；
   - (*fp)( / (fp)( 且 fp 为 MyFunc/函数指针类型成员/参数/全局 → 间接调用；
   - 其余 → 未解析 / 外部（std::、容器方法、接收者未知）。
4. 调用边去重：(源函数, 目标函数) 唯一，lines 记录全部调用点行号，n 为调用点次数。

## 七、局限性与说明（诚实声明）

- 间接调用（函数指针/回调）只记录"调用了哪个函数指针变量"，不追蹤指针指向的真实函数；
- 运算符重载的符号形式（a + b）不提取，仅提取显式 operatorX( 调用与 operator 方法自身节点；
- #define 宏体内部不展开解析（预处理行已掩码）；宏节点只作为被调用目标；
- 局部变量类型不跟踪（仅参数/全局/this），接收者为未知局部对象时按唯一名回退或记为外部；
- 未解析调用点（函数名全库有歧义或不存在）保留在 unresolved.json 可审计；
- 重载函数按方法名合并为单节点（签名列表保留在 functions.json）。

## 八、与 code-tree 对齐

- code-tree 基线：3125 类 / 11681 类方法 / 11533 自由函数 / 5058 宏，errors=0；
- 本次方法节点（重载合并后）≤ 11681（同名方法合并），自由函数节点 ≤ 11533（owner 定义归并到方法）；
- 具体对齐数字见 functions.json / stats.json，可在 HTML 中按模块、按类核对源码行号。