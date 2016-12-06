#ifndef SQL_PERCENT_H
#define SQL_PERCENT_H

#include "object.h"

namespace n_sql_PERCENT {
	class Csql_PERCENT :public Object
	{
	public:
		Csql_PERCENT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PERCENT;

#endif
