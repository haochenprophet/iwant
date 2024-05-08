#ifndef SQL_PROC_H
#define SQL_PROC_H

#include "../object.h"

namespace n_sql_PROC {
	class Csql_PROC :public Object
	{
	public:
		Csql_PROC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_PROC;

#endif
