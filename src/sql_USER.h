#ifndef SQL_USER_H
#define SQL_USER_H

#include "object.h"

namespace n_sql_USER {
	class Csql_USER :public Object
	{
	public:
		Csql_USER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_USER;

#endif
