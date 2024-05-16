#ifndef SQL_PROCEDURE_H
#define SQL_PROCEDURE_H

#include "object/object.h"

namespace n_sql_PROCEDURE {
	class Csql_PROCEDURE :public Object
	{
	public:
		Csql_PROCEDURE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_PROCEDURE;

#endif
