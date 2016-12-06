#ifndef SQL_CLOSE_H
#define SQL_CLOSE_H

#include "object.h"

namespace n_sql_CLOSE {
	class Csql_CLOSE :public Object
	{
	public:
		Csql_CLOSE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CLOSE;

#endif
