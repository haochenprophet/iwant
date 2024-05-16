#ifndef SQL_WHILE_H
#define SQL_WHILE_H

#include "object/object.h"

namespace n_sql_WHILE {
	class Csql_WHILE :public Object
	{
	public:
		Csql_WHILE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_WHILE;

#endif
