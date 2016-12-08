#ifndef SQL_OPEN_H
#define SQL_OPEN_H

#include "../object.h"

namespace n_sql_OPEN {
	class Csql_OPEN :public Object
	{
	public:
		Csql_OPEN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_OPEN;

#endif
