#ifndef SQL_FILE_H
#define SQL_FILE_H

#include "object.h"

namespace n_sql_FILE {
	class Csql_FILE :public Object
	{
	public:
		Csql_FILE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_FILE;

#endif
