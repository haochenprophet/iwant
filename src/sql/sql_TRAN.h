#ifndef SQL_TRAN_H
#define SQL_TRAN_H

#include "object/object.h"

namespace n_sql_TRAN {
	class Csql_TRAN :public Object
	{
	public:
		Csql_TRAN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_TRAN;

#endif
