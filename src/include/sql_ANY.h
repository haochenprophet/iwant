#ifndef SQL_ANY_H
#define SQL_ANY_H

#include "../object.h"

namespace n_sql_ANY {
	class Csql_ANY :public Object
	{
	public:
		Csql_ANY();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ANY;

#endif
