#ifndef SQL_TABLESAMPLE_H
#define SQL_TABLESAMPLE_H

#include "object.h"

namespace n_sql_TABLESAMPLE {
	class Csql_TABLESAMPLE :public Object
	{
	public:
		Csql_TABLESAMPLE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TABLESAMPLE;

#endif
