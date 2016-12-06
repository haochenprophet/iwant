#ifndef SQL_COMMIT_H
#define SQL_COMMIT_H

#include "object.h"

namespace n_sql_COMMIT {
	class Csql_COMMIT :public Object
	{
	public:
		Csql_COMMIT();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_COMMIT;

#endif
