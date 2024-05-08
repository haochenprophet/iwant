#ifndef SQL_OPTION_H
#define SQL_OPTION_H

#include "../object.h"

namespace n_sql_OPTION {
	class Csql_OPTION :public Object
	{
	public:
		Csql_OPTION();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OPTION;

#endif
