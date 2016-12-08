#ifndef SQL_IS_H
#define SQL_IS_H

#include "../object.h"

namespace n_sql_IS {
	class Csql_IS :public Object
	{
	public:
		Csql_IS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_IS;

#endif
