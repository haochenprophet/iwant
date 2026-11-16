# src/stock

> 统计: 7 文件 / 1794 行 / 5 类 / 125 方法 / 127 自由函数 / 35 成员变量 / 4 全局变量 / 56 宏 / 2 typedef / 4 枚举

## stock/stock_db.cpp (1135 行)

### 宏 #define (1)
- `STOCK_DB_TEST` = 0  `L1122`

### 函数 (113)
- `Cstock_db::my_init()` — 定义  `L4`
- `Cstock_db::Cstock_db()` — 定义  `L11`
- `Cstock_db::Cstock_db()` — 定义  `L23`
- `Cstock_db::verify_id_second()` — 定义  `L27`
- `Cstock_db::verify_id_first()` — 定义  `L48`
- `Cstock_db::verify_id_cmd()` — 定义  `L64`
- `Cstock_db::add_ma_second()` — 定义  `L71`
- `Cstock_db::add_ma_first()` — 定义  `L90`
- `Cstock_db::add_ma_cmd()` — 定义  `L98`
- `Cstock_db::calculate_ma_second()` — 定义  `L103`
- `Cstock_db::calculate_ma_first()` — 定义  `L121`
- `Cstock_db::calculate_ma_cmd()` — 定义  `L129`
- `Cstock_db::print_all_data()` — 定义  `L140`
- `Cstock_db::add_avg_second()` — 定义  `L152`
- `Cstock_db::add_avg_first()` — 定义  `L165`
- `Cstock_db::add_avg_cmd()` — 定义  `L173`
- `Cstock_db::build_batch_second()` — 定义  `L179`
- `Cstock_db::build_batch_first()` — 定义  `L190`
- `Cstock_db::build_batch_cmd()` — 定义  `L197`
- `Cstock_db::calculate_avg_second()` — 定义  `L208`
- `Cstock_db::calculate_avg_first()` — 定义  `L230`
- `Cstock_db::calculate_avg_cmd()` — 定义  `L238`
- `Cstock_db::add_rd_second()` — 定义  `L244`
- `Cstock_db::add_rd_first()` — 定义  `L256`
- `Cstock_db::add_rd_cmd()` — 定义  `L264`
- `Cstock_db::calculate_rd_second()` — 定义  `L269`
- `Cstock_db::calculate_rd_first()` — 定义  `L284`
- `Cstock_db::calculate_rd_cmd()` — 定义  `L291`
- `Cstock_db::delete_zero_second()` — 定义  `L299`
- `Cstock_db::delete_zero_first()` — 定义  `L313`
- `Cstock_db::delete_zero_cmd()` — 定义  `L320`
- `Cstock_db::add_kprice_second()` — 定义  `L325`
- `Cstock_db::add_kprice_first()` — 定义  `L338`
- `Cstock_db::add_kprice_cmd()` — 定义  `L346`
- `Cstock_db::add_column()` — 定义  `L358`
- `Cstock_db::add_ma5_second()` — 定义  `L367`
- `Cstock_db::add_ma5_first()` — 定义  `L375`
- `Cstock_db::add_ma5_cmd()` — 定义  `L383`
- `Cstock_db::add_ma10_second()` — 定义  `L388`
- `Cstock_db::add_ma10_first()` — 定义  `L396`
- `Cstock_db::add_ma10_cmd()` — 定义  `L404`
- `Cstock_db::add_ma20_second()` — 定义  `L409`
- `Cstock_db::add_ma20_first()` — 定义  `L417`
- `Cstock_db::add_ma20_cmd()` — 定义  `L425`
- `Cstock_db::add_ma30_second()` — 定义  `L430`
- `Cstock_db::add_ma30_first()` — 定义  `L438`
- `Cstock_db::add_ma30_cmd()` — 定义  `L446`
- `Cstock_db::add_ma60_second()` — 定义  `L451`
- `Cstock_db::add_ma60_first()` — 定义  `L459`
- `Cstock_db::add_ma60_cmd()` — 定义  `L467`
- `Cstock_db::add_ma100_second()` — 定义  `L472`
- `Cstock_db::add_ma100_first()` — 定义  `L480`
- `Cstock_db::add_ma100_cmd()` — 定义  `L488`
- `Cstock_db::calculate_ma()` — 定义  `L493`
- `Cstock_db::calculate_ma5_second()` — 定义  `L511`
- `Cstock_db::calculate_ma5_first()` — 定义  `L519`
- `Cstock_db::calculate_ma5_cmd()` — 定义  `L527`
- `Cstock_db::calculate_ma10_second()` — 定义  `L533`
- `Cstock_db::calculate_ma10_first()` — 定义  `L541`
- `Cstock_db::calculate_ma10_cmd()` — 定义  `L549`
- `Cstock_db::calculate_ma20_second()` — 定义  `L555`
- `Cstock_db::calculate_ma20_first()` — 定义  `L563`
- `Cstock_db::calculate_ma20_cmd()` — 定义  `L571`
- `Cstock_db::calculate_ma30_second()` — 定义  `L577`
- `Cstock_db::calculate_ma30_first()` — 定义  `L585`
- `Cstock_db::calculate_ma30_cmd()` — 定义  `L593`
- `Cstock_db::calculate_ma60_second()` — 定义  `L599`
- `Cstock_db::calculate_ma60_first()` — 定义  `L607`
- `Cstock_db::calculate_ma60_cmd()` — 定义  `L615`
- `Cstock_db::calculate_ma100_second()` — 定义  `L621`
- `Cstock_db::calculate_ma100_first()` — 定义  `L629`
- `Cstock_db::calculate_ma100_cmd()` — 定义  `L637`
- `Cstock_db::add_am_second()` — 定义  `L643`
- `Cstock_db::add_am_first()` — 定义  `L650`
- `Cstock_db::add_am_cmd()` — 定义  `L657`
- `Cstock_db::calculate_am_second()` — 定义  `L663`
- `Cstock_db::calculate_am_first()` — 定义  `L678`
- `Cstock_db::calculate_am_cmd()` — 定义  `L686`
- `Cstock_db::calculate_kp_second()` — 定义  `L693`
- `Cstock_db::calculate_kp_first()` — 定义  `L706`
- `Cstock_db::calculate_kp_cmd()` — 定义  `L714`
- `Cstock_db::add_dir_second()` — 定义  `L720`
- `Cstock_db::add_dir_first()` — 定义  `L728`
- `Cstock_db::add_dir_cmd()` — 定义  `L736`
- `Cstock_db::execute_add_cmd()` — 定义  `L741`
- `Cstock_db::calculate_dir_second()` — 定义  `L754`
- `Cstock_db::calculate_dir_first()` — 定义  `L772`
- `Cstock_db::calculate_dir_cmd()` — 定义  `L780`
- `Cstock_db::clear_dir_second()` — 定义  `L786`
- `Cstock_db::clear_dir_first()` — 定义  `L801`
- `Cstock_db::clear_dir_cmd()` — 定义  `L809`
- `Cstock_db::create_dir_cmd()` — 定义  `L816`
- `Cstock_db::insert_dir_id_cmd()` — 定义  `L823`
- `Cstock_db::alert_dir_key_cmd()` — 定义  `L830`
- `Cstock_db::update_dir_second()` — 定义  `L838`
- `Cstock_db::update_dir_first()` — 定义  `L852`
- `Cstock_db::update_dir_cmd()` — 定义  `L860`
- `Cstock_db::insert_dir_second()` — 定义  `L867`
- `Cstock_db::insert_dir_first()` — 定义  `L890`
- `Cstock_db::insert_dir_cmd()` — 定义  `L898`
- `Cstock_db::add_type_cmd()` — 定义  `L903`
- `Cstock_db::update_type_cmd()` — 定义  `L910`
- `Cstock_db::verify_ma_second()` — 定义  `L915`
- `Cstock_db::verify_ma_first()` — 定义  `L935`
- `Cstock_db::verify_ma_cmd()` — 定义  `L942`
- `Cstock_db::execute()` — 定义  `L947`
- `Cstock_db::func()` — 定义  `L985`
- `Cstock_db::parse_run_action()` — 定义  `L1022`
- `Cstock_db::display()` — 定义  `L1066`
- `Cstock_db::do_action()` — 定义  `L1076`
- `Cstock_db::action_cmd()` — 定义  `L1083`
- `Cstock_db::deal_cmd()` — 定义  `L1090`
- `main()` — 定义  `L1128`

