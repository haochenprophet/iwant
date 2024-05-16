#ifndef SQL_CONTINUE_H
#define SQL_CONTINUE_H

#include "object/object.h"

namespace n_sql_CONTINUE {
	class Csql_CONTINUE :public Object
	{
	public:
		Csql_CONTINUE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CONTINUE;

#endif
