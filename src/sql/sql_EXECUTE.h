#ifndef SQL_EXECUTE_H
#define SQL_EXECUTE_H

#include "../object.h"

namespace n_sql_EXECUTE {
	class Csql_EXECUTE :public Object
	{
	public:
		Csql_EXECUTE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_EXECUTE;

#endif
