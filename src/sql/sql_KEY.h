#ifndef SQL_KEY_H
#define SQL_KEY_H

#include "../object.h"

namespace n_sql_KEY {
	class Csql_KEY :public Object
	{
	public:
		Csql_KEY();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_KEY;

#endif
