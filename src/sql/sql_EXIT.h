#ifndef SQL_EXIT_H
#define SQL_EXIT_H

#include "../object.h"

namespace n_sql_EXIT {
	class Csql_EXIT :public Object
	{
	public:
		Csql_EXIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_EXIT;

#endif
