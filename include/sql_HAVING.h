#ifndef SQL_HAVING_H
#define SQL_HAVING_H

#include "../object.h"

namespace n_sql_HAVING {
	class Csql_HAVING :public Object
	{
	public:
		Csql_HAVING();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_HAVING;

#endif
