#ifndef SQL_SETUSER_H
#define SQL_SETUSER_H

#include "../object.h"

namespace n_sql_SETUSER {
	class Csql_SETUSER :public Object
	{
	public:
		Csql_SETUSER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_SETUSER;

#endif
