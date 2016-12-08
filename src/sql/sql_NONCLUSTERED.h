#ifndef SQL_NONCLUSTERED_H
#define SQL_NONCLUSTERED_H

#include "../object.h"

namespace n_sql_NONCLUSTERED {
	class Csql_NONCLUSTERED :public Object
	{
	public:
		Csql_NONCLUSTERED();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_NONCLUSTERED;

#endif
