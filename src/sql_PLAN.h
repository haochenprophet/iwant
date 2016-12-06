#ifndef SQL_PLAN_H
#define SQL_PLAN_H

#include "object.h"

namespace n_sql_PLAN {
	class Csql_PLAN :public Object
	{
	public:
		Csql_PLAN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PLAN;

#endif
