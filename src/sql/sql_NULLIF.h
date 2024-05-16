#ifndef SQL_NULLIF_H
#define SQL_NULLIF_H

#include "object/object.h"

namespace n_sql_NULLIF {
	class Csql_NULLIF :public Object
	{
	public:
		Csql_NULLIF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_NULLIF;

#endif
