#ifndef SQL_FETCH_H
#define SQL_FETCH_H

#include "../object.h"

namespace n_sql_FETCH {
	class Csql_FETCH :public Object
	{
	public:
		Csql_FETCH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_FETCH;

#endif
