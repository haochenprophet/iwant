#ifndef SQL_ASC_H
#define SQL_ASC_H

#include "../object.h"

namespace n_sql_ASC {
	class Csql_ASC :public Object
	{
	public:
		Csql_ASC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_ASC;

#endif
