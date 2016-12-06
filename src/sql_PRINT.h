#ifndef SQL_PRINT_H
#define SQL_PRINT_H

#include "object.h"

namespace n_sql_PRINT {
	class Csql_PRINT :public Object
	{
	public:
		Csql_PRINT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PRINT;

#endif
