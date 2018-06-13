#ifndef STOCK_DB_ACTION_H
#define STOCK_DB_ACTION_H

#include "action_type.h"

enum class StockAtcion { //NOTE: should append enum ,  insert enum cmd number will be change  
	none = 0,
	verify_id = BIT0,//1
	add_ma = BIT1,//2
	add_avg = 3,//3
	calculate_ma = BIT2,//4
	build_batch =5,//5
	calculate_avg = 6,//6
	add_rd =7, //rise & drop
	calculate_rd = 8,//8
	delete_zero=9,//9
	add_kprice,//10
	add_ma5,
	add_ma10,
	add_ma20,
	add_ma30,
	add_ma60,
	add_ma100,
	calculate_ma5,
	calculate_ma10,
	calculate_ma20,
	calculate_ma30,
	calculate_ma60,
	calculate_ma100,
	add_am,//amplitude
	calculate_am,
	calculate_kp,//key price
};

//SELECT 
#define SELECT_STOCK_ID "SELECT ID FROM stock.ID;"
#define SELECT_IDPEICE "SELECT idprice FROM `%s`.`%s` ;"
#define SELECT_AVG_MA "SELECT avg(ma) FROM `%s`.`%s` where idprice<=%s;"
#define SELECT_AVG_MA_X "SELECT avg(ma) FROM `%s`.`%s` where idprice <= %s and idprice >= (%s - %d);"
//ADD_COLUMN
#define ADD_MA_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_AVG_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `avg` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_RD_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `rd` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_K_PRICE_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `k_price` DOUBLE NOT NULL DEFAULT 0 COMMENT 'key price' ;"
#define ADD_MA5_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma5` DOUBLE NOT NULL DEFAULT 0 COMMENT '5-day moving average' ;"
#define ADD_MA10_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma10` DOUBLE NOT NULL DEFAULT 0 COMMENT '10-day moving average' ;"
#define ADD_MA20_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma20` DOUBLE NOT NULL DEFAULT 0 COMMENT '20-day moving average' ;"
#define ADD_MA30_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma30` DOUBLE NOT NULL DEFAULT 0 COMMENT '30-day moving average' ;"
#define ADD_MA60_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma60` DOUBLE NOT NULL DEFAULT 0 COMMENT '60-day moving average' ;"
#define ADD_MA100_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma100` DOUBLE NOT NULL DEFAULT 0 COMMENT '100-day moving average' ;"
#define ADD_AM_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `am` DOUBLE NOT NULL DEFAULT 0 COMMENT 'amplitude' ;"
//UPDATE 
#define UPDATE_IDPEICE "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';"
#define UPDATE_AVG "UPDATE `%s`.`%s` SET `avg`='%s' WHERE `idprice`='%s' AND `avg`=0;"
#define UPDATE_RD "UPDATE  `%s`.`%s` SET rd = (close - y_close) / y_close * 100 WHERE close >0 AND y_close >0 AND rd = 0;"
#define UPDATE_MA "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND volume >0 AND ma=0;"
#define UPDATE_MA_X "UPDATE `%s`.`%s` SET `ma%d`='%s' WHERE `idprice`='%s' AND `ma%d`=0;"
#define UPDATE_AM "UPDATE  `%s`.`%s` SET am = (high - low) / close * 100 WHERE high >0 AND close >0 AND am = 0;"
#define UPDATE_KP "UPDATE  `%s`.`%s` SET k_price = ma WHERE rd >5 OR rd <-5 OR am >6;"
//ALTER
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"
//SET
#define SET_SAFE_UPDATES_0  "SET SQL_SAFE_UPDATES = 0;"
#define SET_SAFE_UPDATES_1  "SET SQL_SAFE_UPDATES = 1;"
//DELETE
#define DELETE_ZERO_ROW "DELETE FROM `%s`.`%s` WHERE `y_close`='0' AND `open`='0'AND `close`='0' AND `high`='0' AND `low`='0';"
//OTHER
#define BUILD_BATCH "%s %s %s %s"  //[0].exe [1]action [2]password [3]db_name [4]tab_name

