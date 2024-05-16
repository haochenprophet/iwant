#ifndef SQL_ORDER_H
#define SQL_ORDER_H

#include "object/object.h"

namespace n_sql_ORDER {
	class Csql_ORDER :public Object
	{
	public:
		Csql_ORDER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ORDER;

#endif
