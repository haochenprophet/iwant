#ifndef SQL_CASE_H
#define SQL_CASE_H

#include "../object.h"

namespace n_sql_CASE {
	class Csql_CASE :public Object
	{
	public:
		Csql_CASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CASE;

#endif
