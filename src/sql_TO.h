#ifndef SQL_TO_H
#define SQL_TO_H

#include "object.h"

namespace n_sql_TO {
	class Csql_TO :public Object
	{
	public:
		Csql_TO();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TO;

#endif
