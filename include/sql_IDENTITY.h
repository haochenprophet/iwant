#ifndef SQL_IDENTITY_H
#define SQL_IDENTITY_H

#include "../object.h"

namespace n_sql_IDENTITY {
	class Csql_IDENTITY :public Object
	{
	public:
		Csql_IDENTITY();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_IDENTITY;

#endif
