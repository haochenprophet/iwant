#ifndef MY_SQL_ACTION_I
#define MY_SQL_ACTION_I
#include "my_sql_action.h"

#define CMYSQL_MAIN_HELP "Cmy_sql request cmd line input: [1]action [2]password [3]use_db_name |sql [4]tab_name | db_name [5]tab_field "
#define ADD_UUID_HELP  "cmd:Cmy_sql add_uuid password use_db  tab_name"
#define UPDATE_UUID_HELP "cmd:Cmy_sql update_uuid password use_db  tab_name  id_field "
#define VERIFY_ID_HELP "cmd:Cmy_sql verify_id password use_db  tab_name  id_field"
#define CREATE_TAB_HELP "cmd:Cmy_sql create_tab password use_db  tab_name "
#define CREATE_DB_HELP "cmd:Cmy_sql create_db password db_name "
#define DROP_DB_HELP "cmd:Cmy_sql drop_db password db_name "
#define DROP_TAB_HELP "cmd:Cmy_sql drop_tab password db_name  tab_name "
#define QUERY_HELP "cmd:Cmy_sql query password sql_string "
#define SHOW_DB_HELP "cmd:Cmy_sql show_db password "
#define SHOW_TAB_HELP "cmd:Cmy_sql show_tab password use_db "
#define SHOW_COL_HELP "cmd:Cmy_sql show_col password use_db tab_name "

Action my_sql_action[] = {
	{ (int)MySqlActionClass::create,(ACTION_T)MySqlAtcion::create_db , EatcionRelation::equal , nullptr ,(char *)"create_db" ,(char *)CREATE_DB_HELP },
	{ (int)MySqlActionClass::create,(ACTION_T)MySqlAtcion::create_tab , EatcionRelation::equal , nullptr ,(char *)"create_tab",(char*)CREATE_TAB_HELP },
	{ (int)MySqlActionClass::drop,(ACTION_T)MySqlAtcion::drop_db , EatcionRelation::equal , nullptr ,(char *)"drop_db" ,(char *)DROP_DB_HELP },
	{ (int)MySqlActionClass::drop,(ACTION_T)MySqlAtcion::drop_tab , EatcionRelation::equal , nullptr ,(char *)"drop_tab",(char *)DROP_TAB_HELP },
	{ (int)MySqlActionClass::query,(ACTION_T)MySqlAtcion::query , EatcionRelation::equal , nullptr ,(char *)"query",(char *)QUERY_HELP },
	{ (int)MySqlActionClass::update,(ACTION_T)MySqlAtcion::verify_id , EatcionRelation::equal , nullptr ,(char *)"verify_id",(char *)VERIFY_ID_HELP },
	{ (int)MySqlActionClass::alert,(ACTION_T)MySqlAtcion::add_uuid , EatcionRelation::equal , nullptr ,(char *)"add_uuid",(char*)ADD_UUID_HELP },
	{ (int)MySqlActionClass::alert,(ACTION_T)MySqlAtcion::update_uuid , EatcionRelation::equal , nullptr ,(char *)"update_uuid" ,(char *)ADD_UUID_HELP},
	{ (int)MySqlActionClass::query,(ACTION_T)MySqlAtcion::show_db , EatcionRelation::equal , nullptr ,(char *)"show_db" ,(char *)SHOW_DB_HELP },
	{ (int)MySqlActionClass::query,(ACTION_T)MySqlAtcion::show_tab , EatcionRelation::equal , nullptr ,(char *)"show_tab" ,(char *)SHOW_TAB_HELP },
	{ (int)MySqlActionClass::query,(ACTION_T)MySqlAtcion::show_col , EatcionRelation::equal , nullptr ,(char *)"show_col" ,(char *)SHOW_COL_HELP },

	//end:0 is the table end anchor
	{ 0,0,EatcionRelation::none,nullptr },
};

#define  MY_SQL_ACTION_COUNT (sizeof(my_sql_action) / sizeof(Action))

#endif