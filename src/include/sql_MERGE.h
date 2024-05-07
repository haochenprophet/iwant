#ifndef SQL_MERGE_H
#define SQL_MERGE_H

#include "../object.h"

namespace n_sql_MERGE {
	class Csql_MERGE :public Object
	{
	public:
		Csql_MERGE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_MERGE;

#endif
