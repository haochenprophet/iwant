#ifndef SQL_WHEN_H
#define SQL_WHEN_H

#include "../object.h"

namespace n_sql_WHEN {
	class Csql_WHEN :public Object
	{
	public:
		Csql_WHEN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_WHEN;

#endif
