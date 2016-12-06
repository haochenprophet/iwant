#ifndef SQL_FILLFACTOR_H
#define SQL_FILLFACTOR_H

#include "object.h"

namespace n_sql_FILLFACTOR {
	class Csql_FILLFACTOR :public Object
	{
	public:
		Csql_FILLFACTOR();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_FILLFACTOR;

#endif
