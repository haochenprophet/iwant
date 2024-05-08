#ifndef SQL_UNIQUE_H
#define SQL_UNIQUE_H

#include "../object.h"

namespace n_sql_UNIQUE {
	class Csql_UNIQUE :public Object
	{
	public:
		Csql_UNIQUE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_UNIQUE;

#endif
