#ifndef SQL_FULL_H
#define SQL_FULL_H

#include "../object.h"

namespace n_sql_FULL {
	class Csql_FULL :public Object
	{
	public:
		Csql_FULL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_FULL;

#endif
