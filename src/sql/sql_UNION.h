#ifndef SQL_UNION_H
#define SQL_UNION_H

#include "../object.h"

namespace n_sql_UNION {
	class Csql_UNION :public Object
	{
	public:
		Csql_UNION();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_UNION;

#endif
