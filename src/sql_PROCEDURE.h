#ifndef SQL_PROCEDURE_H
#define SQL_PROCEDURE_H

#include "object.h"

namespace n_sql_PROCEDURE {
	class Csql_PROCEDURE :public Object
	{
	public:
		Csql_PROCEDURE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PROCEDURE;

#endif
