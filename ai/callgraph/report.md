# 全项目函数调用关系图（src/，6201 文件，101 模块）

## 一、总体规模

| 指标 | 数值 |
|---|---|
| 源文件 | 6201 |
| 代码行 | 155983 |
| 方法节点（类名::方法，重载合并） | 9618 |
| 自由函数节点 | 1657 |
| 函数式宏节点 | 31 |
| 函数节点合计 | 11306 |
| 解析成功的调用边（去重后的 函数对 数） | 3426 |
| 调用点总次数（含重复调用同一函数） | 4450 |
| 未解析调用点 | 170 |
| 外部调用点（容器方法/库/std） | 976 |
| 间接调用点（函数指针） | 1 |

### 调用边类型分布

| 类型 | 边数 | 含义 |
|---|---|---|
| this | 3086 | 类内方法调用（隐式 this / this->） |
| cross_class | 242 | 跨类调用（对象->方法 / Class::方法 / new 构造） |
| free | 14 | 自由函数调用 |
| macro | 25 | 函数式宏调用 |
| recursive | 59 | 递归（自身调用） |

## 二、枢纽函数 TOP 30（被调用最多，入度）

| # | 函数 | 模块 | 类 | 定义位置 | 调用方数 | 调用点次数 |
|---|---|---|---|---|---|---|
| 1 | `Cmy_sql::execute` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 69 | 86 |
| 2 | `Cmy_sql::get` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 35 | 40 |
| 3 | `Cpath::push_back` | path | Cpath | path/path.h:10 | 20 | 29 |
| 4 | `CmyMemory::begin` | memory | CmyMemory | memory/myMemory.h:16 | 20 | 23 |
| 5 | `CmyMemory::end` | memory | CmyMemory | memory/myMemory.h:16 | 20 | 23 |
| 6 | `Cfile::f_read` | file | Cfile | file/file.h:11 | 16 | 24 |
| 7 | `Object::allot` | object | Object | object/object.h:246 | 11 | 20 |
| 8 | `Object::myName` | object | Object | object/object.h:246 | 9 | 11 |
| 9 | `Cstock_db::add_column` | stock | Cstock_db | stock/stock_db.h:8 | 9 | 9 |
| 10 | `Object::action_help` | object | Object | object/object.h:246 | 8 | 13 |
| 11 | `Object::delete_allot` | object | Object | object/object.h:246 | 8 | 11 |
| 12 | `Udata::cmp` | data | Udata | data/data.h:97 | 7 | 222 |
| 13 | `Cfile::f_append` | file | Cfile | file/file.h:11 | 7 | 32 |
| 14 | `Object::get_action` | object | Object | object/object.h:246 | 7 | 7 |
| 15 | `Object::execute` | object | Object | object/object.h:246 | 6 | 26 |
| 16 | `Object::s_replace` | object | Object | object/object.h:246 | 6 | 13 |
| 17 | `Cio::read` | hardware | Cio | hardware/io.h:12 | 6 | 7 |
| 18 | `Cstock_db::calculate_ma` | stock | Cstock_db | stock/stock_db.h:8 | 6 | 6 |
| 19 | `Object::get_cmd` | object | Object | object/object.h:246 | 6 | 6 |
| 20 | `Cfind::find` | algorithm | Cfind | algorithm/find.h:7 | 5 | 9 |
| 21 | `Object::where` | object | Object | object/object.h:246 | 5 | 9 |
| 22 | `Cmy_sql::query` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 5 | 7 |
| 23 | `Cio::write` | hardware | Cio | hardware/io.h:12 | 5 | 6 |
| 24 | `Ccmos::read` | hardware | Ccmos | hardware/cmos.h:27 | 5 | 5 |
| 25 | `#UNPACK64` | math | - | -:- | 4 | 20 |
| 26 | `Object::my_family` | object | Object | object/object.h:246 | 4 | 9 |
| 27 | `Csha::sha256_transf` | math | Csha | math/sha.h:51 | 4 | 6 |
| 28 | `Csha::sha512_transf` | math | Csha | math/sha.h:51 | 4 | 6 |
| 29 | `Udata::set` | data | Udata | data/data.h:97 | 3 | 66 |
| 30 | `Object::copy` | object | Object | object/object.h:246 | 3 | 10 |

## 三、枢纽函数 TOP 30（调用最多，出度）

