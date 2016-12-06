#ifndef SQL_TRIGGER_H
#define SQL_TRIGGER_H

#include "object.h"

namespace n_sql_TRIGGER {
	class Csql_TRIGGER :public Object
	{
	public:
		Csql_TRIGGER();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_TRIGGER;

#endif
