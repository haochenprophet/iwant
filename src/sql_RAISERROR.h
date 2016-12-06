#ifndef SQL_RAISERROR_H
#define SQL_RAISERROR_H

#include "object.h"

namespace n_sql_RAISERROR {
	class Csql_RAISERROR :public Object
	{
	public:
		Csql_RAISERROR();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_RAISERROR;

#endif
