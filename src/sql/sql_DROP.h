#ifndef SQL_DROP_H
#define SQL_DROP_H

#include "../object.h"

namespace n_sql_DROP {
	class Csql_DROP :public Object
	{
	public:
		Csql_DROP();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DROP;

#endif
