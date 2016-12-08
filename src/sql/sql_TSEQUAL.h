#ifndef SQL_TSEQUAL_H
#define SQL_TSEQUAL_H

#include "../object.h"

namespace n_sql_TSEQUAL {
	class Csql_TSEQUAL :public Object
	{
	public:
		Csql_TSEQUAL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TSEQUAL;

#endif
