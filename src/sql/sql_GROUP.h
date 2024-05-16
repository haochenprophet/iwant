#ifndef SQL_GROUP_H
#define SQL_GROUP_H

#include "object/object.h"

namespace n_sql_GROUP {
	class Csql_GROUP :public Object
	{
	public:
		Csql_GROUP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_GROUP;

#endif
