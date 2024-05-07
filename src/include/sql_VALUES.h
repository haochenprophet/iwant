#ifndef SQL_VALUES_H
#define SQL_VALUES_H

#include "../object.h"

namespace n_sql_VALUES {
	class Csql_VALUES :public Object
	{
	public:
		Csql_VALUES();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_VALUES;

#endif
