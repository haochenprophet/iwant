#ifndef SQL_NOCHECK_H
#define SQL_NOCHECK_H

#include "../object.h"

namespace n_sql_NOCHECK {
	class Csql_NOCHECK :public Object
	{
	public:
		Csql_NOCHECK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_NOCHECK;

#endif
