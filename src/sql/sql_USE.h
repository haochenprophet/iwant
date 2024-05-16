#ifndef SQL_USE_H
#define SQL_USE_H

#include "object/object.h"

namespace n_sql_USE {
	class Csql_USE :public Object
	{
	public:
		Csql_USE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_USE;

#endif
