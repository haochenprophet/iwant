#ifndef SQL_TRY_CONVERT_H
#define SQL_TRY_CONVERT_H

#include "object/object.h"

namespace n_sql_TRY_CONVERT {
	class Csql_TRY_CONVERT :public Object
	{
	public:
		Csql_TRY_CONVERT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_TRY_CONVERT;

#endif
