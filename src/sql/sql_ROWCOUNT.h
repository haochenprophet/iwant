#ifndef SQL_ROWCOUNT_H
#define SQL_ROWCOUNT_H

#include "../object.h"

namespace n_sql_ROWCOUNT {
	class Csql_ROWCOUNT :public Object
	{
	public:
		Csql_ROWCOUNT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ROWCOUNT;

#endif
