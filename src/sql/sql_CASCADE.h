#ifndef SQL_CASCADE_H
#define SQL_CASCADE_H

#include "object/object.h"

namespace n_sql_CASCADE {
	class Csql_CASCADE :public Object
	{
	public:
		Csql_CASCADE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CASCADE;

#endif
