#ifndef SQL_WHERE_H
#define SQL_WHERE_H

#include "object/object.h"

namespace n_sql_WHERE {
	class Csql_WHERE :public Object
	{
	public:
		Csql_WHERE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_WHERE;

#endif
