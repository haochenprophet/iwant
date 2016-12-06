#ifndef SQL_SESSION_USER_H
#define SQL_SESSION_USER_H

#include "object.h"

namespace n_sql_SESSION_USER {
	class Csql_SESSION_USER :public Object
	{
	public:
		Csql_SESSION_USER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SESSION_USER;

#endif
