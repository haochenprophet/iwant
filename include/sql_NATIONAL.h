#ifndef SQL_NATIONAL_H
#define SQL_NATIONAL_H

#include "../object.h"

namespace n_sql_NATIONAL {
	class Csql_NATIONAL :public Object
	{
	public:
		Csql_NATIONAL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_NATIONAL;

#endif
