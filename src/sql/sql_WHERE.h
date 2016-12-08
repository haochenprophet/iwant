#ifndef SQL_WHERE_H
#define SQL_WHERE_H

#include "../object.h"

namespace n_sql_WHERE {
	class Csql_WHERE :public Object
	{
	public:
		Csql_WHERE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_WHERE;

#endif
