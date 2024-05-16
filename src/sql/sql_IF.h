#ifndef SQL_IF_H
#define SQL_IF_H

#include "object/object.h"

namespace n_sql_IF {
	class Csql_IF :public Object
	{
	public:
		Csql_IF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_IF;

#endif
