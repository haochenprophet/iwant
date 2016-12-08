#ifndef SQL_OPENROWSET_H
#define SQL_OPENROWSET_H

#include "../object.h"

namespace n_sql_OPENROWSET {
	class Csql_OPENROWSET :public Object
	{
	public:
		Csql_OPENROWSET();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_OPENROWSET;

#endif
