#ifndef SQL_CHECK_H
#define SQL_CHECK_H

#include "../object.h"

namespace n_sql_CHECK {
	class Csql_CHECK :public Object
	{
	public:
		Csql_CHECK();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CHECK;

#endif
