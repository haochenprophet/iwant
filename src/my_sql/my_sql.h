#ifndef MY_SQL_H
#define MY_SQL_H

#include "public/sql.h"
#include "my_sql_action.h"

namespace n_my_sql {
	class Cmy_sql :public Csql
	{
	public:
		MYSQL mysql_i,*mysql;
		MYSQL_RES  *result;
		MYSQL_FIELD *fields;
		MYSQL_ROW row;
		char * host;
		char * user;
		char * password;
		char * use_db;
		bool is_connect;
		string uuid_s;
	public:
		Cmy_sql();
		Cmy_sql(char * password,char * user=(char *)"root",char * host=(char *)"127.0.0.1",char * use_db=nullptr,char *sql=(char *)"show databases;");
		~Cmy_sql();
		int my_init(char * password, char * user = (char *)"root", char * host = (char *)"127.0.0.1", char * use_db = nullptr, char *sql = (char *)"show databases;");
		int my_init(void *p=nullptr);
		int connect();
		int query(char *sql);
		int query();
		int get(MYSQL_RES *result,MYSQL_FIELD *fields,bool show=false);//get fields
		int get(MYSQL_FIELD *fields,bool show=false);
		int get(MYSQL_RES *result,MYSQL_ROW row,Object *o=nullptr);
		int get(MYSQL_RES *result,Object *o=nullptr);//get row
		int get(void *p=nullptr,Object *o=nullptr);
		int execute(Object *o); //execute o->execute()
		int execute();
		int execute(char * sql,Object *o=nullptr); 
		int execute(string * sql, Object *o= nullptr);
		int execute(void *p1,void *p2,void *p3);
		MYSQL_RES * store_result(void * mysql);//MYSQL_RES* STDCALL mysql_store_result(MYSQL* mysql);
		int output(void *p1, void *p2, void *p3);
		int func(void *p=nullptr);
		int deal_cmd(int argc, char *argv[]);
		int do_action(void * a=nullptr);
		int create_db(char * db_name);
		int create_tab(char * db_name, char * tab_name);
		int create_tab();
		int create_tab_cmd(void *p =nullptr);
		int drop_db(char * db_name);
		int drop_tab(char * db_name,char * tab_name);
		int verify_id_cmd();//verify_id action cmd call back func.
		int verify_id_first(void *p = nullptr);//verify_id action call back func 1
		int verify_id_second(void *p1, void *p2, void *p3);//verify_id action call back func 2
		int update_uuid_second(void *p1, void *p2, void *p3);
		int update_uuid_first(void *p);
		int update_uuid_cmd();
		int add_uuid_cmd();//add_uuid action cmd call back func.
		int show_db();
		int show_tab(char * db_name);
		int show_col(char * db_name, char * tab_name);
		int is_exist(char * db_name, char * tab_name, char * col_name, char * col_value);
	};
}

using namespace n_my_sql;

#endif