> 完整签名见 JSON。

## stock/stock_db.h (137 行)

### 宏 #define (1)
- `STOCK_DB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_stock_db::Cstock_db  `L8`  `class`
- 继承: `Object`
- 成员变量 (8): `Cmy_sql * my_sql`、`Cmy_sql * pm`、`MYSQL_RES  * result`、`MYSQL_ROW row`、`int * num_fields`、`long * lengths`、`int stock_id_type`、`string s_str`
- 方法 (112):
  - `Cstock_db()` （声明） `L18`
  - `~Cstock_db()` （声明） `L20`
  - `int my_init(void *p=nullptr)` （声明） `L21`
  - `int execute(void *p1, void *p2, void *p3)` （声明） `L22`
  - `int func(void *p = nullptr)` （声明） `L23`
  - `int parse_run_action()` （声明） `L24`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L25`
  - `int do_action(void * a)` （声明） `L26`
  - `int display(ActionInfo * a)` （声明） `L27`
  - `int action_cmd()` （声明） `L28`
  - `int verify_id_cmd()` （声明） `L29`
  - `int verify_id_first(void *p = nullptr)` （声明） `L30`
  - `int verify_id_second(void *p1, void *p2, void *p3)` （声明） `L31`
  - `int add_ma_cmd()` （声明） `L32`
  - `int add_ma_first(void *p = nullptr)` （声明） `L33`
  - `int add_ma_second(void *p1, void *p2, void *p3)` （声明） `L34`
  - `int print_all_data(MYSQL_ROW row, unsigned int* num_fields, unsigned long *lengths)` （声明） `L35`
  - `int calculate_ma_cmd()` （声明） `L36`
  - `int calculate_ma_first(void *p = nullptr)` （声明） `L37`
  - `int calculate_ma_second(void *p1, void *p2, void *p3)` （声明） `L38`
  - `int add_avg_second(void *p1, void *p2, void *p3)` （声明） `L39`
  - `int add_avg_first(void *p)` （声明） `L40`
  - `int add_avg_cmd()` （声明） `L41`
  - `int build_batch_second(void *p1, void *p2, void *p3)` （声明） `L42`
  - `int build_batch_first(void *p)` （声明） `L43`
  - `int build_batch_cmd()` （声明） `L44`
  - `int calculate_avg_second(void *p1, void *p2, void *p3)` （声明） `L45`
  - `int calculate_avg_first(void *p)` （声明） `L46`
  - `int calculate_avg_cmd()` （声明） `L47`
  - `int add_rd_second(void *p1, void *p2, void *p3)` （声明） `L48`
  - `int add_rd_first(void *p)` （声明） `L49`
  - `int add_rd_cmd()` （声明） `L50`
  - `int calculate_rd_second(void *p1, void *p2, void *p3)` （声明） `L51`
  - `int calculate_rd_first(void *p)` （声明） `L52`
  - `int calculate_rd_cmd()` （声明） `L53`
  - `int delete_zero_second(void *p1, void *p2, void *p3)` （声明） `L54`
  - `int delete_zero_first(void *p)` （声明） `L55`
  - `int delete_zero_cmd()` （声明） `L56`
  - `int add_kprice_second(void *p1, void *p2, void *p3)` （声明） `L57`
  - `int add_kprice_first(void *p)` （声明） `L58`
  - `int add_kprice_cmd()` （声明） `L59`
  - `int add_column(char * sql, char *db, char * table)` （声明） `L60`
  - `int add_ma5_second(void *p1, void *p2, void *p3)` （声明） `L61`
  - `int add_ma5_first(void *p = nullptr)` （声明） `L62`
  - `int add_ma5_cmd()` （声明） `L63`
  - `int add_ma10_second(void *p1, void *p2, void *p3)` （声明） `L64`
  - `int add_ma10_first(void *p = nullptr)` （声明） `L65`
  - `int add_ma10_cmd()` （声明） `L66`
  - `int add_ma20_second(void *p1, void *p2, void *p3)` （声明） `L67`
  - `int add_ma20_first(void *p = nullptr)` （声明） `L68`
  - `int add_ma20_cmd()` （声明） `L69`
  - `int add_ma30_second(void *p1, void *p2, void *p3)` （声明） `L70`
  - `int add_ma30_first(void *p = nullptr)` （声明） `L71`
  - `int add_ma30_cmd()` （声明） `L72`
  - `int add_ma60_second(void *p1, void *p2, void *p3)` （声明） `L73`
  - `int add_ma60_first(void *p = nullptr)` （声明） `L74`
  - `int add_ma60_cmd()` （声明） `L75`
  - `int add_ma100_second(void *p1, void *p2, void *p3)` （声明） `L76`
  - `int add_ma100_first(void *p = nullptr)` （声明） `L77`
  - `int add_ma100_cmd()` （声明） `L78`
  - `int calculate_ma(int x)` （声明） `L79`
  - `int calculate_ma5_second(void *p1, void *p2, void *p3)` （声明） `L80`
  - `int calculate_ma5_first(void *p)` （声明） `L81`
  - `int calculate_ma5_cmd()` （声明） `L82`
  - `int calculate_ma10_second(void *p1, void *p2, void *p3)` （声明） `L83`
  - `int calculate_ma10_first(void *p)` （声明） `L84`
  - `int calculate_ma10_cmd()` （声明） `L85`
  - `int calculate_ma20_second(void *p1, void *p2, void *p3)` （声明） `L86`
  - `int calculate_ma20_first(void *p)` （声明） `L87`
  - `int calculate_ma20_cmd()` （声明） `L88`
  - `int calculate_ma30_second(void *p1, void *p2, void *p3)` （声明） `L89`
  - `int calculate_ma30_first(void *p)` （声明） `L90`
  - `int calculate_ma30_cmd()` （声明） `L91`
  - `int calculate_ma60_second(void *p1, void *p2, void *p3)` （声明） `L92`
  - `int calculate_ma60_first(void *p)` （声明） `L93`
  - `int calculate_ma60_cmd()` （声明） `L94`
  - `int calculate_ma100_second(void *p1, void *p2, void *p3)` （声明） `L95`
  - `int calculate_ma100_first(void *p)` （声明） `L96`
  - `int calculate_ma100_cmd()` （声明） `L97`
  - `int add_am_second(void *p1, void *p2, void *p3)` （声明） `L98`
  - `int add_am_first(void *p)` （声明） `L99`
  - `int add_am_cmd()` （声明） `L100`
  - `int calculate_am_second(void *p1, void *p2, void *p3)` （声明） `L101`
  - `int calculate_am_first(void *p)` （声明） `L102`
  - `int calculate_am_cmd()` （声明） `L103`
  - `int calculate_kp_second(void *p1, void *p2, void *p3)` （声明） `L104`
  - `int calculate_kp_first(void *p)` （声明） `L105`
  - `int calculate_kp_cmd()` （声明） `L106`
  - `int add_dir_second(void *p1, void *p2, void *p3)` （声明） `L107`
  - `int add_dir_first(void *p = nullptr)` （声明） `L108`
  - `int add_dir_cmd()` （声明） `L109`
  - `int calculate_dir_second(void *p1, void *p2, void *p3)` （声明） `L110`
  - `int calculate_dir_first(void *p = nullptr)` （声明） `L111`
  - `int calculate_dir_cmd()` （声明） `L112`
  - `int clear_dir_second(void *p1, void *p2, void *p3)` （声明） `L113`
  - `int clear_dir_first(void *p = nullptr)` （声明） `L114`
  - `int clear_dir_cmd()` （声明） `L115`
  - `int create_dir_cmd()` （声明） `L116`
  - `int insert_dir_id_cmd()` （声明） `L117`
  - `int alert_dir_key_cmd()` （声明） `L118`
  - `int update_dir_second(void *p1, void *p2, void *p3)` （声明） `L119`
  - `int update_dir_first(void *p = nullptr)` （声明） `L120`
  - `int update_dir_cmd()` （声明） `L121`
  - `int insert_dir_second(void *p1, void *p2, void *p3)` （声明） `L122`
  - `int insert_dir_first(void *p = nullptr)` （声明） `L123`
  - `int insert_dir_cmd()` （声明） `L124`
  - `int execute_add_cmd(Action * a, int count)` （声明） `L125`
  - `int add_type_cmd()` （声明） `L126`
  - `int update_type_cmd()` （声明） `L127`
  - `int verify_ma_second(void *p1, void *p2, void *p3)` （声明） `L128`
  - `int verify_ma_first(void *p = nullptr)` （声明） `L129`
  - `int verify_ma_cmd()` （声明） `L130`

