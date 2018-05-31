#ifndef STOC_DB_ACTION_H
#define STOC_DB_ACTION_H

#include "action_type.h"

enum class StockAtcion {
	none = 0,
	verify_id = BIT0,
	add_ma = BIT1,
	calculate_ma = BIT2,
};

#define SELECT_STOCK_ID "SELECT ID FROM stock.ID;"
#define UPDATE_IDPEICE "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';"
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"
#define ADD_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;"
#define SET_SAFE_UPDATES_0  "SET SQL_SAFE_UPDATES = 0;"
#define SET_SAFE_UPDATES_1  "SET SQL_SAFE_UPDATES = 1;"
#define UPDATE_MA "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND volume >0 AND ma=0;"

StepActionS verify_id[]={
	{1,(char *)SELECT_STOCK_ID },
	{2,(char *)ALTER_AUTO_INCREMENT },
	{3,(char *)UPDATE_IDPEICE },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

StepActionS add_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 2,(char *)ADD_COLUMN },//step 2
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

StepActionS calculate_ma[] = {
	{ 1,(char *)SELECT_STOCK_ID },
	{ 1,(char *)SET_SAFE_UPDATES_1 },
	{ 2,(char *)UPDATE_MA },
	{ 0,nullptr }//!0 and nullptr is the action table end anchor
};

ActionS stock_db_action[]={
	{ (ACTION_T)StockAtcion::verify_id , EatcionRelation::bit_and , verify_id },
	{ (ACTION_T)StockAtcion::add_ma , EatcionRelation::bit_and , add_ma },
	{ (ACTION_T)StockAtcion::calculate_ma , EatcionRelation::bit_and , calculate_ma },
	//{0,EatcionRelation::none,nullptr }//!0 is the table end anchor
};

#define  STOCK_DB_ACTION_COUNT (sizeof(stock_db_action) / sizeof(ActionS))

#endif
