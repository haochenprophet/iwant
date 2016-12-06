#ifndef SQL_OFFSETS_H
#define SQL_OFFSETS_H

#include "object.h"

namespace n_sql_OFFSETS {
	class Csql_OFFSETS :public Object
	{
	public:
		Csql_OFFSETS();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_OFFSETS;

#endif
