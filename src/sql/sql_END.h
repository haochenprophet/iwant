#ifndef SQL_END_H
#define SQL_END_H

#include "object/object.h"

namespace n_sql_END {
	class Csql_END :public Object
	{
	public:
		Csql_END();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_END;

#endif
