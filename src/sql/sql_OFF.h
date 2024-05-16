#ifndef SQL_OFF_H
#define SQL_OFF_H

#include "object/object.h"

namespace n_sql_OFF {
	class Csql_OFF :public Object
	{
	public:
		Csql_OFF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OFF;

#endif
