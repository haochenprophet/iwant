#ifndef SQL_CURRENT_TIME_H
#define SQL_CURRENT_TIME_H

#include "object.h"

namespace n_sql_CURRENT_TIME {
	class Csql_CURRENT_TIME :public Object
	{
	public:
		Csql_CURRENT_TIME();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CURRENT_TIME;

#endif
