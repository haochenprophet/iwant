#ifndef SQL_GOTO_H
#define SQL_GOTO_H

#include "object.h"

namespace n_sql_GOTO {
	class Csql_GOTO :public Object
	{
	public:
		Csql_GOTO();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_GOTO;

#endif
