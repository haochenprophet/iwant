#ifndef SQL_WAITFOR_H
#define SQL_WAITFOR_H

#include "../object.h"

namespace n_sql_WAITFOR {
	class Csql_WAITFOR :public Object
	{
	public:
		Csql_WAITFOR();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_WAITFOR;

#endif
