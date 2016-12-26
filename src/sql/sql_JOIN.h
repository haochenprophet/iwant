#ifndef SQL_JOIN_H
#define SQL_JOIN_H

#include "../object.h"

namespace n_sql_JOIN {
	class Csql_JOIN :public Object
	{
	public:
		Csql_JOIN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_JOIN;

#endif
