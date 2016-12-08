#ifndef SQL_TRANSACTION_H
#define SQL_TRANSACTION_H

#include "../object.h"

namespace n_sql_TRANSACTION {
	class Csql_TRANSACTION :public Object
	{
	public:
		Csql_TRANSACTION();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TRANSACTION;

#endif
