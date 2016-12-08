#ifndef SQL_ELSE_H
#define SQL_ELSE_H

#include "../object.h"

namespace n_sql_ELSE {
	class Csql_ELSE :public Object
	{
	public:
		Csql_ELSE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ELSE;

#endif
