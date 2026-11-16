# src/my_sql

> 统计: 3 文件 / 727 行 / 1 类 / 40 方法 / 47 自由函数 / 11 成员变量 / 0 全局变量 / 20 宏 / 0 typedef / 2 枚举

## my_sql/my_sql.cpp (557 行)

### 宏 #define (4)
- `MY_SQL_TEST` = 0  `L5`
- `MYSQL_LIB_SUPPORT` = 1  `L9`
- `MYSQL_INIT_IN_CONSTRUCTOR` = 1  `L14`
- `MYSQL_INIT_IN_CONSTRUCTOR` = 0  `L16`

### 函数 (47)
- `Cmy_sql::my_init()` — 定义  `L20`
- `Cmy_sql::my_init()` — 定义  `L32`
- `Cmy_sql::Cmy_sql()` — 定义  `L43`
- `Cmy_sql::Cmy_sql()` — 定义  `L49`
- `Cmy_sql::Cmy_sql()` — 定义  `L63`
- `Cmy_sql::connect()` — 定义  `L71`
- `Cmy_sql::connect()` — 定义  `L97`
- `Cmy_sql::query()` — 定义  `L104`
- `Cmy_sql::query()` — 定义  `L116`
- `Cmy_sql::query()` — 定义  `L122`
- `Cmy_sql::get()` — 定义  `L129`
- `Cmy_sql::get()` — 定义  `L150`
- `Cmy_sql::get()` — 定义  `L156`
- `Cmy_sql::output()` — 定义  `L161`
- `Cmy_sql::get()` — 定义  `L179`
- `Cmy_sql::get()` — 定义  `L209`
- `Cmy_sql::get()` — 定义  `L215`
- `Cmy_sql::get()` — 定义  `L220`
- `Cmy_sql::execute()` — 定义  `L227`
- `Cmy_sql::execute()` — 定义  `L243`
- `Cmy_sql::execute()` — 定义  `L250`
- `Cmy_sql::execute()` — 定义  `L255`
- `Cmy_sql::execute()` — 定义  `L273`
- `Cmy_sql::drop_db()` — 定义  `L278`
- `Cmy_sql::drop_tab()` — 定义  `L287`
- `Cmy_sql::create_db()` — 定义  `L296`
- `Cmy_sql::create_tab()` — 定义  `L304`
- `Cmy_sql::create_tab()` — 定义  `L312`
- `Cmy_sql::create_tab_cmd()` — 定义  `L317`
- `Cmy_sql::verify_id_second()` — 定义  `L327`
- `Cmy_sql::verify_id_first()` — 定义  `L348`
- `Cmy_sql::verify_id_cmd()` — 定义  `L363`
- `Cmy_sql::update_uuid_second()` — 定义  `L375`
- `Cmy_sql::update_uuid_first()` — 定义  `L393`
- `Cmy_sql::update_uuid_cmd()` — 定义  `L402`
- `Cmy_sql::add_uuid_cmd()` — 定义  `L416`
- `Cmy_sql::show_db()` — 定义  `L430`
- `Cmy_sql::show_tab()` — 定义  `L437`
- `Cmy_sql::show_col()` — 定义  `L445`
- `Cmy_sql::is_exist()` — 定义  `L453`
- `Cmy_sql::execute()` — 定义  `L463`
- `Cmy_sql::store_result()` — 定义  `L473`
- `Cmy_sql::store_result()` — 定义  `L478`
- `Cmy_sql::func()` — 定义  `L485`
- `Cmy_sql::do_action()` — 定义  `L497`
- `Cmy_sql::deal_cmd()` — 定义  `L515`
- `main()` — 定义  `L551`

> 完整签名见 JSON。

## my_sql/my_sql.h (68 行)

