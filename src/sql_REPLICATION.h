#ifndef SQL_REPLICATION_H
#define SQL_REPLICATION_H

#include "object.h"

namespace n_sql_REPLICATION {
	class Csql_REPLICATION :public Object
	{
	public:
		Csql_REPLICATION();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_REPLICATION;

#endif
