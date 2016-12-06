#ifndef SQL_NULL_H
#define SQL_NULL_H

#include "object.h"

namespace n_sql_NULL {
	class Csql_NULL :public Object
	{
	public:
		Csql_NULL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_NULL;

#endif
