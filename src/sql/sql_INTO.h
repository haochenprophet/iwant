#ifndef SQL_INTO_H
#define SQL_INTO_H

#include "../object.h"

namespace n_sql_INTO {
	class Csql_INTO :public Object
	{
	public:
		Csql_INTO();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_INTO;

#endif
