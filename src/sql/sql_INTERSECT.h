#ifndef SQL_INTERSECT_H
#define SQL_INTERSECT_H

#include "../object.h"

namespace n_sql_INTERSECT {
	class Csql_INTERSECT :public Object
	{
	public:
		Csql_INTERSECT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_INTERSECT;

#endif
