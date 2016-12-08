#ifndef SQL_CASCADE_H
#define SQL_CASCADE_H

#include "../object.h"

namespace n_sql_CASCADE {
	class Csql_CASCADE :public Object
	{
	public:
		Csql_CASCADE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CASCADE;

#endif
