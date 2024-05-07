#ifndef SQL_TOP_H
#define SQL_TOP_H

#include "../object.h"

namespace n_sql_TOP {
	class Csql_TOP :public Object
	{
	public:
		Csql_TOP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_TOP;

#endif
