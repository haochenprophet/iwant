#ifndef MY_SQL_H
#define MY_SQL_H

#include "sql.h"
#include <mysql/mysql.h>

namespace n_my_sql {
	class Cmy_sql :public Csql
	{
	public:
		MYSQL mysql_i,*mysql;
		MYSQL_RES  *result;		
		char * host;
		char * user;
		char * password;
		char * use_db;
		char * sql;
	public:
		Cmy_sql();
		Cmy_sql(char * password,char * user=(char *)"root",char * host=(char *)"127.0.0.1",char * use_db=nullptr,char *sql=(char *)"show databases;");
		~Cmy_sql();
		int my_init(void *p=nullptr);
		int connect();
		int query(char *sql);
		int query();
		int execute(Object *o); //execute o->execute()
		int execute(); 
		int func(void *p=nullptr);
	};
}

using namespace n_my_sql;

#endif
