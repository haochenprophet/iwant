#ifndef SQL_AS_H
#define SQL_AS_H

#include "../object.h"

namespace n_sql_AS {
	class Csql_AS :public Object
	{
	public:
		Csql_AS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_AS;

#endif