| # | 函数 | 模块 | 类 | 定义位置 | 被调函数数 | 调用点次数 |
|---|---|---|---|---|---|---|
| 1 | `Cstock_db::parse_run_action` | stock | Cstock_db | stock/stock_db.h:8 | 37 | 37 |
| 2 | `Object::runme` | object | Object | object/object.h:246 | 36 | 37 |
| 3 | `Cstock_db::execute` | stock | Cstock_db | stock/stock_db.h:8 | 31 | 31 |
| 4 | `Cstock_db::func` | stock | Cstock_db | stock/stock_db.h:8 | 31 | 31 |
| 5 | `Cfile::do_action` | file | Cfile | file/file.h:11 | 21 | 42 |
| 6 | `Ccrc::execute` | math | Ccrc | math/crc.h:7 | 21 | 23 |
| 7 | `Cmy_sql::do_action` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 12 | 12 |
| 8 | `Cinsert::insert` | algorithm | Cinsert | algorithm/insert.h:34 | 10 | 43 |
| 9 | `Creplace::replace` | algorithm | Creplace | algorithm/replace.h:57 | 10 | 29 |
| 10 | `Ccmos::do_action` | hardware | Ccmos | hardware/cmos.h:27 | 8 | 14 |
| 11 | `Csha::sha256_transf` | math | Csha | math/sha.h:51 | 7 | 134 |
| 12 | `Csha::sha512_transf` | math | Csha | math/sha.h:51 | 7 | 94 |
| 13 | `main` | iwant | - | iwant/iwant.cpp:52 | 7 | 18 |
| 14 | `Cmy_sql::execute` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 7 | 10 |
| 15 | `Object::execute` | object | Object | object/object.h:246 | 6 | 17 |
| 16 | `Cregister_hw::execute` | hardware | Cregister_hw | hardware/register_hw.h:106 | 6 | 8 |
| 17 | `Object::dispatch_cmd` | object | Object | object/object.h:246 | 6 | 7 |
| 18 | `Udata::runme` | data | Udata | data/data.h:97 | 6 | 6 |
| 19 | `Csha::sha224` | math | Csha | math/sha.h:51 | 5 | 7 |
| 20 | `Csha::sha256` | math | Csha | math/sha.h:51 | 5 | 7 |
| 21 | `Csha::sha384` | math | Csha | math/sha.h:51 | 5 | 7 |
| 22 | `Csha::sha512` | math | Csha | math/sha.h:51 | 5 | 7 |
| 23 | `Ccmos::deal_cmd` | hardware | Ccmos | hardware/cmos.h:27 | 5 | 6 |
| 24 | `Object::deal_cmd` | object | Object | object/object.h:246 | 5 | 6 |
| 25 | `Cmd5::step` | math | Cmd5 | math/md5.h:49 | 5 | 5 |
| 26 | `Ccode::deal_cmd` | code | Ccode | code/code.h:34 | 5 | 5 |
| 27 | `Cfile::deal_cmd` | file | Cfile | file/file.h:11 | 5 | 5 |
| 28 | `Cmy_sql::deal_cmd` | my_sql | Cmy_sql | my_sql/my_sql.h:8 | 5 | 5 |
| 29 | `Cmain::create_main_cmd` | main | Cmain | main/main.h:7 | 5 | 5 |
| 30 | `Cquestion::q_type` | stock | Cquestion | stock/stock_question.h:56 | 4 | 17 |

## 四、跨模块调用 TOP 30 流

| 来源模块 | 目标模块 | 调用点次数 |
|---|---|---|
| stock | my_sql | 106 |
| file | object | 28 |
| code | file | 26 |
| iwant | object | 24 |
| object | memory | 22 |
| hardware | object | 19 |
| algorithm | object | 18 |
| stock | object | 18 |
| algorithm | file | 17 |
| my_sql | object | 13 |
| code | object | 12 |
| object | path | 10 |
| path | object | 7 |
| algorithm | path | 6 |
| algorithm | memory | 6 |
| text | memory | 6 |
| main | object | 6 |
| math | file | 5 |
| tree | memory | 4 |
| build | memory | 4 |
| class | file | 4 |
| path | memory | 4 |
| socket | object | 4 |
| tree | path | 3 |
| file | text | 3 |
| class | object | 3 |
| task | path | 3 |
| algorithm | locate | 2 |
| time | path | 2 |
| stock | ex_func | 2 |

## 五、每模块摘要

