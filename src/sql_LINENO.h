#ifndef SQL_LINENO_H
#define SQL_LINENO_H

#include "object.h"

namespace n_sql_LINENO {
	class Csql_LINENO :public Object
	{
	public:
		Csql_LINENO();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_LINENO;

#endif