//action_table define
ActionInfo verify_id[]={
	{1,(char *)SELECT_STOCK_ID },
	{2,(char *)ALTER_AUTO_INCREMENT },
	{3,(char *)UPDATE_IDPEICE },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

ActionInfo add_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 2,(char *)ADD_MA_COLUMN },//step 2
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

ActionInfo calculate_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 1,(char *)SET_SAFE_UPDATES_1 },
	{ 2,(char *)UPDATE_MA },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

Action stock_db_action[]={
	{ (ACTION_T)StockAtcion::verify_id , EatcionRelation::equal , verify_id ,(char *)"verify_id"},
	{ (ACTION_T)StockAtcion::add_ma , EatcionRelation::equal , add_ma ,(char *)"add_ma"},
	{ (ACTION_T)StockAtcion::add_avg , EatcionRelation::equal , add_ma,(char *)"add_avg" },
	{ (ACTION_T)StockAtcion::calculate_ma , EatcionRelation::equal , calculate_ma,(char *)"calculate_ma" },
	{ (ACTION_T)StockAtcion::build_batch , EatcionRelation::equal , nullptr,(char *)"build_batch" },
	{ (ACTION_T)StockAtcion::calculate_avg , EatcionRelation::equal , nullptr,(char *) "calculate_avg"},
	{ (ACTION_T)StockAtcion::add_rd , EatcionRelation::equal , nullptr,(char *)"add_rd" },
	{ (ACTION_T)StockAtcion::calculate_rd , EatcionRelation::equal , nullptr,(char *)"calculate_rd" },
	{ (ACTION_T)StockAtcion::delete_zero , EatcionRelation::equal , nullptr,(char *)"delete_zero" },
	{ (ACTION_T)StockAtcion::add_kprice , EatcionRelation::equal , nullptr,(char *)"add_kprice" },
	{ (ACTION_T)StockAtcion::add_ma5 , EatcionRelation::equal , nullptr,(char *)"add_ma5" },
	{ (ACTION_T)StockAtcion::add_ma10 , EatcionRelation::equal , nullptr,(char *)"add_ma10" },
	{ (ACTION_T)StockAtcion::add_ma20 , EatcionRelation::equal , nullptr,(char *)"add_ma20" },
	{ (ACTION_T)StockAtcion::add_ma30 , EatcionRelation::equal , nullptr,(char *)"add_ma30" },
	{ (ACTION_T)StockAtcion::add_ma60 , EatcionRelation::equal , nullptr,(char *)"add_ma60" },
	{ (ACTION_T)StockAtcion::add_ma100 , EatcionRelation::equal , nullptr,(char *)"add_ma100" },
	{ (ACTION_T)StockAtcion::calculate_ma5 , EatcionRelation::equal , calculate_ma,(char *)"calculate_ma5" },
	{ (ACTION_T)StockAtcion::calculate_ma10, EatcionRelation::equal , calculate_ma,(char *)"calculate_ma10" },
	{ (ACTION_T)StockAtcion::calculate_ma20, EatcionRelation::equal , calculate_ma,(char *)"calculate_ma20" },
	{ (ACTION_T)StockAtcion::calculate_ma30, EatcionRelation::equal , calculate_ma,(char *)"calculate_ma30" },
	{ (ACTION_T)StockAtcion::calculate_ma60, EatcionRelation::equal , calculate_ma,(char *)"calculate_ma60" },
	{ (ACTION_T)StockAtcion::calculate_ma100, EatcionRelation::equal , calculate_ma,(char *)"calculate_ma100" },
	{ (ACTION_T)StockAtcion::add_am, EatcionRelation::equal , nullptr,(char *)"add_am" },
	{ (ACTION_T)StockAtcion::calculate_am, EatcionRelation::equal , nullptr,(char *)"calculate_am" },
	{ (ACTION_T)StockAtcion::calculate_kp, EatcionRelation::equal , nullptr,(char *)"calculate_kp" },
	//0 is the table end anchor
	{0,EatcionRelation::none,nullptr },
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(Action))

#endif
