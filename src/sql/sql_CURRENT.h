#ifndef SQL_CURRENT_H
#define SQL_CURRENT_H

#include "object/object.h"

namespace n_sql_CURRENT {
	class Csql_CURRENT :public Object
	{
	public:
		Csql_CURRENT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CURRENT;

#endif
