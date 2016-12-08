#ifndef SQL_SECURITYAUDIT_H
#define SQL_SECURITYAUDIT_H

#include "../object.h"

namespace n_sql_SECURITYAUDIT {
	class Csql_SECURITYAUDIT :public Object
	{
	public:
		Csql_SECURITYAUDIT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SECURITYAUDIT;

#endif
