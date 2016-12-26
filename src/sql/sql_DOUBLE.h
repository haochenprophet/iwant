#ifndef SQL_DOUBLE_H
#define SQL_DOUBLE_H

#include "../object.h"

namespace n_sql_DOUBLE {
	class Csql_DOUBLE :public Object
	{
	public:
		Csql_DOUBLE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_DOUBLE;

#endif
