#ifndef SQL_WHILE_H
#define SQL_WHILE_H

#include "object.h"

namespace n_sql_WHILE {
	class Csql_WHILE :public Object
	{
	public:
		Csql_WHILE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_WHILE;

#endif