## stock/stock_db_action.h (128 行)

### 宏 #define (47)
- `STOCK_DB_ACTION_H`（无值，通常为头文件守卫）  `L2`
- `CREATE_DIR_TABLE` = "CREATE TABLE `%s`.`dir` ( `iddir` INT NOT NULL AUTO_INCREMENT, `st…  `L72`
- `SELECT_STOCK_ID` = "SELECT ID FROM stock.ID;"  `L74`
- `SELECT_IDPEICE` = "SELECT idprice FROM `%s`.`%s` ;"  `L75`
- `SELECT_AVG_MA` = "SELECT avg(ma) FROM `%s`.`%s` where idprice<=%s;"  `L76`
- `SELECT_AVG_MA_X` = "SELECT avg(ma) FROM `%s`.`%s` where idprice <= %s and idprice >= (…  `L77`
- `SELECT_AVG_CLOSE_X` = "SELECT avg(close) FROM `%s`.`%s` where idprice <= %s and idprice >…  `L78`
- `SELECT_DIR_0` = "SELECT idprice FROM `%s`.`%s` where dir=0;"  `L79`
- `SELECT_DIR` = "SELECT ID FROM `%s`.dir;"  `L80`
- `SELECT_DIR_LAST` = "SELECT dir FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1;"  `L81`
- `SELECT_TYPE` = "SELECT `type` FROM `%s`.ID where ID =`%s`;"  `L82`
- `SELECT_TYPE_0` = "SELECT ID FROM stock.ID where type=0;"  `L83`
- `SELECT_TYPE_1` = "SELECT ID FROM stock.ID where type=1;"  `L84`
- `SELECT_LAST_KPRICE` = "SELECT `k_price` FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1 ;"  `L85`
- `ADD_MA_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;"  `L87`
- `ADD_AVG_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `avg` DOUBLE NOT NULL DEFAULT 0;"  `L88`
- `ADD_RD_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `rd` DOUBLE NOT NULL DEFAULT 0;"  `L89`
- `ADD_K_PRICE_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `k_price` DOUBLE NOT NULL DEFAULT…  `L90`
- `ADD_MA5_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma5` DOUBLE NOT NULL DEFAULT 0 C…  `L91`
- `ADD_MA10_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma10` DOUBLE NOT NULL DEFAULT 0 …  `L92`
- `ADD_MA20_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma20` DOUBLE NOT NULL DEFAULT 0 …  `L93`
- `ADD_MA30_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma30` DOUBLE NOT NULL DEFAULT 0 …  `L94`
- `ADD_MA60_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma60` DOUBLE NOT NULL DEFAULT 0 …  `L95`
- `ADD_MA100_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `ma100` DOUBLE NOT NULL DEFAULT 0…  `L96`
- `ADD_AM_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `am` DOUBLE NOT NULL DEFAULT 0 CO…  `L97`
- `ADD_DIR_COLUMN` = "ALTER TABLE `%s`.`%s` ADD COLUMN `dir` DOUBLE NOT NULL DEFAULT 0 C…  `L98`
- `UPDATE_IDPEICE` = "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';"  `L100`
- `UPDATE_AVG` = "UPDATE `%s`.`%s` SET `avg`='%s' WHERE `idprice`='%s' AND `avg`=0;"  `L101`
- `UPDATE_RD` = "UPDATE  `%s`.`%s` SET rd = (close - y_close) / y_close * 100 WHERE…  `L102`
- `UPDATE_MA` = "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND…  `L103`
- `UPDATE_MA_CLOSE` = "UPDATE  `%s`.`%s` SET ma = close WHERE  ma=0;"  `L104`
- `UPDATE_MA_X` = "UPDATE `%s`.`%s` SET `ma%d`='%s' WHERE `idprice`='%s' AND `ma%d`=0;"  `L105`
- `UPDATE_AM` = "UPDATE  `%s`.`%s` SET am = (high - low) / close * 100 WHERE high >…  `L106`
- `UPDATE_KP` = "UPDATE  `%s`.`%s` SET k_price = ma WHERE rd >5 OR rd <-5 OR am >6;"  `L107`
- `UPDATE_DIR_0` = "UPDATE `%s`.`%s` SET dir = 0;"  `L108`
- `UPDATE_DIR` = "UPDATE `%s`.`dir` SET `dir`=(SELECT dir FROM `%s`.`%s` ORDER BY id…  `L109`
- `UPDATE_DIR_TEST` = "UPDATE `%s`.`dir` SET `dir`=1 WHERE `ID`='%s';"  `L110`
- `UPDATE_TYPE_ID` = "UPDATE `stock`.`ID` SET `type`='1' WHERE `idID`<10;"  `L111`
- `ALTER_AUTO_INCREMENT` = "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"  `L113`
- `ALTER_DIR_PKEY` = "ALTER TABLE `%s`.`dir` DROP PRIMARY KEY, ADD PRIMARY KEY(`iddir`, …  `L114`
- `ALTER_ADD_TYPE` = "ALTER TABLE `%s`.`%s` ADD COLUMN `type` INT NOT NULL DEFAULT 0 ;"  `L115`
- `SET_SAFE_UPDATES_0` = "SET SQL_SAFE_UPDATES = 0;"  `L117`
- `SET_SAFE_UPDATES_1` = "SET SQL_SAFE_UPDATES = 1;"  `L118`
- `DELETE_ZERO_ROW` = "DELETE FROM `%s`.`%s` WHERE `y_close`='0' AND `open`='0'AND `close…  `L120`
- `INSERT_DIR_ID` = "INSERT INTO `%s`.`dir` (`stockid`) SELECT ID FROM `%s`.`ID`;"  `L122`
- `INSERT_DIR` = "INSERT INTO `%s`.`dir` (`stockid`,`dir`,`k_price`) VALUES('%s', (S…  `L123`
- `BUILD_BATCH` = "%s %s %s %s"  `L125`

