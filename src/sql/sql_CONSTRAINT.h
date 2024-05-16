#ifndef SQL_CONSTRAINT_H
#define SQL_CONSTRAINT_H

#include "object/object.h"

namespace n_sql_CONSTRAINT {
	class Csql_CONSTRAINT :public Object
	{
	public:
		Csql_CONSTRAINT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CONSTRAINT;

#endif
