#ifndef SQL_RULE_H
#define SQL_RULE_H

#include "object.h"

namespace n_sql_RULE {
	class Csql_RULE :public Object
	{
	public:
		Csql_RULE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_RULE;

#endif
