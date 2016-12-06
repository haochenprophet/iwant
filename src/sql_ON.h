#ifndef SQL_ON_H
#define SQL_ON_H

#include "object.h"

namespace n_sql_ON {
	class Csql_ON :public Object
	{
	public:
		Csql_ON();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ON;

#endif
