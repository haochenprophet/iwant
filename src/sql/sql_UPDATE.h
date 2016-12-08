#ifndef SQL_UPDATE_H
#define SQL_UPDATE_H

#include "../object.h"

namespace n_sql_UPDATE {
	class Csql_UPDATE :public Object
	{
	public:
		Csql_UPDATE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_UPDATE;

#endif
