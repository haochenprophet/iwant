#ifndef SQL_COALESCE_H
#define SQL_COALESCE_H

#include "../object.h"

namespace n_sql_COALESCE {
	class Csql_COALESCE :public Object
	{
	public:
		Csql_COALESCE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_COALESCE;

#endif
