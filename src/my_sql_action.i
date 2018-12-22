#ifndef MY_SQL_ACTION_I
#define MY_SQL_ACTION_I
#include "my_sql_action.h"

Action my_sql_action[] = {
	{ (int)MySqlActionClass::create,(ACTION_T)MySqlAtcion::create_db , EatcionRelation::equal , nullptr ,(char *)"create_db" },
	{ (int)MySqlActionClass::create,(ACTION_T)MySqlAtcion::create_tab , EatcionRelation::equal , nullptr ,(char *)"create_tab" },
	{ (int)MySqlActionClass::drop,(ACTION_T)MySqlAtcion::drop_db , EatcionRelation::equal , nullptr ,(char *)"drop_db" },
	{ (int)MySqlActionClass::drop,(ACTION_T)MySqlAtcion::drop_tab , EatcionRelation::equal , nullptr ,(char *)"drop_tab" },
	{ (int)MySqlActionClass::query,(ACTION_T)MySqlAtcion::query , EatcionRelation::equal , nullptr ,(char *)"query" },
	{ (int)MySqlActionClass::update,(ACTION_T)MySqlAtcion::verify_id , EatcionRelation::equal , nullptr ,(char *)"verify_id" },

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  MY_SQL_ACTION_COUNT (sizeof(my_sql_action) / sizeof(Action))

#endif