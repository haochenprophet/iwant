#ifndef SQL_VIEW_H
#define SQL_VIEW_H

#include "../object.h"

namespace n_sql_VIEW {
	class Csql_VIEW :public Object
	{
	public:
		Csql_VIEW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_VIEW;

#endif
