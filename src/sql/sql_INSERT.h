#ifndef SQL_INSERT_H
#define SQL_INSERT_H

#include "../object.h"

namespace n_sql_INSERT {
	class Csql_INSERT :public Object
	{
	public:
		Csql_INSERT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_INSERT;

#endif
