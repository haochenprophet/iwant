#ifndef SQL_LEFT_H
#define SQL_LEFT_H

#include "object.h"

namespace n_sql_LEFT {
	class Csql_LEFT :public Object
	{
	public:
		Csql_LEFT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_LEFT;

#endif
