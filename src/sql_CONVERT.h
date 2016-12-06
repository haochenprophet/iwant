#ifndef SQL_CONVERT_H
#define SQL_CONVERT_H

#include "object.h"

namespace n_sql_CONVERT {
	class Csql_CONVERT :public Object
	{
	public:
		Csql_CONVERT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CONVERT;

#endif
