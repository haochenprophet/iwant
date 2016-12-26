#ifndef SQL_BROWSE_H
#define SQL_BROWSE_H

#include "../object.h"

namespace n_sql_BROWSE {
	class Csql_BROWSE :public Object
	{
	public:
		Csql_BROWSE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_BROWSE;

#endif
