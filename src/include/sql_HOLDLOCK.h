#ifndef SQL_HOLDLOCK_H
#define SQL_HOLDLOCK_H

#include "../object.h"

namespace n_sql_HOLDLOCK {
	class Csql_HOLDLOCK :public Object
	{
	public:
		Csql_HOLDLOCK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_HOLDLOCK;

#endif
