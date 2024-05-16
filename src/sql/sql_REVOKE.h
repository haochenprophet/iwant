#ifndef SQL_REVOKE_H
#define SQL_REVOKE_H

#include "object/object.h"

namespace n_sql_REVOKE {
	class Csql_REVOKE :public Object
	{
	public:
		Csql_REVOKE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_REVOKE;

#endif
