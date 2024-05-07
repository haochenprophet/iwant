#ifndef SQL_BULK_H
#define SQL_BULK_H

#include "../object.h"

namespace n_sql_BULK {
	class Csql_BULK :public Object
	{
	public:
		Csql_BULK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_BULK;

#endif
