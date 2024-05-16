#ifndef SQL_FOREIGN_H
#define SQL_FOREIGN_H

#include "object/object.h"

namespace n_sql_FOREIGN {
	class Csql_FOREIGN :public Object
	{
	public:
		Csql_FOREIGN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_FOREIGN;

#endif
