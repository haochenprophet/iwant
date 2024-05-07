#ifndef SQL_CONTAINS_H
#define SQL_CONTAINS_H

#include "../object.h"

namespace n_sql_CONTAINS {
	class Csql_CONTAINS :public Object
	{
	public:
		Csql_CONTAINS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CONTAINS;

#endif
