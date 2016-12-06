#ifndef SQL_SYSTEM_USER_H
#define SQL_SYSTEM_USER_H

#include "object.h"

namespace n_sql_SYSTEM_USER {
	class Csql_SYSTEM_USER :public Object
	{
	public:
		Csql_SYSTEM_USER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SYSTEM_USER;

#endif
