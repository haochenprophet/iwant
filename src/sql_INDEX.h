#ifndef SQL_INDEX_H
#define SQL_INDEX_H

#include "object.h"

namespace n_sql_INDEX {
	class Csql_INDEX :public Object
	{
	public:
		Csql_INDEX();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_INDEX;

#endif
