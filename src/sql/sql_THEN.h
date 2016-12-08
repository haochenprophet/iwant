#ifndef SQL_THEN_H
#define SQL_THEN_H

#include "../object.h"

namespace n_sql_THEN {
	class Csql_THEN :public Object
	{
	public:
		Csql_THEN();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_THEN;

#endif
