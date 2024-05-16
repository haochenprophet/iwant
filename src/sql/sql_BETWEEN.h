#ifndef SQL_BETWEEN_H
#define SQL_BETWEEN_H

#include "object/object.h"

namespace n_sql_BETWEEN {
	class Csql_BETWEEN :public Object
	{
	public:
		Csql_BETWEEN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_BETWEEN;

#endif
