#ifndef SQL_WRITETEXT_H
#define SQL_WRITETEXT_H

#include "object/object.h"

namespace n_sql_WRITETEXT {
	class Csql_WRITETEXT :public Object
	{
	public:
		Csql_WRITETEXT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_WRITETEXT;

#endif
