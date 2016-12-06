#ifndef SQL_IDENTITY_INSERT_H
#define SQL_IDENTITY_INSERT_H

#include "object.h"

namespace n_sql_IDENTITY_INSERT {
	class Csql_IDENTITY_INSERT :public Object
	{
	public:
		Csql_IDENTITY_INSERT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_IDENTITY_INSERT;

#endif
