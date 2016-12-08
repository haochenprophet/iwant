#ifndef SQL_EXISTS_H
#define SQL_EXISTS_H

#include "../object.h"

namespace n_sql_EXISTS {
	class Csql_EXISTS :public Object
	{
	public:
		Csql_EXISTS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_EXISTS;

#endif
