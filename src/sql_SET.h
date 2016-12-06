#ifndef SQL_SET_H
#define SQL_SET_H

#include "object.h"

namespace n_sql_SET {
	class Csql_SET :public Object
	{
	public:
		Csql_SET();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SET;

#endif
