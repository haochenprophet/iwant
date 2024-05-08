#ifndef SQL_CREATE_H
#define SQL_CREATE_H

#include "../object.h"

namespace n_sql_CREATE {
	class Csql_CREATE :public Object
	{
	public:
		Csql_CREATE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CREATE;

#endif
