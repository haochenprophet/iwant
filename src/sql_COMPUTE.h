#ifndef SQL_COMPUTE_H
#define SQL_COMPUTE_H

#include "object.h"

namespace n_sql_COMPUTE {
	class Csql_COMPUTE :public Object
	{
	public:
		Csql_COMPUTE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_COMPUTE;

#endif
