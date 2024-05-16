#ifndef SQL_NOT_H
#define SQL_NOT_H

#include "object/object.h"

namespace n_sql_NOT {
	class Csql_NOT :public Object
	{
	public:
		Csql_NOT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_NOT;

#endif
