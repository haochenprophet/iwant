#ifndef SQL_SCHEMA_H
#define SQL_SCHEMA_H

#include "../object.h"

namespace n_sql_SCHEMA {
	class Csql_SCHEMA :public Object
	{
	public:
		Csql_SCHEMA();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SCHEMA;

#endif
