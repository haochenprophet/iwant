#ifndef SQL_WITH_H
#define SQL_WITH_H

#include "../object.h"

namespace n_sql_WITH {
	class Csql_WITH :public Object
	{
	public:
		Csql_WITH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_WITH;

#endif
