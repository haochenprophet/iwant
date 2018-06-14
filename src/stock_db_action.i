
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
{ (int)StockActionClass::execute,(ACTION_T)StockAtcion::execute_add , EatcionRelation::equal , nullptr,(char *)"execute_add" },
//0 is the table end anchor
{ 0,0,EatcionRelation::none,nullptr },
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(Action))
