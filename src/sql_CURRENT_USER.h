#ifndef SQL_CURRENT_USER_H
#define SQL_CURRENT_USER_H

#include "object.h"

namespace n_sql_CURRENT_USER {
	class Csql_CURRENT_USER :public Object
	{
	public:
		Csql_CURRENT_USER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CURRENT_USER;

#endif
