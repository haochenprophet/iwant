#ifndef SQL_COLLATE_H
#define SQL_COLLATE_H

#include "object.h"

namespace n_sql_COLLATE {
	class Csql_COLLATE :public Object
	{
	public:
		Csql_COLLATE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_COLLATE;

#endif
