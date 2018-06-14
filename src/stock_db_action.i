
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
{ (ACTION_T)StockAtcion::verify_id , EatcionRelation::equal , verify_id ,(char *)"verify_id" },
{ (ACTION_T)StockAtcion::add_ma , EatcionRelation::equal , add_ma ,(char *)"add_ma" },
{ (ACTION_T)StockAtcion::add_avg , EatcionRelation::equal , add_ma,(char *)"add_avg" },
{ (ACTION_T)StockAtcion::calculate_ma , EatcionRelation::equal , calculate_ma,(char *)"calculate_ma" },
{ (ACTION_T)StockAtcion::build_batch , EatcionRelation::equal , nullptr,(char *)"build_batch" },
{ (ACTION_T)StockAtcion::calculate_avg , EatcionRelation::equal , nullptr,(char *) "calculate_avg" },
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
{ 0,EatcionRelation::none,nullptr },
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(Action))
