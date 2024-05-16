#ifndef SQL_ALTER_H
#define SQL_ALTER_H

#include "object/object.h"

namespace n_sql_ALTER {
	class Csql_ALTER :public Object
	{
	public:
		Csql_ALTER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ALTER;

#endif
