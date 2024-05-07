#ifndef SQL_UPDATETEXT_H
#define SQL_UPDATETEXT_H

#include "../object.h"

namespace n_sql_UPDATETEXT {
	class Csql_UPDATETEXT :public Object
	{
	public:
		Csql_UPDATETEXT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_UPDATETEXT;

#endif