| 模块 | 函数节点 | 内部边 | 出边 | 入边 | 未解析 | 外部 | 间接 | 宏边 |
|---|---|---|---|---|---|---|---|---|
| action | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| airplane | 120 | 24 | 0 | 0 | 0 | 0 | 0 | 0 |
| algorithm | 77 | 75 | 49 | 2 | 0 | 83 | 0 | 0 |
| all | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| bit | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| block | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| build | 10 | 6 | 6 | 0 | 0 | 3 | 0 | 0 |
| but | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| car | 814 | 163 | 0 | 0 | 0 | 0 | 0 | 0 |
| class | 7 | 3 | 7 | 0 | 0 | 6 | 0 | 0 |
| code | 345 | 75 | 39 | 0 | 0 | 25 | 0 | 0 |
| collect | 12 | 4 | 2 | 0 | 0 | 6 | 0 | 0 |
| command | 12 | 1 | 0 | 0 | 0 | 4 | 0 | 0 |
| company | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| control | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| cstdio | 256 | 51 | 0 | 0 | 5 | 54 | 0 | 0 |
| cstdlib | 225 | 38 | 0 | 0 | 8 | 28 | 0 | 0 |
| ctime | 59 | 9 | 0 | 0 | 0 | 7 | 0 | 0 |
| ctype | 133 | 33 | 0 | 0 | 0 | 0 | 0 | 0 |
| data | 33 | 465 | 0 | 0 | 0 | 34 | 0 | 0 |
| database | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| debug | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| deploy | 200 | 40 | 0 | 0 | 0 | 0 | 0 | 0 |
| dictionary | 6 | 2 | 0 | 0 | 0 | 0 | 0 | 0 |
| die | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| earth | 250 | 50 | 0 | 0 | 0 | 0 | 0 | 0 |
| engine | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| error | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| ex_func | 6 | 1 | 0 | 3 | 0 | 9 | 0 | 0 |
| field | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| file | 47 | 81 | 35 | 55 | 7 | 137 | 0 | 0 |
| ftp | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| func | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| global | 6 | 1 | 0 | 2 | 0 | 0 | 0 | 0 |
| gui | 10 | 2 | 0 | 0 | 0 | 0 | 0 | 0 |
| hardware | 176 | 88 | 19 | 0 | 7 | 26 | 0 | 0 |
| home | 266 | 53 | 0 | 0 | 0 | 0 | 0 | 0 |
| http | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| input | 24 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| instruction | 1427 | 475 | 0 | 0 | 0 | 0 | 0 | 0 |
| iwant | 6 | 1 | 24 | 0 | 1 | 22 | 0 | 0 |
| key_value | 10 | 2 | 0 | 0 | 0 | 1 | 0 | 0 |
| keywords | 526 | 261 | 0 | 0 | 0 | 8 | 0 | 0 |
| life | 135 | 27 | 0 | 0 | 0 | 0 | 0 | 0 |
| locate | 6 | 2 | 0 | 2 | 0 | 0 | 0 | 0 |
| main | 7 | 4 | 8 | 0 | 0 | 6 | 0 | 0 |
| make | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| mars | 80 | 16 | 0 | 0 | 0 | 0 | 0 | 0 |
| materiel | 190 | 38 | 0 | 0 | 0 | 0 | 0 | 0 |
| math | 558 | 414 | 5 | 0 | 114 | 71 | 0 | 269 |
| memory | 9 | 5 | 1 | 47 | 0 | 1 | 0 | 0 |
| message | 238 | 60 | 0 | 0 | 0 | 0 | 0 | 0 |
| money | 110 | 22 | 0 | 0 | 0 | 0 | 0 | 0 |
| my_sql | 29 | 54 | 14 | 108 | 4 | 46 | 0 | 0 |
| net | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| node | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| object | 186 | 157 | 33 | 160 | 11 | 154 | 1 | 1 |
| ocean | 480 | 96 | 0 | 0 | 0 | 0 | 0 | 0 |
| openssl | 10 | 2 | 0 | 0 | 0 | 0 | 0 | 0 |
| operator | 308 | 77 | 0 | 0 | 0 | 0 | 0 | 0 |
| organization | 8 | 2 | 0 | 0 | 0 | 0 | 0 | 0 |
| os | 4 | 2 | 0 | 0 | 1 | 2 | 0 | 0 |
| output | 13 | 17 | 0 | 1 | 0 | 18 | 0 | 0 |
| path | 10 | 14 | 11 | 28 | 9 | 57 | 0 | 0 |
| plan | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| power | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| public | 5 | 1 | 2 | 0 | 0 | 0 | 0 | 0 |
| radar | 290 | 58 | 0 | 0 | 0 | 0 | 0 | 0 |
| recognition | 17 | 3 | 0 | 0 | 0 | 1 | 0 | 0 |
| register | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| relation | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| rocket | 95 | 19 | 0 | 0 | 0 | 0 | 0 | 0 |
| satellite | 839 | 168 | 0 | 0 | 0 | 0 | 0 | 0 |
| security | 905 | 181 | 0 | 0 | 0 | 0 | 0 | 0 |
| sensor | 441 | 87 | 0 | 0 | 0 | 0 | 0 | 0 |
| size | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| smtp | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| socket | 16 | 16 | 6 | 0 | 0 | 34 | 0 | 0 |
| source | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| spaceport | 285 | 57 | 0 | 0 | 0 | 0 | 0 | 0 |
| sql | 370 | 185 | 0 | 0 | 0 | 0 | 0 | 0 |
| status | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| step | 2 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| stock | 126 | 134 | 127 | 0 | 1 | 83 | 0 | 0 |
| stratagem | 3 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| string | 88 | 22 | 0 | 0 | 0 | 0 | 0 | 0 |
| symbol | 17 | 9 | 0 | 0 | 0 | 6 | 0 | 0 |
| syntax | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| system | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| tag | 2 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| task | 12 | 2 | 3 | 0 | 0 | 7 | 0 | 0 |
| template | 5 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| test | 4 | 1 | 2 | 0 | 0 | 1 | 0 | 0 |
| text | 52 | 12 | 7 | 3 | 0 | 9 | 0 | 0 |
| time | 36 | 5 | 4 | 0 | 0 | 23 | 0 | 0 |
| tree | 29 | 10 | 8 | 0 | 0 | 3 | 0 | 0 |
| uri | 3 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| uuid | 8 | 2 | 0 | 1 | 2 | 1 | 0 | 0 |
| wait | 7 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| warning | 4 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| warship | 110 | 22 | 0 | 0 | 0 | 0 | 0 | 0 |

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