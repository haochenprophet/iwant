#ifndef MY_SQL_H
#define MY_SQL_H

#include "sql.h"

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
		char * sql;
		bool is_connect;
	public:
		Cmy_sql();
		Cmy_sql(char * password,char * user=(char *)"root",char * host=(char *)"127.0.0.1",char * use_db=nullptr,char *sql=(char *)"show databases;");
		~Cmy_sql();
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
		int execute(void *p1,void *p2,void *p3);
		int func(void *p=nullptr);
	};
}

using namespace n_my_sql;

#endif
