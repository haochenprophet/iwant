#ifndef SQL_CONTAINSTABLE_H
#define SQL_CONTAINSTABLE_H

#include "../object.h"

namespace n_sql_CONTAINSTABLE {
	class Csql_CONTAINSTABLE :public Object
	{
	public:
		Csql_CONTAINSTABLE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CONTAINSTABLE;

#endif
