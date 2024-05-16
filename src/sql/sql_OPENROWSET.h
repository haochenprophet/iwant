#ifndef SQL_OPENROWSET_H
#define SQL_OPENROWSET_H

#include "object/object.h"

namespace n_sql_OPENROWSET {
	class Csql_OPENROWSET :public Object
	{
	public:
		Csql_OPENROWSET();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OPENROWSET;

#endif
