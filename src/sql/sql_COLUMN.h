#ifndef SQL_COLUMN_H
#define SQL_COLUMN_H

#include "object/object.h"

namespace n_sql_COLUMN {
	class Csql_COLUMN :public Object
	{
	public:
		Csql_COLUMN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_COLUMN;

#endif
