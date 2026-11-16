# src/object

> 统计: 6 文件 / 2359 行 / 16 类 / 248 方法 / 182 自由函数 / 112 成员变量 / 3 全局变量 / 19 宏 / 10 typedef / 4 枚举

## object/move.cpp (46 行)

### 函数 (5)
- `Cvelocity::Cvelocity()` — 定义  `L4`
- `Omove::Omove()` — 定义  `L20`
- `Cmove::my_init()` — 定义  `L26`
- `Cmove::Cmove()` — 定义  `L33`
- `movein()` — 定义  `L40`

> 完整签名见 JSON: `Cvelocity::Cvelocity()`、`Omove::Omove()`、`int Cmove::my_init(void *p)`、`Cmove::Cmove()`、`int movein(int argc, char *argv[])`

## object/move.h (67 行)

### 宏 #define (1)
- `MOVE_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class MoveStatus   `L6`
- none=0、stationary=BIT0、movable=BIT1、unmovable=BIT2、motive=BIT3、high_speed=BIT4、low_speed=BIT5、normal_speed=BIT6

### 枚举 enum class MoveDirection   `L18`
- none=0、up=BIT0、down=BIT1、left=BIT2、right=BIT3、forward=BIT4、backward=BIT5、east=BIT6、west=BIT7、south=BIT8、north=BIT9、radian=BIT10

### 类 (2)
#### n_move::Cvelocity  `L35`  `class`
- 成员变量 (12): `void * acceleration`、`void * velocity`、`void * velocity_unit`、`void * angle`、`void * angle_unit`、`void * dir`、`void * start_time`、`void * keep_time`、`void * end_time`、`void * location`、`void * target_loaction`、`void * distance`
- 方法 (3):
  - `Cvelocity()` （声明） `L46`
  - `virtual int go(void * p = nullptr)` （定义） `L48`
  - `virtual int feedback(void * p = nullptr)` （定义） `L49`

#### n_move::Omove  `L52`  `class`
- 成员变量 (3): `Udata status`、`Cvelocity * v`、`int v_count`
- 方法 (2):
  - `Omove()` （声明） `L58`
  - `virtual int go(void * p = nullptr)` （定义） `L60`

## object/move_class.h (16 行)

### 宏 #define (1)
- `MOVE_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_move::Cmove  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `int my_init(void *p=nullptr)` （声明） `L9`
  - `Cmove()` （声明） `L11`

## object/object.cpp (1666 行)

### 宏 #define (2)
- `OBJECT_TEST` = 0  `L5`
- `OBJECT_DEBUG` = 0  `L9`

