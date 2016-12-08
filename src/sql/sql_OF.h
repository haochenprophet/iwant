#ifndef SQL_OF_H
#define SQL_OF_H

#include "../object.h"

namespace n_sql_OF {
	class Csql_OF :public Object
	{
	public:
		Csql_OF();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_OF;

#endif
