#ifndef SQL_DEFAULT_H
#define SQL_DEFAULT_H

#include "../object.h"

namespace n_sql_DEFAULT {
	class Csql_DEFAULT :public Object
	{
	public:
		Csql_DEFAULT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DEFAULT;

#endif
