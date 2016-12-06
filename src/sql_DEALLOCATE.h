#ifndef SQL_DEALLOCATE_H
#define SQL_DEALLOCATE_H

#include "object.h"

namespace n_sql_DEALLOCATE {
	class Csql_DEALLOCATE :public Object
	{
	public:
		Csql_DEALLOCATE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DEALLOCATE;

#endif
