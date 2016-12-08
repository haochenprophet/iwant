#ifndef SQL_CONTINUE_H
#define SQL_CONTINUE_H

#include "../object.h"

namespace n_sql_CONTINUE {
	class Csql_CONTINUE :public Object
	{
	public:
		Csql_CONTINUE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CONTINUE;

#endif
