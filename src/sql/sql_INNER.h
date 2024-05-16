#ifndef SQL_INNER_H
#define SQL_INNER_H

#include "object/object.h"

namespace n_sql_INNER {
	class Csql_INNER :public Object
	{
	public:
		Csql_INNER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_INNER;

#endif
