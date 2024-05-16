#ifndef SQL_FREETEXT_H
#define SQL_FREETEXT_H

#include "object/object.h"

namespace n_sql_FREETEXT {
	class Csql_FREETEXT :public Object
	{
	public:
		Csql_FREETEXT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_FREETEXT;

#endif
