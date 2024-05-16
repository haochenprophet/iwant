#ifndef SQL_PUBLIC_H
#define SQL_PUBLIC_H

#include "object/object.h"

namespace n_sql_PUBLIC {
	class Csql_PUBLIC :public Object
	{
	public:
		Csql_PUBLIC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_PUBLIC;

#endif
