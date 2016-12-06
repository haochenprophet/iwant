#ifndef SQL_BEGIN_H
#define SQL_BEGIN_H

#include "object.h"

namespace n_sql_BEGIN {
	class Csql_BEGIN :public Object
	{
	public:
		Csql_BEGIN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_BEGIN;

#endif
