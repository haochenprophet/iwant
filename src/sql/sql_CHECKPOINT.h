#ifndef SQL_CHECKPOINT_H
#define SQL_CHECKPOINT_H

#include "../object.h"

namespace n_sql_CHECKPOINT {
	class Csql_CHECKPOINT :public Object
	{
	public:
		Csql_CHECKPOINT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_CHECKPOINT;

#endif
