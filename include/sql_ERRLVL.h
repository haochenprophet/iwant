#ifndef SQL_ERRLVL_H
#define SQL_ERRLVL_H

#include "../object.h"

namespace n_sql_ERRLVL {
	class Csql_ERRLVL :public Object
	{
	public:
		Csql_ERRLVL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ERRLVL;

#endif
