#ifndef SQL_ROLLBACK_H
#define SQL_ROLLBACK_H

#include "object.h"

namespace n_sql_ROLLBACK {
	class Csql_ROLLBACK :public Object
	{
	public:
		Csql_ROLLBACK();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ROLLBACK;

#endif
