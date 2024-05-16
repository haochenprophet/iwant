#ifndef SQL_VARYING_H
#define SQL_VARYING_H

#include "object/object.h"

namespace n_sql_VARYING {
	class Csql_VARYING :public Object
	{
	public:
		Csql_VARYING();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_VARYING;

#endif
