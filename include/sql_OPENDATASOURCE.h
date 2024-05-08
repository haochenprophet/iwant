#ifndef SQL_OPENDATASOURCE_H
#define SQL_OPENDATASOURCE_H

#include "../object.h"

namespace n_sql_OPENDATASOURCE {
	class Csql_OPENDATASOURCE :public Object
	{
	public:
		Csql_OPENDATASOURCE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OPENDATASOURCE;

#endif
