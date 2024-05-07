#ifndef SQL_TEXTSIZE_H
#define SQL_TEXTSIZE_H

#include "../object.h"

namespace n_sql_TEXTSIZE {
	class Csql_TEXTSIZE :public Object
	{
	public:
		Csql_TEXTSIZE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_TEXTSIZE;

#endif
