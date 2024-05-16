#ifndef SQL_PIVOT_H
#define SQL_PIVOT_H

#include "object/object.h"

namespace n_sql_PIVOT {
	class Csql_PIVOT :public Object
	{
	public:
		Csql_PIVOT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_PIVOT;

#endif
