#ifndef SQL_OPENQUERY_H
#define SQL_OPENQUERY_H

#include "object/object.h"

namespace n_sql_OPENQUERY {
	class Csql_OPENQUERY :public Object
	{
	public:
		Csql_OPENQUERY();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OPENQUERY;

#endif
