#ifndef SQL_KILL_H
#define SQL_KILL_H

#include "object.h"

namespace n_sql_KILL {
	class Csql_KILL :public Object
	{
	public:
		Csql_KILL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_KILL;

#endif