### 枚举 enum class StockActionClass   `L5`
- none、verify、add、calculate、delete_、build、execute、clear、create、insert、alert、update

### 枚举 enum class StockAtcion   `L21`
- 共 38 个枚举常量（详情见 JSON）

## stock/stock_question.cpp (277 行)

### 宏 #define (1)
- `QUESTION_TEST` = 0  `L266`

### 函数 (12)
- `Cquestion::my_init()` — 定义  `L8`
- `Cquestion::Cquestion()` — 定义  `L16`
- `Cquestion::Cquestion()` — 定义  `L26`
- `Cquestion::q_dir_value()` — 定义  `L36`
- `Cquestion::q_type()` — 定义  `L65`
- `Cquestion::get_depend()` — 定义  `L118`
- `Cquestion::q_question()` — 定义  `L161`
- `Cquestion::q_question()` — 定义  `L185`
- `Cquestion::get_result()` — 定义  `L212`
- `Cquestion::get_feedback()` — 定义  `L255`
- `Cquestion::question()` — 定义  `L260`
- `main()` — 定义  `L271`

> 完整签名见 JSON。

### 全局变量 (4)
- `int Cquestion:: q_count`  `L3`
- `int Cquestion:: q_value`  `L4`
- `int Cquestion:: q_direction`  `L5`
- `int Cquestion:: loop_count`  `L6`

