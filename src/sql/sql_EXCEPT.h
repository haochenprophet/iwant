#ifndef SQL_EXCEPT_H
#define SQL_EXCEPT_H

#include "../object.h"

namespace n_sql_EXCEPT {
	class Csql_EXCEPT :public Object
	{
	public:
		Csql_EXCEPT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_EXCEPT;

#endif
