#ifndef SQL_IN_H
#define SQL_IN_H

#include "object.h"

namespace n_sql_IN {
	class Csql_IN :public Object
	{
	public:
		Csql_IN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_IN;

#endif
