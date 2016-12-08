#ifndef SQL_EXTERNAL_H
#define SQL_EXTERNAL_H

#include "../object.h"

namespace n_sql_EXTERNAL {
	class Csql_EXTERNAL :public Object
	{
	public:
		Csql_EXTERNAL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_EXTERNAL;

#endif
