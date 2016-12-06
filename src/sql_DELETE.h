#ifndef SQL_DELETE_H
#define SQL_DELETE_H

#include "object.h"

namespace n_sql_DELETE {
	class Csql_DELETE :public Object
	{
	public:
		Csql_DELETE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DELETE;

#endif