## stock/stock_question.h (84 行)

### 宏 #define (3)
- `QUESTION_H`（无值，通常为头文件守卫）  `L2`
- `Q_SWITCH_LEN` = 4  `L42`
- `Q_BUF_LEN` = O_BUF_LEN  `L53`

### 枚举 enum E_QTYPE   `L6`
- Q_SWITCH、Q_CHOICE、Q_STRING、Q_EXPR、Q_CODE、Q_FILE、Q_IMAGE

### 枚举 enum E_QACTION   `L16`
- Q_WAIT_CHAR、Q_WAIT_STR

### typedef / using (2)
- `typedef struct Squestion;`  `L33`
- `typedef union Uqresult;`  `L41`

### 类 (3)
#### 全局::Squestion_T (typedef 别名 `Squestion`)  `L21`  `struct`
- 成员变量 (11): `int id`、`int type`、`char * sQ`、`char * sA`、`char * sR`、`char * sF`、`char * sD`、`int depend`、`int result`、`int status`、`int action`

#### 全局::Uqresult_T (typedef 别名 `Uqresult`)  `L37`  `union`
- 成员变量 (2): `char c_abcd`、`int i_abcd`

#### n_question::Cquestion  `L50`  `class`
- 继承: `Cstock_db`
- 成员变量 (14): `char * q_buf`、`char * a_buf`、`char * r_buf`、`char * f_buf`、`char * d_buf`、`int q_buf_len`、`int a_buf_len`、`int r_buf_len`、`int f_buf_len`、`int d_buf_len`、`int q_count`、`int q_value`、`int q_direction`、`int loop_count`
- 方法 (11):
  - `Cquestion()` （声明） `L60`
  - `~Cquestion()` （声明） `L62`
  - `int my_init(void *p=nullptr)` （声明） `L63`
  - `int q_type(int type,char *sR,char * fB,int action=Q_WAIT_CHAR)` （声明） `L64`
  - `int q_dir_value(char *sR,char* fB,int abcd)` （声明） `L65`
  - `int q_question(char * sQ,char *sA ,char *sR,char* fB=nullptr,int type=Q_SWITCH,int action…` （声明） `L66`
  - `int q_question(Squestion *q,char *log=nullptr)` （声明） `L67`
  - `char * get_depend(char * sD,int abcd,int type=Q_SWITCH)` （声明） `L68`
  - `char * get_result(char *strR,int abcd,int index)` （声明） `L69`
  - `char * get_feedback(char *strF,int abcd,int index)` （声明） `L70`
  - `int question(void * p = NULL)` （声明） `L71`

## stock/stock_question_def.cpp (18 行)

### 宏 #define (1)
- `QUESTION_DEF_CPP`（无值，通常为头文件守卫）  `L2`

### 函数 (2)
- `Cquestion_def::my_init()` — 定义  `L5`
- `Cquestion_def::Cquestion_def()` — 定义  `L12`

> 完整签名见 JSON: `int Cquestion_def::my_init(void *p)`、`Cquestion_def::Cquestion_def()`

## stock/stock_question_def.h (15 行)

### 宏 #define (2)
- `QUESTION_DEF_H`（无值，通常为头文件守卫）  `L2`
- `MULTIPLE_CHOICE` = "Multiple choice"  `L13`

### 类 (1)
#### 全局::Cquestion_def  `L6`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cquestion_def()` （声明） `L8`
  - `int my_init(void *p=nullptr)` （声明） `L10`
