#ifndef SQL_UNPIVOT_H
#define SQL_UNPIVOT_H

#include "object/object.h"

namespace n_sql_UNPIVOT {
	class Csql_UNPIVOT :public Object
	{
	public:
		Csql_UNPIVOT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_UNPIVOT;

#endif
