#ifndef SQL_READ_H
#define SQL_READ_H

#include "object.h"

namespace n_sql_READ {
	class Csql_READ :public Object
	{
	public:
		Csql_READ();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_READ;

#endif
