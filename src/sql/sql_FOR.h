#ifndef SQL_FOR_H
#define SQL_FOR_H

#include "../object.h"

namespace n_sql_FOR {
	class Csql_FOR :public Object
	{
	public:
		Csql_FOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_FOR;

#endif
