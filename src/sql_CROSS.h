#ifndef SQL_CROSS_H
#define SQL_CROSS_H

#include "object.h"

namespace n_sql_CROSS {
	class Csql_CROSS :public Object
	{
	public:
		Csql_CROSS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CROSS;

#endif
