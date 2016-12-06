#ifndef SQL_WITHIN_GROUP_H
#define SQL_WITHIN_GROUP_H

#include "object.h"

namespace n_sql_WITHIN_GROUP {
	class Csql_WITHIN_GROUP :public Object
	{
	public:
		Csql_WITHIN_GROUP();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_WITHIN_GROUP;

#endif
