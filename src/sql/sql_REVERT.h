#ifndef SQL_REVERT_H
#define SQL_REVERT_H

#include "../object.h"

namespace n_sql_REVERT {
	class Csql_REVERT :public Object
	{
	public:
		Csql_REVERT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_REVERT;

#endif
