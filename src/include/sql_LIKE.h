#ifndef SQL_LIKE_H
#define SQL_LIKE_H

#include "../object.h"

namespace n_sql_LIKE {
	class Csql_LIKE :public Object
	{
	public:
		Csql_LIKE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_LIKE;

#endif
