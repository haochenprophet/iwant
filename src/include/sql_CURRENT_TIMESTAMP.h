#ifndef SQL_CURRENT_TIMESTAMP_H
#define SQL_CURRENT_TIMESTAMP_H

#include "../object.h"

namespace n_sql_CURRENT_TIMESTAMP {
	class Csql_CURRENT_TIMESTAMP :public Object
	{
	public:
		Csql_CURRENT_TIMESTAMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_CURRENT_TIMESTAMP;

#endif
