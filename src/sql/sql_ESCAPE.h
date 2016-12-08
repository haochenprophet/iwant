#ifndef SQL_ESCAPE_H
#define SQL_ESCAPE_H

#include "../object.h"

namespace n_sql_ESCAPE {
	class Csql_ESCAPE :public Object
	{
	public:
		Csql_ESCAPE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ESCAPE;

#endif
