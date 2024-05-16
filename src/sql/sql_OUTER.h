#ifndef SQL_OUTER_H
#define SQL_OUTER_H

#include "object/object.h"

namespace n_sql_OUTER {
	class Csql_OUTER :public Object
	{
	public:
		Csql_OUTER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OUTER;

#endif
