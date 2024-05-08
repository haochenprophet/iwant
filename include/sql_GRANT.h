#ifndef SQL_GRANT_H
#define SQL_GRANT_H

#include "../object.h"

namespace n_sql_GRANT {
	class Csql_GRANT :public Object
	{
	public:
		Csql_GRANT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_GRANT;

#endif
