#ifndef SQL_RETURN_H
#define SQL_RETURN_H

#include "object/object.h"

namespace n_sql_RETURN {
	class Csql_RETURN :public Object
	{
	public:
		Csql_RETURN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_RETURN;

#endif
