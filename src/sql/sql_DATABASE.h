#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include "../object.h"

namespace n_sql_DATABASE {
	class Csql_DATABASE :public Object
	{
	public:
		Csql_DATABASE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DATABASE;

#endif
