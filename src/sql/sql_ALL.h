#ifndef SQL_ALL_H
#define SQL_ALL_H

#include "object/object.h"

namespace n_sql_ALL {
	class Csql_ALL :public Object
	{
	public:
		Csql_ALL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ALL;

#endif
