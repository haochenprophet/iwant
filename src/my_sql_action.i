#ifndef MY_SQL_ACTION_I
#define MY_SQL_ACTION_I
#include "my_sql_action.h"

Action my_sql_action[] = {
	{ (int)MySqlActionClass::create,(ACTION_T)MySqlAtcion::create_db , EatcionRelation::equal , nullptr ,(char *)"create_db" },
	{ (int)MySqlActionClass::drop,(ACTION_T)MySqlAtcion::drop_db , EatcionRelation::equal , nullptr ,(char *)"drop_db" },

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  MY_SQL_ACTION_COUNT (sizeof(my_sql_action) / sizeof(Action))

#endif