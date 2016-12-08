#ifndef SQL_BETWEEN_H
#define SQL_BETWEEN_H

#include "../object.h"

namespace n_sql_BETWEEN {
	class Csql_BETWEEN :public Object
	{
	public:
		Csql_BETWEEN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_BETWEEN;

#endif
