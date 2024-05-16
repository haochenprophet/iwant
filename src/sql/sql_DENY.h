#ifndef SQL_DENY_H
#define SQL_DENY_H

#include "object/object.h"

namespace n_sql_DENY {
	class Csql_DENY :public Object
	{
	public:
		Csql_DENY();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_DENY;

#endif
