#ifndef SQL_REVERT_H
#define SQL_REVERT_H

#include "object/object.h"

namespace n_sql_REVERT {
	class Csql_REVERT :public Object
	{
	public:
		Csql_REVERT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_REVERT;

#endif
