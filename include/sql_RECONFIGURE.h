#ifndef SQL_RECONFIGURE_H
#define SQL_RECONFIGURE_H

#include "../object.h"

namespace n_sql_RECONFIGURE {
	class Csql_RECONFIGURE :public Object
	{
	public:
		Csql_RECONFIGURE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_RECONFIGURE;

#endif
