#ifndef SQL_AND_H
#define SQL_AND_H

#include "../object.h"

namespace n_sql_AND {
	class Csql_AND :public Object
	{
	public:
		Csql_AND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_AND;

#endif
