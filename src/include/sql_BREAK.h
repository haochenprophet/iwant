#ifndef SQL_BREAK_H
#define SQL_BREAK_H

#include "../object.h"

namespace n_sql_BREAK {
	class Csql_BREAK :public Object
	{
	public:
		Csql_BREAK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_BREAK;

#endif
