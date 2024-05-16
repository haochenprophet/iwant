#ifndef SQL_AUTHORIZATION_H
#define SQL_AUTHORIZATION_H

#include "object/object.h"

namespace n_sql_AUTHORIZATION {
	class Csql_AUTHORIZATION :public Object
	{
	public:
		Csql_AUTHORIZATION();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_AUTHORIZATION;

#endif
