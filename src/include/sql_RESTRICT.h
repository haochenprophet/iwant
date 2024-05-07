#ifndef SQL_RESTRICT_H
#define SQL_RESTRICT_H

#include "../object.h"

namespace n_sql_RESTRICT {
	class Csql_RESTRICT :public Object
	{
	public:
		Csql_RESTRICT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_RESTRICT;

#endif
