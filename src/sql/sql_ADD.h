#ifndef SQL_ADD_H
#define SQL_ADD_H

#include "../object.h"

namespace n_sql_ADD {
	class Csql_ADD :public Object
	{
	public:
		Csql_ADD();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ADD;

#endif
