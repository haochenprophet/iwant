#ifndef SQL_TABLE_H
#define SQL_TABLE_H

#include "object.h"

namespace n_sql_TABLE {
	class Csql_TABLE :public Object
	{
	public:
		Csql_TABLE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TABLE;

#endif