### 宏 #define (1)
- `MY_SQL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_my_sql::Cmy_sql  `L8`  `class`
- 继承: `Csql`
- 成员变量 (11): `MYSQL mysql_i`、`MYSQL mysql`、`MYSQL_RES  * result`、`MYSQL_FIELD * fields`、`MYSQL_ROW row`、`char * host`、`char * user`、`char * password`、`char * use_db`、`bool is_connect`、`string uuid_s`
- 方法 (40):
  - `Cmy_sql()` （声明） `L21`
  - `Cmy_sql(char * password,char * user=(char *)" ",char * host=(char *)" ",char * use_db=nul…` （声明） `L23`
  - `~Cmy_sql()` （声明） `L24`
  - `int my_init(char * password, char * user = (char *)" ", char * host = (char *)" ", char *…` （声明） `L25`
  - `int my_init(void *p=nullptr)` （声明） `L26`
  - `int connect()` （声明） `L27`
  - `int query(char *sql)` （声明） `L28`
  - `int query()` （声明） `L29`
  - `int get(MYSQL_RES *result,MYSQL_FIELD *fields,bool show=false)` （声明） `L30`
  - `int get(MYSQL_FIELD *fields,bool show=false)` （声明） `L31`
  - `int get(MYSQL_RES *result,MYSQL_ROW row,Object *o=nullptr)` （声明） `L32`
  - `int get(MYSQL_RES *result,Object *o=nullptr)` （声明） `L33`
  - `int get(void *p=nullptr,Object *o=nullptr)` （声明） `L34`
  - `int execute(Object *o)` （声明） `L35`
  - `int execute()` （声明） `L36`
  - `int execute(char * sql,Object *o=nullptr)` （声明） `L37`
  - `int execute(string * sql, Object *o= nullptr)` （声明） `L38`
  - `int execute(void *p1,void *p2,void *p3)` （声明） `L39`
  - `MYSQL_RES * store_result(void * mysql)` （声明） `L40`
  - `int output(void *p1, void *p2, void *p3)` （声明） `L41`
  - `int func(void *p=nullptr)` （声明） `L42`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L43`
  - `int do_action(void * a=nullptr)` （声明） `L44`
  - `int create_db(char * db_name)` （声明） `L45`
  - `int create_tab(char * db_name, char * tab_name)` （声明） `L46`
  - `int create_tab()` （声明） `L47`
  - `int create_tab_cmd(void *p =nullptr)` （声明） `L48`
  - `int drop_db(char * db_name)` （声明） `L49`
  - `int drop_tab(char * db_name,char * tab_name)` （声明） `L50`
  - `int verify_id_cmd()` （声明） `L51`
  - `int verify_id_first(void *p = nullptr)` （声明） `L52`
  - `int verify_id_second(void *p1, void *p2, void *p3)` （声明） `L53`
  - `int update_uuid_second(void *p1, void *p2, void *p3)` （声明） `L54`
  - `int update_uuid_first(void *p)` （声明） `L55`
  - `int update_uuid_cmd()` （声明） `L56`
  - `int add_uuid_cmd()` （声明） `L57`
  - `int show_db()` （声明） `L58`
  - `int show_tab(char * db_name)` （声明） `L59`
  - `int show_col(char * db_name, char * tab_name)` （声明） `L60`
  - `int is_exist(char * db_name, char * tab_name, char * col_name, char * col_value)` （声明） `L61`

## my_sql/my_sql_action.h (102 行)

### 宏 #define (15)
- `MY_SQL_ACTION_H`（无值，通常为头文件守卫）  `L2`
- `ADD_UUID_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `uuid` VARCHAR(45) NOT NULL;"  `L35`
- `CREATE_DB` = "CREATE SCHEMA `%s` DEFAULT CHARACTER SET utf8 ;"  `L37`
- `DROP_DB` = "DROP DATABASE `%s` ;"  `L39`
- `DROP_TAB` = "DROP TABLE `%s`.`%s`;"  `L40`
- `SELECT_ID_X` = "SELECT %s FROM `%s`.`%s` ;"  `L42`
- `UPDATE_ID_X` = "UPDATE `%s`.`%s` SET `%s`='%d' WHERE `%s`='%d';"  `L43`
- `ALTER_AUTO_INCREMENT` = "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"  `L44`
- `SELECT_UUID` = "SELECT %s FROM `%s`.`%s` ;"  `L45`
- `UPDATE_UUID` = "UPDATE `%s`.`%s` SET `uuid` = '%s' WHERE(`%s` = '%s');"  `L46`
- `IS_EXIST` = "SELECT %s FROM `%s`.`%s`  WHERE %s = \"%s\"  LIMIT 1;"  `L47`
- `SHOW_DB` = "SHOW DATABASES ;"  `L49`
- `SHOW_TAB` = "SHOW TABLES FROM %s ;"  `L50`
- `SHOW_COL` = "SHOW COLUMNS FROM %s.%s ;"  `L51`
- `CREATE_TAB` = " CREATE TABLE `%s`.`%s` ( `id` BIGINT NOT NULL AUTO_INCREMENT, `uu…  `L101`

### 枚举 enum class MySqlActionClass   `L6`
- none、select、delete_、create、insert、alert、update、drop、query

### 枚举 enum class MySqlAtcion   `L19`
- none、create_db、create_tab、drop_db、drop_tab、query、verify_id、add_uuid、update_uuid、show_db、show_tab、show_col、is_exist
