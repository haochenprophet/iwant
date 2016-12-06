#ifndef SQL_PUBLIC_H
#define SQL_PUBLIC_H

#include "object.h"

namespace n_sql_PUBLIC {
	class Csql_PUBLIC :public Object
	{
	public:
		Csql_PUBLIC();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PUBLIC;

#endif
