#ifndef SQL_SOME_H
#define SQL_SOME_H

#include "object/object.h"

namespace n_sql_SOME {
	class Csql_SOME :public Object
	{
	public:
		Csql_SOME();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_SOME;

#endif
