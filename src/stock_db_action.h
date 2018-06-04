#ifndef STOCK_DB_ACTION_H
#define STOCK_DB_ACTION_H

#include "action_type.h"

enum class StockAtcion {
	none = 0,
	verify_id = BIT0,//1
	add_ma = BIT1,//2
	add_avg = 3,//3
	calculate_ma = BIT2,//4

};

#define SELECT_STOCK_ID "SELECT ID FROM stock.ID;"
#define UPDATE_IDPEICE "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';"
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"
#define ADD_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_AVG_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `avg` DOUBLE NOT NULL DEFAULT 0;"
#define SET_SAFE_UPDATES_0  "SET SQL_SAFE_UPDATES = 0;"
#define SET_SAFE_UPDATES_1  "SET SQL_SAFE_UPDATES = 1;"
#define UPDATE_MA "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND volume >0 AND ma=0;"

ActionInfo verify_id[]={
	{1,(char *)SELECT_STOCK_ID },
	{2,(char *)ALTER_AUTO_INCREMENT },
	{3,(char *)UPDATE_IDPEICE },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

ActionInfo add_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 2,(char *)ADD_COLUMN },//step 2
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

ActionInfo calculate_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 1,(char *)SET_SAFE_UPDATES_1 },
	{ 2,(char *)UPDATE_MA },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

Action stock_db_action[]={
//	{ (ACTION_T)StockAtcion::verify_id , EatcionRelation::equal , verify_id },
//	{ (ACTION_T)StockAtcion::add_ma , EatcionRelation::equal , add_ma },
	{ (ACTION_T)StockAtcion::add_avg , EatcionRelation::equal , add_ma },
//	{ (ACTION_T)StockAtcion::calculate_ma , EatcionRelation::equal , calculate_ma },
	{0,EatcionRelation::none,nullptr }//!0 is the table end anchor
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(Action))

#endif
