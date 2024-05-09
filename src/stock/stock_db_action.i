#ifndef STOCK_DB_ACTION_I
#define STOCK_DB_ACTION_I

#include "stock_db_action.h"

//action_table define
ActionInfo verify_id[] = {
{ 1,(char *)SELECT_STOCK_ID },
{ 2,(char *)ALTER_AUTO_INCREMENT },
{ 3,(char *)UPDATE_IDPEICE },
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

ActionInfo calculate_dir[] = {
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE rd > 0 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE rd < 0 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE rd > 5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE rd < -5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > open AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < open AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma5 > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma5 < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma10 > ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma10 < ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma10 > ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma10 < ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma10 > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma10 < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma10 > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma10 < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma10 > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma10 < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma20 > ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma20 < ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma20 > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma20 < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma20 > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma20 < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma20 > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma20 < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma30 > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma30 < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma30 > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma30 < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma30 > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma30 < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma60 > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma60 < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE ma60 > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE ma60 < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > ma AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < ma AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < avg AND open > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > avg AND open < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < ma AND open > ma AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > ma AND open < ma AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < avg AND open > avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > avg AND open < avg AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-2 WHERE close < ma5 AND open > ma5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+2 WHERE close > ma5 AND open < ma5 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-2 WHERE close < ma10 AND open > ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+2 WHERE close > ma10 AND open < ma10 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-2 WHERE close < ma20 AND open > ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+2 WHERE close > ma20 AND open < ma20 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-2 WHERE close < ma30 AND open > ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+2 WHERE close > ma30 AND open < ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < ma60 AND open > ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > ma60 AND open < ma60 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-1 WHERE close < ma100 AND open > ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+1 WHERE close > ma100 AND open < ma100 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir-3 WHERE close < ma AND open > ma AND close <ma5 AND open >ma5 AND close <ma10 AND open >ma10 AND close <ma20 AND open >ma20 AND close <ma30 AND open >ma30 AND idprice=%s;" },
{ 1,(char *)"UPDATE  `%s`.`%s` SET dir = dir+3 WHERE close > ma AND open < ma AND close >ma5 AND open <ma5 AND close >ma10 AND open <ma10 AND close >ma20 AND open <ma20 AND close >ma30 AND open <ma30 AND idprice=%s;" },
{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

#define  CALULATE_DIR_COUNT (sizeof(calculate_dir) / sizeof(ActionInfo))

ActionInfo verify_ma[] = {
//	{ 1,(char *)"SET SQL_SAFE_UPDATES = 0;" },//
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma`=close;" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `avg`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma5`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma10`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma20`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma30`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma60`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET `ma100`='0';" },
	{ 1,(char *)"UPDATE  `%s`.`%s` SET 	`dir`='0';" },
};
#define VERIFY_MA_COUNT  (sizeof(verify_ma) / sizeof(ActionInfo))

Action stock_db_action[] = {
{ (int)StockActionClass::verify,(ACTION_T)StockAtcion::verify_id , EatcionRelation::equal , verify_id ,(char *)"verify_id" },
{ (int)StockActionClass::build,(ACTION_T)StockAtcion::build_batch , EatcionRelation::equal , nullptr,(char *)"build_batch" },
{ (int)StockActionClass::delete_,(ACTION_T)StockAtcion::delete_zero , EatcionRelation::equal , nullptr,(char *)"delete_zero" },
{ (int)StockActionClass::add,(ACTION_T)StockAtcion::add_ma , EatcionRelation::equal , (char *)ADD_MA_COLUMN ,(char *)"add_ma" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_avg , EatcionRelation::equal , (char *)ADD_AVG_COLUMN,(char *)"add_avg" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_rd , EatcionRelation::equal , (char *)ADD_RD_COLUMN,(char *)"add_rd" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_kprice , EatcionRelation::equal , (char *)ADD_K_PRICE_COLUMN,(char *)"add_kprice" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma5 , EatcionRelation::equal , (char *)ADD_MA5_COLUMN,(char *)"add_ma5" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma10 , EatcionRelation::equal , (char *)ADD_MA10_COLUMN,(char *)"add_ma10" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma20 , EatcionRelation::equal , (char *)ADD_MA20_COLUMN,(char *)"add_ma20" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma30 , EatcionRelation::equal , (char *)ADD_MA30_COLUMN,(char *)"add_ma30" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma60 , EatcionRelation::equal , (char *)ADD_MA60_COLUMN,(char *)"add_ma60" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_ma100 , EatcionRelation::equal , (char *)ADD_MA100_COLUMN,(char *)"add_ma100" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_am, EatcionRelation::equal , (char *)ADD_AM_COLUMN,(char *)"add_am" },
{ (int)StockActionClass::add, (ACTION_T)StockAtcion::add_dir, EatcionRelation::equal , (char *)ADD_DIR_COLUMN,(char *)"add_dir" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma , EatcionRelation::equal , (char *)UPDATE_MA,(char *)"calculate_ma" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_avg , EatcionRelation::equal , (char *)UPDATE_AVG,(char *) "calculate_avg" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_rd , EatcionRelation::equal , (char *)UPDATE_RD,(char *)"calculate_rd" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma5  , EatcionRelation::equal , (char *)UPDATE_MA_X,(char *)"calculate_ma5" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma10, EatcionRelation::equal ,  (char *)UPDATE_MA_X,(char *)"calculate_ma10" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma20, EatcionRelation::equal ,  (char *)UPDATE_MA_X,(char *)"calculate_ma20" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma30, EatcionRelation::equal ,  (char *)UPDATE_MA_X,(char *)"calculate_ma30" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma60, EatcionRelation::equal ,  (char *)UPDATE_MA_X,(char *)"calculate_ma60" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_ma100, EatcionRelation::equal ,  (char *)UPDATE_MA_X,(char *)"calculate_ma100" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_am, EatcionRelation::equal , (char *)UPDATE_AM,(char *)"calculate_am" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_kp, EatcionRelation::equal , (char *)UPDATE_KP,(char *)"calculate_kp" },
{ (int)StockActionClass::calculate,(ACTION_T)StockAtcion::calculate_dir, EatcionRelation::equal , (void *)calculate_dir,(char *)"calculate_dir" },
{ (int)StockActionClass::execute,(ACTION_T)StockAtcion::execute_add , EatcionRelation::equal , nullptr,(char *)"execute_add" },
{ (int)StockActionClass::clear,(ACTION_T)StockAtcion::clear_dir , EatcionRelation::equal , nullptr,(char *)"clear_dir" },
{ (int)StockActionClass::create,(ACTION_T)StockAtcion::create_dir , EatcionRelation::equal , nullptr,(char *)"create_dir" },
{ (int)StockActionClass::insert,(ACTION_T)StockAtcion::insert_dir_id , EatcionRelation::equal , nullptr,(char *)"insert_dir_id" },
{ (int)StockActionClass::alert,(ACTION_T)StockAtcion::alert_dir_key , EatcionRelation::equal , nullptr,(char *)"alert_dir_key" },
{ (int)StockActionClass::update,(ACTION_T)StockAtcion::update_dir , EatcionRelation::equal , nullptr,(char *)"update_dir" },
{ (int)StockActionClass::insert,(ACTION_T)StockAtcion::insert_dir , EatcionRelation::equal , nullptr,(char *)"insert_dir" },
{ (int)StockActionClass::add,(ACTION_T)StockAtcion::add_type , EatcionRelation::equal , nullptr,(char *)"add_type" },
{ (int)StockActionClass::update,(ACTION_T)StockAtcion::update_type , EatcionRelation::equal , nullptr,(char *)"update_type" },
{ (int)StockActionClass::verify,(ACTION_T)StockAtcion::verify_ma , EatcionRelation::equal , (void *)verify_ma,(char *)"verify_ma" },
//0 is the table end anchor
{ 0,0,EatcionRelation::none,nullptr },
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(Action))

#endif