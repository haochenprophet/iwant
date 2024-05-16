#ifndef SQL_THEN_H
#define SQL_THEN_H

#include "object/object.h"

namespace n_sql_THEN {
	class Csql_THEN :public Object
	{
	public:
		Csql_THEN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_THEN;

#endif
