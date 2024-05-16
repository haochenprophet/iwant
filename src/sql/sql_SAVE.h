#ifndef SQL_SAVE_H
#define SQL_SAVE_H

#include "object/object.h"

namespace n_sql_SAVE {
	class Csql_SAVE :public Object
	{
	public:
		Csql_SAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_SAVE;

#endif
