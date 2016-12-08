#ifndef SQL_OVER_H
#define SQL_OVER_H

#include "../object.h"

namespace n_sql_OVER {
	class Csql_OVER :public Object
	{
	public:
		Csql_OVER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_OVER;

#endif