### 函数 (174)
- `CtagItem::CtagItem()` — 定义  `L12`
- `CtagItem::CtagItem()` — 定义  `L17`
- `CtagItem::CtagItem()` — 定义  `L22`
- `Cmyfunc::Cmyfunc()` — 定义  `L27`
- `Cmyfunc::isMe()` — 定义  `L35`
- `Cmyfunc::isMe()` — 定义  `L42`
- `Cmyfunc::isMe()` — 定义  `L49`
- `Cmyfunc::runMe()` — 定义  `L56`
- `object_func()` — 定义  `L67`
- `Otime::Otime()` — 定义  `L75`
- `Object::Object()` — 定义  `L90`
- `Object::Object()` — 定义  `L136`
- `Cobject::my_init()` — 定义  `L159`
- `Cobject::Cobject()` — 定义  `L166`
- `Object::myName()` — 定义  `L171`
- `Object::add_relation()` — 定义  `L181`
- `Object::clear_relation()` — 定义  `L196`
- `Object::addMe()` — 定义  `L216`
- `Object::add_global_objects()` — 定义  `L225`
- `Object::add_global_objects()` — 定义  `L230`
- `Object::removeMe()` — 定义  `L235`
- `Object::remove_exist_family()` — 定义  `L240`
- `Object::sort_family()` — 定义  `L254`
- `Object::isMe()` — 定义  `L268`
- `Object::isMe()` — 定义  `L275`
- `Object::isMe()` — 定义  `L282`
- `Object::isMe()` — 定义  `L289`
- `Object::add_ex_func()` — 定义  `L295`
- `Object::add_memory()` — 定义  `L302`
- `Object::clear_my_memory()` — 定义  `L308`
- `Object::clear_exist()` — 定义  `L326`
- `Object::my_family()` — 定义  `L337`
- `Object::my_ex_func()` — 定义  `L351`
- `Object::my_temp()` — 定义  `L363`
- `Object::inc_error()` — 定义  `L368`
- `Object::is_error()` — 定义  `L373`
- `Object::get_error()` — 定义  `L378`
- `Object::set_count()` — 定义  `L383`
- `Object::get_count()` — 定义  `L389`
- `Object::get_s()` — 定义  `L394`
- `Object::wait_cin()` — 定义  `L405`
- `Object::at_cin_buf()` — 定义  `L421`
- `Object::my_syntax()` — 定义  `L427`
- `Object::execute()` — 定义  `L432`
- `Object::execute()` — 定义  `L440`
- `Object::execute()` — 定义  `L446`
- `Object::execute()` — 定义  `L451`
- `Object::execute()` — 定义  `L482`
- `Object::execute()` — 定义  `L490`
- `Object::execute()` — 定义  `L495`
- `Object::execute()` — 定义  `L503`
- `Object::execute()` — 定义  `L511`
- `Object::execute()` — 定义  `L518`
- `Object::execute()` — 定义  `L529`
- `Object::execute()` — 定义  `L537`
- `Object::execute()` — 定义  `L542`
- `Object::execute()` — 定义  `L551`
- `Object::allot()` — 定义  `L567`
- `Object::allot()` — 定义  `L583`
- `Object::allot()` — 定义  `L599`
- `Object::allot()` — 定义  `L611`
- `Object::allot()` — 定义  `L623`
- `Object::delete_allot()` — 定义  `L629`
- `Object::delete_allot()` — 定义  `L638`
- `Object::str2i()` — 定义  `L644`
- `Object::s_toupper()` — 定义  `L660`
- `Object::set_upper_str()` — 定义  `L667`
- `Object::s_replace()` — 定义  `L673`
- `Object::s_replace()` — 定义  `L695`
- `Object::s_replace()` — 定义  `L701`
- `Object::toupper_replace()` — 定义  `L706`
- `Object::replace_syntax()` — 定义  `L718`
- `Object::replace_temp()` — 定义  `L723`
- `Object::replace_syntax()` — 定义  `L728`
- `Object::replace_temp()` — 定义  `L734`
- `Object::tag_temp()` — 定义  `L740`
- `Object::add_tag_rule()` — 定义  `L749`
- `Object::add_tag_rule()` — 定义  `L755`
- `Object::add_tag_rule()` — 定义  `L762`
- `Object::my_tag_rule()` — 定义  `L769`
- `Object::my_id()` — 定义  `L781`
- `Object::my_uuid()` — 定义  `L786`
- `Object::set_time()` — 定义  `L791`
- `Object::cmp_time()` — 定义  `L818`
- `Object::delay_clock()` — 定义  `L841`
- `Object::delay()` — 定义  `L847`
- `Object::set_action()` — 定义  `L852`
- `Object::clear_action()` — 定义  `L860`
- `Object::is_action()` — 定义  `L866`
- `Object::deal_action()` — 定义  `L886`
- `Object::set_action_parameter()` — 定义  `L899`
- `Object::do_action()` — 定义  `L907`
- `Object::is_action_end()` — 定义  `L915`
- `Object::action_help()` — 定义  `L921`
- `Object::get_action()` — 定义  `L934`
- `Object::get_action()` — 定义  `L944`
- `Object::get_action()` — 定义  `L957`
- `Object::get_action()` — 定义  `L971`
- `Object::get_class()` — 定义  `L983`
- `Object::where()` — 定义  `L988`
- `Object::who()` — 定义  `L993`
- `Object::when()` — 定义  `L999`
- `Object::how()` — 定义  `L1004`
- `Object::my_size()` — 定义  `L1009`
- `Object::func()` — 定义  `L1014`
- `Object::url()` — 定义  `L1020`
- `Object::style()` — 定义  `L1028`
- `Object::image()` — 定义  `L1033`
- `Object::audio()` — 定义  `L1041`
- `Object::video()` — 定义  `L1049`
- `Object::get()` — 定义  `L1057`
- `Object::help()` — 定义  `L1064`
- `Object::ui()` — 定义  `L1072`
- `Object::event()` — 定义  `L1079`
- `Object::task()` — 定义  `L1086`
- `Object::transaction()` — 定义  `L1093`
- `Object::commit()` — 定义  `L1100`
- `Object::interrupt()` — 定义  `L1107`
- `Object::callback()` — 定义  `L1114`
- `Object::exception()` — 定义  `L1121`
- `Object::message()` — 定义  `L1128`
- `Object::feedback()` — 定义  `L1135`
- `Object::past()` — 定义  `L1143`
- `Object::rollback()` — 定义  `L1150`
- `Object::previous()` — 定义  `L1157`
- `Object::future()` — 定义  `L1165`
- `Object::next()` — 定义  `L1172`
- `Object::reservation()` — 定义  `L1180`
- `Object::current()` — 定义  `L1187`
- `Object::secure()` — 定义  `L1194`
- `Object::condition()` — 定义  `L1202`
- `Object::depend()` — 定义  `L1209`
- `Object::environment()` — 定义  `L1216`
- `Object::context()` — 定义  `L1223`
- `Object::go()` — 定义  `L1230`
- `Object::register_all_signal()` — 定义  `L1238`
- `signal_handler()` — 定义  `L1255`
- `Object::register_signal()` — 定义  `L1277`
- `Object::rejoin_signal()` — 定义  `L1283`
- `Object::copy()` — 定义  `L1289`
- `Object::copy()` — 定义  `L1296`
- `Object::before_object()` — 定义  `L1301`
- `Object::after_object()` — 定义  `L1306`
- `Object::dispatch_runme()` — 定义  `L1313`
- `Object::transfer()` — 定义  `L1335`
- `Object::runme()` — 定义  `L1340`
- `Object::create()` — 定义  `L1392`
- `Object::my_init()` — 定义  `L1396`
- `Object::my_exit()` — 定义  `L1404`
- `Object::my_clear()` — 定义  `L1412`
- `Object::clear()` — 定义  `L1420`
- `Object::list_cmd()` — 定义  `L1425`
- `Object::dispatch_cmd()` — 定义  `L1437`
- `Object::deal_cmd()` — 定义  `L1470`
- `Object::deal_cmd()` — 定义  `L1506`
- `Object::display()` — 定义  `L1516`
- `Object::display()` — 定义  `L1528`
- `Object::deploy()` — 定义  `L1540`
- `Object::different()` — 定义  `L1546`
- `Object::vray()` — 定义  `L1552`
- `Object::question()` — 定义  `L1558`
- `Object::is_identifier()` — 定义  `L1564`
- `Object::is_path()` — 定义  `L1575`
- `Object::is_definable()` — 定义  `L1586`
- `Object::wc_s()` — 定义  `L1600`
- `Object::s_ws()` — 定义  `L1607`
- `Object::ws_s()` — 定义  `L1613`
- `Object::sys_cmd()` — 定义  `L1619`
- `Object::sys_cmd()` — 定义  `L1626`
- `Object::sys_cmd()` — 定义  `L1633`
- `Object::sys_cmd()` — 定义  `L1639`
- `Object::sys_cmd()` — 定义  `L1644`
- `Object::get_cmd()` — 定义  `L1649`
- `main()` — 定义  `L1660`

