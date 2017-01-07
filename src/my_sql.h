#ifndef MY_SQL_H
#define MY_SQL_H

#include "sql.h"
#include <mysql/mysql.h>

namespace n_my_sql {
	class Cmy_sql :public Csql
	{
	public:
		Cmy_sql();
		~Cmy_sql();
		int my_init(void *p=nullptr);
	};
}

using namespace n_my_sql;

#endif
