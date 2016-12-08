#ifndef SQL_ALL_H
#define SQL_ALL_H

#include "../object.h"

namespace n_sql_ALL {
	class Csql_ALL :public Object
	{
	public:
		Csql_ALL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ALL;

#endif
