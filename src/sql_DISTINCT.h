#ifndef SQL_DISTINCT_H
#define SQL_DISTINCT_H

#include "object.h"

namespace n_sql_DISTINCT {
	class Csql_DISTINCT :public Object
	{
	public:
		Csql_DISTINCT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DISTINCT;

#endif
