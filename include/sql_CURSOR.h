#ifndef SQL_CURSOR_H
#define SQL_CURSOR_H

#include "../object.h"

namespace n_sql_CURSOR {
	class Csql_CURSOR :public Object
	{
	public:
		Csql_CURSOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CURSOR;

#endif
