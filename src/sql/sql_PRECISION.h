#ifndef SQL_PRECISION_H
#define SQL_PRECISION_H

#include "object/object.h"

namespace n_sql_PRECISION {
	class Csql_PRECISION :public Object
	{
	public:
		Csql_PRECISION();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_PRECISION;

#endif
