#ifndef SQL_RIGHT_H
#define SQL_RIGHT_H

#include "../object.h"

namespace n_sql_RIGHT {
	class Csql_RIGHT :public Object
	{
	public:
		Csql_RIGHT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_RIGHT;

#endif
