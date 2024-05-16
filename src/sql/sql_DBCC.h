#ifndef SQL_DBCC_H
#define SQL_DBCC_H

#include "object/object.h"

namespace n_sql_DBCC {
	class Csql_DBCC :public Object
	{
	public:
		Csql_DBCC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_DBCC;

#endif
