#ifndef SQL_DISTRIBUTED_H
#define SQL_DISTRIBUTED_H

#include "../object.h"

namespace n_sql_DISTRIBUTED {
	class Csql_DISTRIBUTED :public Object
	{
	public:
		Csql_DISTRIBUTED();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DISTRIBUTED;

#endif
