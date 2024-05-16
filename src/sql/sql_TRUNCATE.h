#ifndef SQL_TRUNCATE_H
#define SQL_TRUNCATE_H

#include "object/object.h"

namespace n_sql_TRUNCATE {
	class Csql_TRUNCATE :public Object
	{
	public:
		Csql_TRUNCATE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_TRUNCATE;

#endif
