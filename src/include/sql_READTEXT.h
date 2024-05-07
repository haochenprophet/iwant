#ifndef SQL_READTEXT_H
#define SQL_READTEXT_H

#include "../object.h"

namespace n_sql_READTEXT {
	class Csql_READTEXT :public Object
	{
	public:
		Csql_READTEXT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_READTEXT;

#endif
