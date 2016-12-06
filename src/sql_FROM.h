#ifndef SQL_FROM_H
#define SQL_FROM_H

#include "object.h"

namespace n_sql_FROM {
	class Csql_FROM :public Object
	{
	public:
		Csql_FROM();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_FROM;

#endif
