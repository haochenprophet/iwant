#ifndef SQL_CLUSTERED_H
#define SQL_CLUSTERED_H

#include "../object.h"

namespace n_sql_CLUSTERED {
	class Csql_CLUSTERED :public Object
	{
	public:
		Csql_CLUSTERED();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CLUSTERED;

#endif
