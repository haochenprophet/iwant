#ifndef SQL_RESTORE_H
#define SQL_RESTORE_H

#include "../object.h"

namespace n_sql_RESTORE {
	class Csql_RESTORE :public Object
	{
	public:
		Csql_RESTORE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_RESTORE;

#endif
