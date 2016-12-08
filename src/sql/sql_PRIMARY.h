#ifndef SQL_PRIMARY_H
#define SQL_PRIMARY_H

#include "../object.h"

namespace n_sql_PRIMARY {
	class Csql_PRIMARY :public Object
	{
	public:
		Csql_PRIMARY();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_PRIMARY;

#endif
