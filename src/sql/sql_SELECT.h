#ifndef SQL_SELECT_H
#define SQL_SELECT_H

#include "../object.h"

namespace n_sql_SELECT {
	class Csql_SELECT :public Object
	{
	public:
		Csql_SELECT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SELECT;

#endif
