#ifndef SQL_DECLARE_H
#define SQL_DECLARE_H

#include "object.h"

namespace n_sql_DECLARE {
	class Csql_DECLARE :public Object
	{
	public:
		Csql_DECLARE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_DECLARE;

#endif
