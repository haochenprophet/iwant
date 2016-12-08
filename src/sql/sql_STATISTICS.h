#ifndef SQL_STATISTICS_H
#define SQL_STATISTICS_H

#include "../object.h"

namespace n_sql_STATISTICS {
	class Csql_STATISTICS :public Object
	{
	public:
		Csql_STATISTICS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_STATISTICS;

#endif
