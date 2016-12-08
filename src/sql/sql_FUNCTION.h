#ifndef SQL_FUNCTION_H
#define SQL_FUNCTION_H

#include "../object.h"

namespace n_sql_FUNCTION {
	class Csql_FUNCTION :public Object
	{
	public:
		Csql_FUNCTION();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_FUNCTION;

#endif
