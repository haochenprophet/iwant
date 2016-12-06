#ifndef SQL_BY_H
#define SQL_BY_H

#include "object.h"

namespace n_sql_BY {
	class Csql_BY :public Object
	{
	public:
		Csql_BY();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_BY;

#endif
