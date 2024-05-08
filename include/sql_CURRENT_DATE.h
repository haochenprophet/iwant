#ifndef SQL_CURRENT_DATE_H
#define SQL_CURRENT_DATE_H

#include "../object.h"

namespace n_sql_CURRENT_DATE {
	class Csql_CURRENT_DATE :public Object
	{
	public:
		Csql_CURRENT_DATE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CURRENT_DATE;

#endif
