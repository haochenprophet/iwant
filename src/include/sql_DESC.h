#ifndef SQL_DESC_H
#define SQL_DESC_H

#include "../object.h"

namespace n_sql_DESC {
	class Csql_DESC :public Object
	{
	public:
		Csql_DESC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_DESC;

#endif
