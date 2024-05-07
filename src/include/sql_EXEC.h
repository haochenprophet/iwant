#ifndef SQL_EXEC_H
#define SQL_EXEC_H

#include "../object.h"

namespace n_sql_EXEC {
	class Csql_EXEC :public Object
	{
	public:
		Csql_EXEC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_EXEC;

#endif