> 完整签名见 JSON。

### 全局变量 (2)
- `long object_id`  `L89`
- `Object object_global`  `L1254`

## object/object.h (536 行)

### 宏 #define (1)
- `OBJECT_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum UsingLanguage   `L38`
- EnglishLanguage、SimplifiedChinese

### 枚举 enum class TimelineStatus   `L108`
- now、past、future

### typedef / using (7)
- `typedef int (*ObjectFunc)(void* input, void* output)`  `L43`
- `typedef int(*MyFunc)(void *p)`  `L44`  ⭐ 回调约定 MyFunc
- `typedef std::list<CtagItem> LIST_TAGITEM`  `L89`
- `typedef std::list<Cmyfunc> LIST_CMYFUNC`  `L105`
- `typedef std::list<void *> LIST_FAMILY`  `L106`
- `typedef std::list<Otimeline> LIST_OTIMELINE`  `L120`
- `typedef std::list<ObjectRelation *> LIST_OBJ_RELATION`  `L160`

### 函数 (3)
- `object_func()` — 声明  `L46`
- `runcmd()` — 声明  `L47`
- `signal_handler()` — 声明  `L48`

> 完整签名见 JSON: `int object_func(void *p)`、`int runcmd(void *cmd)`、`void signal_handler(int signum)`

### 全局变量 (1)
- `n_object::Object object_global` [extern]  `L517`

### 类 (13)
#### n_object::Cparameter  `L54`  `class`
- 成员变量 (5): `void * in`、`void * out`、`int size_in`、`int size_out`、`std::stack<void *> s`
- 方法 (2):
  - `public: Cparameter()` （定义） `L62`
  - `~Cparameter()` （定义） `L64`

#### n_object::CKeywordParam  `L67`  `class`
- 成员变量 (3): `char* cp_start`、`char* cp_current`、`char* cp_end`
- 方法 (1):
  - `public: CKeywordParam()` （定义） `L73`

#### n_object::CtagItem  `L77`  `class`
- 成员变量 (4): `string tag`、`string temp`、`string replace`、`int status`
- 方法 (3):
  - `CtagItem()` （声明） `L84`
  - `CtagItem(string tag,string temp,string replace)` （声明） `L86`
  - `CtagItem(char* tag,char* temp,char* replace)` （声明） `L87`

#### n_object::Cmyfunc  `L91`  `class`
- 成员变量 (4): `string name`、`string alias`、`MyFunc p_func`、`long long priority`
- 方法 (5):
  - `Cmyfunc(string fun_name, MyFunc func)` （声明） `L97`
  - `int isMe(char *identifier)` （声明） `L99`
  - `int isMe(string * identifier)` （声明） `L100`
  - `int isMe(string identifier)` （声明） `L101`
  - `int runMe(void *p, bool new_thread=false)` （声明） `L102`

#### n_object::Otimeline  `L114`  `class`
- 成员变量 (2): `TimelineStatus status`、`std::multimap<void *, void *> track`

#### n_object::Ccmd  `L122`  `class`
- 成员变量 (2): `int argc`、`char ** argv`
- 方法 (1):
  - `public: Ccmd()` （定义） `L128`

#### n_object::Otime  `L132`  `class`
- 成员变量 (9): `struct tm * tm_start`、`struct tm * tm_at`、`struct tm * tm_end`、`time_t start_time`、`time_t at_time`、`time_t end_time`、`clock_t start_clock`、`clock_t at_clock`、`clock_t end_clock`
- 方法 (1):
  - `Otime()` （声明） `L142`

#### n_object::Orange  `L146`  `class`
- 成员变量 (3): `Udata range_start`、`Udata range_amount`、`Udata range_end`

#### n_object::ObjectRelation  `L154`  `class`
- 成员变量 (2): `void * obj`、`Orelation * relation`

#### n_object::Ocoord  `L162`  `class`
- 成员变量 (3): `double x`、`double y`、`double z`
- 方法 (1):
  - `public: Ocoord()` （定义） `L168`

#### n_object::Osetting  `L172`  `class`
- 继承: `Ouuid, Otime, Orange`
- 成员变量 (60): `long id`、`Omove * move`、`Oinput * input`、`Udata udata`、`Udata status`、`int silent`、`long long priority`、`ACTION_T action`、`ActionInfo * action_info`、`Action * action_table`、`int count_of_action_table`、`int main_return_value`、`int error`、`int count`、`int execute_count`、`int cin_buf_len`、`char * cin_buf`、`char * buf`、`void * buf_owner`、`int buf_len`、`void * before`、`void * after`、`size_t row`、`size_t column`、`size_t line`、`Ocoord coord`、`string package`、`string name`、`string alias`、`string symbol`、`string description`、`string syntax`、`string temp`、`string s_tag`、`string s_rep`、`string upper_str`、`long locate`、`int language`、`int direction`、`int value`、`int velocity`、`Ccmd cmd`、`std::list<void *> family`、`std::list<void *> exist_family`、`std::list<Cmyfunc> ex_func`、`std::list<CtagItem> l_tag_rule`、`std::list<void *> my_mem`、`std::list<void *> exist_list`、`std::list<Otimeline> obj_track`、`std::list<void *> l_url`、`std::list<void *> l_style`、`std::list<void *> l_image`、`std::list<void *> l_audio`、`std::list<void *> l_video`、`LIST_OBJ_RELATION l_relation`、`string s_url`、`string s_term`、`wstring ws_url`、`wstring ws_term`、`string s_cmd`

#### n_object::Object  `L246`  `class`
- 继承: `Osetting`
- 方法 (225):
  - `Object()` （声明） `L248`
  - `~Object()` （声明） `L250`
  - `void myName(Object *o=nullptr)` （声明） `L252`
  - `int add_relation(Object *o, Orelation * r)` （声明） `L253`
  - `int clear_relation()` （声明） `L254`
  - `void addMe(Object *o=nullptr)` （声明） `L255`
  - `void add_global_objects(Object *p)` （声明） `L256`
  - `void add_global_objects()` （声明） `L257`
  - `void removeMe(void * item)` （声明） `L258`
  - `void remove_exist_family()` （声明） `L259`
  - `int sort_family(void *p=nullptr)` （声明） `L260`
  - `int isMe(char *identifier)` （声明） `L262`
  - `int isMe(string * identifier)` （声明） `L263`
  - `int isMe(string identifier)` （声明） `L264`
  - `int isMe(int id)` （声明） `L265`
  - `bool add_ex_func(string fun_name, MyFunc func)` （声明） `L267`
  - `void add_memory(Object *m)` （声明） `L268`
  - `void clear_my_memory(Object *m=nullptr)` （声明） `L269`
  - `void clear_exist()` （声明） `L270`
  - `long my_id()` （声明） `L272`
  - `char* my_uuid()` （声明） `L273`
  - `int my_family()` （声明） `L274`
  - `int my_ex_func()` （声明） `L275`
  - `void my_temp()` （声明） `L276`
  - `void my_syntax()` （声明） `L277`
  - `int inc_error()` （声明） `L279`
  - `int is_error()` （声明） `L280`
  - `int get_error()` （声明） `L281`
  - `int set_count(int ct)` （声明） `L282`
  - `int get_count()` （声明） `L283`
  - `bool get_s(char ** s ,int size)` （声明） `L284`
  - `bool wait_cin(int size=O_BUF_LEN)` （声明） `L285`
  - `char * at_cin_buf(char * str)` （声明） `L286`
  - `int set(Oinput *i)` （定义） `L288`
  - `int set(Omove *m)` （定义） `L289`
  - `void set_main_ret(int ret)` （定义） `L290`
  - `int execute()` （声明） `L292`
  - `int execute(Object *o)` （声明） `L293`
  - `int execute(Object *o, string obj_name , string fun_name , void *p=nullptr, bool new_thre…` （声明） `L294`
  - `int execute(Object *o, char *obj_name , char * fun_name , void *p=nullptr, bool new_threa…` （声明） `L295`
  - `int execute(Object *o, string *obj_name, string * fun_name = nullptr, void *p=nullptr, bo…` （声明） `L296`
  - `int execute(void *p)` （声明） `L297`
  - `virtual int execute(void *p1,void *p2)` （声明） `L298`
  - `virtual int execute(void *p1,void *p2,void *p3)` （声明） `L299`
  - `int execute(Object *o, void *p)` （声明） `L300`
  - `int execute(MyFunc func, void *p=nullptr, bool new_thread = false)` （声明） `L301`
  - `int execute(string *fun_name, void *p=nullptr, bool new_thread = false)` （声明） `L302`
  - `int execute(char * fun_name, void *p=nullptr, bool new_thread = false)` （声明） `L303`
  - `int execute(string fun_name,void *p=nullptr, bool new_thread = false)` （声明） `L304`
  - `int execute(ObjectFunc func, void* input = nullptr, void* output = nullptr, bool new_thre…` （声明） `L305`
  - `int allot(int size=(O_BUF_LEN),void * buf_owner=nullptr)` （声明） `L307`
  - `int allot(int size,void ** o_addr)` （声明） `L308`
  - `int64_t allot(int64_t size, void** o_addr)` （声明） `L309`
  - `int allot(int old_size, void ** o_addr, int new_size, bool mem_cpy=false)` （声明） `L310`
  - `int64_t allot(int64_t old_size, void** o_addr, int64_t new_size, bool mem_cpy = false)` （声明） `L311`
  - `int delete_allot(void **addr)` （声明） `L313`
  - `int delete_allot(void* buf_owner = nullptr)` （声明） `L314`
  - `char * str2i(const char *str,int * data )` （声明） `L316`
  - `void s_toupper(string & str)` （声明） `L317`
  - `void set_upper_str(string & s)` （声明） `L318`
  - `int s_replace(string *base,string *tag,string *rep)` （声明） `L319`
  - `int s_replace(string *base, char *tag, char *rep)` （声明） `L320`
  - `int s_replace(string *base)` （声明） `L321`
  - `int toupper_replace(string *base,string *tag,string *rep)` （声明） `L322`
  - `int replace_syntax(string *tag,string *rep)` （声明） `L323`
  - `int replace_temp(string *tag,string *rep)` （声明） `L324`
  - `int replace_syntax(int upper_s=0)` （声明） `L325`
  - `int replace_temp(int upper_s=0)` （声明） `L326`
  - `int tag_temp(char *tag_value,int upper_s=1)` （声明） `L327`
  - `int add_tag_rule(CtagItem i)` （声明） `L328`
  - `int add_tag_rule(string tag, string temp, string replace)` （声明） `L329`
  - `int add_tag_rule(char* tag, char* temp, char* replace)` （声明） `L330`
  - `int my_tag_rule()` （声明） `L331`
  - `int set_time(struct tm *t,int tm_mon,int tm_mday,int tm_year=0,int tm_hour=0,int tm_min=0…` （声明） `L333`
  - `int cmp_time(struct tm *t1,struct tm *t2)` （声明） `L334`
  - `void delay_clock(clock_t count)` （声明） `L335`
  - `void delay(clock_t count)` （声明） `L336`
  - `bool is_identifier(char *str,void ** o_addr =nullptr)` （声明） `L339`
  - `bool is_path(char *str,void ** o_addr=nullptr)` （声明） `L340`
  - `bool is_definable(char *s)` （声明） `L341`
  - `string wc_s(wchar_t* wc)` （声明） `L343`
  - `wstring s_ws(string * sp)` （声明） `L344`
  - `string ws_s(wstring* ws)` （声明） `L345`
  - `int sys_cmd(wstring* cmd, int loop_count = 1)` （声明） `L347`
  - `int sys_cmd(wchar_t * cmd, int loop_count = 1)` （声明） `L348`
  - `int sys_cmd(char * cmd,int loop_count = 1)` （声明） `L349`
  - `int sys_cmd(string *cmd,int loop_count = 1)` （声明） `L350`
  - `int sys_cmd(int loop_count = 1)` （声明） `L351`
  - `int get_cmd(int argc, char *argv[],char *cmd)` （声明） `L352`
  - `int list_cmd(int argc, char *argv[])` （声明） `L353`
  - `int dispatch_cmd(int argc, char *argv[])` （声明） `L354`
  - `int dispatch_runme(void * myname, void *p = nullptr)` （声明） `L355`
  - `int clear(void *p=nullptr)` （声明） `L356`
  - `void clear_action()` （声明） `L358`
  - `bool set_action(Action* a, int count)` （声明） `L359`
  - `bool is_action(ACTION_T a, ACTION_T t, EatcionRelation r)` （声明） `L360`
  - `bool is_action_end(Action * a)` （声明） `L361`
  - `int deal_action(Action * a, int count, Object * o= nullptr)` （声明） `L362`
  - `int action_help(Action * a, int count)` （声明） `L363`
  - `ACTION_T get_action(Action * a, int count,char * name)` （声明） `L364`
  - `ACTION_T get_action(char * name)` （声明） `L365`
  - `bool get_action(Action * a, int count, char * name, ACTION_T * out)` （声明） `L366`
  - `bool get_action(char* name, ACTION_T* out)` （声明） `L367`
  - `virtual int set_action_parameter(int argc, char* argv[])` （声明） `L369`
  - `virtual int do_action(void * a)` （声明） `L370`
  - `virtual Object * get_class()` （声明） `L372`
  - `virtual Object * where()` （声明） `L373`
  - `virtual Object * who()` （声明） `L374`
  - `virtual time_t * when()` （声明） `L375`
  - `virtual size_t my_size()` （声明） `L376`
  - `virtual int how()` （声明） `L377`
  - `virtual int func(void *p=nullptr)` （声明） `L378`
  - `virtual int create(void *p=nullptr)` （声明） `L379`
  - `virtual int my_init(void *p=nullptr)` （声明） `L380`
  - `virtual int my_exit(void *p=nullptr)` （声明） `L381`
  - `virtual int my_clear(void *p=nullptr)` （声明） `L382`
  - `virtual int deal_cmd(int argc, char *argv[])` （声明） `L383`
  - `virtual int deal_cmd(int argc, char *argv[],Action * action, int action_count,int min_inp…` （声明） `L384`
  - `virtual int display(void *p=nullptr)` （声明） `L385`
  - `virtual int display(Object* o = nullptr)` （声明） `L386`
  - `virtual int deploy(void* p = nullptr)` （声明） `L387`
  - `virtual int different(void* p = nullptr)` （声明） `L388`
  - `virtual int question(void *p=nullptr)` （声明） `L389`
  - `virtual int url(void *p=nullptr)` （声明） `L390`
  - `virtual int vray(void* p = nullptr)` （声明） `L391`
  - `virtual int style(void *p=nullptr)` （声明） `L392`
  - `virtual int image(void *p=nullptr)` （声明） `L393`
  - `virtual int audio(void *p=nullptr)` （声明） `L394`
  - `virtual int video(void *p=nullptr)` （声明） `L395`
  - `virtual int get(void *p=nullptr)` （声明） `L396`
  - `virtual int help(void *p = nullptr)` （声明） `L397`
  - `virtual int ui(void *p = nullptr)` （声明） `L398`
  - `virtual int event(void *p = nullptr)` （声明） `L399`
  - `virtual int task(void *p = nullptr)` （声明） `L400`
  - `virtual int transaction(void *p = nullptr)` （声明） `L401`
  - `virtual int commit(void *p = nullptr)` （声明） `L402`
  - `virtual int interrupt(void *p = nullptr)` （声明） `L403`
  - `virtual int callback(void *p = nullptr)` （声明） `L404`
  - `virtual int exception(void *p = nullptr)` （声明） `L405`
  - `virtual int message(void *p = nullptr)` （声明） `L406`
  - `virtual int feedback(void *p = nullptr)` （声明） `L407`
  - `virtual int past(void *p = nullptr)` （声明） `L408`
  - `virtual int rollback(void *p = nullptr)` （声明） `L409`
  - `virtual int previous(void *p = nullptr)` （声明） `L410`
  - `virtual int future(void *p = nullptr)` （声明） `L411`
  - `virtual int next(void *p = nullptr)` （声明） `L412`
  - `virtual int reservation(void *p = nullptr)` （声明） `L413`
  - `virtual int current(void *p = nullptr)` （声明） `L414`
  - `virtual int condition(void *p = nullptr)` （声明） `L415`
  - `virtual int depend(void *p = nullptr)` （声明） `L416`
  - `virtual int environment(void *p = nullptr)` （声明） `L417`
  - `virtual int context(void *p = nullptr)` （声明） `L418`
  - `virtual int secure(void *p = nullptr)` （声明） `L419`
  - `virtual int runme(void * myname, void *p= nullptr)` （声明） `L420`
  - `virtual int transfer(void * myname, void *p=nullptr,Object *o = nullptr)` （声明） `L421`
  - `virtual int go(void *p = nullptr)` （声明） `L422`
  - `virtual int register_signal(int signum)` （声明） `L423`
  - `virtual int rejoin_signal(int signum)` （声明） `L424`
  - `virtual int64_t copy(uint8_t* source, uint8_t* dest, int64_t size)` （声明） `L425`
  - `virtual int64_t copy(uint8_t* source, uint8_t* dest, uint8_t* source_end)` （声明） `L426`
  - `virtual int before_object(void* p = nullptr)` （声明） `L427`
  - `virtual int after_object(void* p = nullptr)` （声明） `L428`
  - `int register_all_signal(int signum=-1)` （声明） `L429`
  - `void operator+(Object *o)` （定义） `L431`
  - `void operator+(Udata *o)` （定义） `L432`
  - `void operator-(Object *o)` （定义） `L433`
  - `void operator-(Udata *o)` （定义） `L434`
  - `void operator*(Object *o)` （定义） `L435`
  - `void operator/(Object *o)` （定义） `L436`
  - `void operator%(Object *o)` （定义） `L437`
  - `bool operator==(char *identifier)` （定义） `L439`
  - `bool operator==(string * identifier)` （定义） `L440`
  - `bool operator==(string identifier)` （定义） `L441`
  - `bool operator==(int id)` （定义） `L442`
  - `bool operator==(Object *o)` （定义） `L443`
  - `bool operator!=(char *identifier)` （定义） `L444`
  - `bool operator!=(string * identifier)` （定义） `L445`
  - `bool operator!=(string identifier)` （定义） `L446`
  - `bool operator!=(int id)` （定义） `L447`
  - `bool operator!=(Object *o)` （定义） `L448`
  - `bool operator < (Object& o)` （定义） `L449`
  - `bool operator <= (Object& o)` （定义） `L450`
  - `bool operator > (Object&o)` （定义） `L451`
  - `bool operator >= (Object&o)` （定义） `L452`
  - `bool operator || (Object&o)` （定义） `L454`
  - `bool operator && (Object&o)` （定义） `L455`
  - `bool operator ! ()` （定义） `L456`
  - `void operator + ()` （定义） `L459`
  - `void operator - ()` （定义） `L460`
  - `int operator ()()` （定义） `L464`
  - `int operator ()(Object *o)` （定义） `L465`
  - `int operator ()(Object *o, string obj_name, string fun_name, void *p = nullptr, bool new_…` （定义） `L466`
  - `int operator ()(Object *o, char *obj_name, char * fun_name, void *p = nullptr, bool new_t…` （定义） `L467`
  - `int operator ()(Object *o, string *obj_name, string * fun_name = nullptr, void *p = nullp…` （定义） `L468`
  - `int operator ()(void *p)` （定义） `L469`
  - `int operator ()(void *p1, void *p2)` （定义） `L470`
  - `int operator ()(void *p1, void *p2, void *p3)` （定义） `L471`
  - `int operator ()(Object *o, void *p)` （定义） `L472`
  - `int operator ()(MyFunc func, void *p = nullptr, bool new_thread = false)` （定义） `L473`
  - `int operator ()(string *fun_name, void *p = nullptr, bool new_thread = false)` （定义） `L474`
  - `int operator ()(char * fun_name, void *p = nullptr, bool new_thread = false)` （定义） `L475`
  - `int operator ()(string fun_name, void *p = nullptr, bool new_thread = false)` （定义） `L476`
  - `void operator ++ ()` （定义） `L479`
  - `void operator ++ (int i)` （定义） `L480`
  - `void operator --()` （定义） `L481`
  - `void operator -- (int i)` （定义） `L482`
  - `void operator | (Object& o)` （定义） `L484`
  - `void operator & (Object& o)` （定义） `L485`
  - `void operator ^ (Object& o)` （定义） `L486`
  - `void operator << (int i)` （定义） `L487`
  - `void operator >> (int i)` （定义） `L488`
  - `void operator ~ ()` （定义） `L489`
  - `void operator += (const Object& o)` （定义） `L491`
  - `void operator -= (const Object& o)` （定义） `L492`
  - `void operator *= (const Object& o)` （定义） `L493`
  - `void operator /= (const Object& o)` （定义） `L494`
  - `void operator %= (const Object& o)` （定义） `L495`
  - `void operator &= (const Object& o)` （定义） `L496`
  - `void operator |= (const Object& o)` （定义） `L497`
  - `void operator ^= (const Object& o)` （定义） `L498`
  - `void operator <<= (int i)` （定义） `L499`
  - `void operator >>= (int i)` （定义） `L500`
  - `void operator = (const Object& o)` （定义） `L504`
  - `void operator = (Oinput* i)` （定义） `L505`
  - `void operator = (Omove* m)` （定义） `L506`

#### n_object::Cobject  `L510`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cobject()` （声明） `L512`
  - `int my_init(void *p= nullptr)` （声明） `L514`

## object/object_def.h (28 行)

### 宏 #define (14)
- `OBJECT_DEF_H`（无值，通常为头文件守卫）  `L2`
- `PAGE_4K` = (4*1024)  `L4`
- `O_BUF_LEN` = PAGE_4K  `L5`
- `AT_LINE` = {std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":";}  `L6`
- `OUT_LINE` = {std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"\n";}  `L7`
- `WHERE_I` = {std::cout<<"[Location] File:"<<__FILE__<<" Function:"<<__FUNCTION_…  `L8`
- `I_AM_HERE` = WHERE_I  `L9`
- `OUT_LINE_N` = (n) {std::cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"n…  `L10`
- `OUT_ERROR` = {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"…  `L11`
- `OUT_ERROR_N` = (n) {std::cout<<"Error:"<<n<<"/"<<__FILE__<<"/"<<__FUNCTION__<<"/"<…  `L12`
- `ERROR_EXIT` = {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"…  `L13`
- `ERROR_EXIT_N` = (n) {std::cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE_…  `L14`
- `T_TYPE` = template<typename T>  `L17`
- `BUF_SIZE` = PAGE_4K  `L21`

### typedef / using (3)
- `typedef unsigned char uint8`  `L24`
- `typedef unsigned int uint32`  `L25`
- `typedef unsigned long long uint64`  `L26`
