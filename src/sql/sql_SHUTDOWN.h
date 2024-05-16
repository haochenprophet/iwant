#ifndef SQL_SHUTDOWN_H
#define SQL_SHUTDOWN_H

#include "object/object.h"

namespace n_sql_SHUTDOWN {
	class Csql_SHUTDOWN :public Object
	{
	public:
		Csql_SHUTDOWN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_SHUTDOWN;

#endif
