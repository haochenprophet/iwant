#ifndef SQL_OR_H
#define SQL_OR_H

#include "../object.h"

namespace n_sql_OR {
	class Csql_OR :public Object
	{
	public:
		Csql_OR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OR;

#endif
