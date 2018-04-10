#ifndef STOC_DB_H
#define STOC_DB_H

#include "my_sql.h"

namespace n_stock_db {
	class Cstock_db :public Object
	{
	public:
		Cmy_sql * my_sql;
		char * db_name;
		char * tab_name;
		char * sql_buf;
		int sql_buf_len;
	public:
		Cstock_db();
		~Cstock_db();
		int my_init(void *p=nullptr);
		int execute(void *p1, void *p2, void *p3);
		int func(void *p = nullptr); // callback function
	};
}

using namespace n_stock_db;

#endif
