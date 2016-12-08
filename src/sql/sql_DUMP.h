#ifndef SQL_DUMP_H
#define SQL_DUMP_H

#include "../object.h"

namespace n_sql_DUMP {
	class Csql_DUMP :public Object
	{
	public:
		Csql_DUMP();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DUMP;

#endif
