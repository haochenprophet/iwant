#ifndef SQL_LOAD_H
#define SQL_LOAD_H

#include "../object.h"

namespace n_sql_LOAD {
	class Csql_LOAD :public Object
	{
	public:
		Csql_LOAD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_LOAD;

#endif
