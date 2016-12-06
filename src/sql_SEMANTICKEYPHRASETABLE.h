#ifndef SQL_SEMANTICKEYPHRASETABLE_H
#define SQL_SEMANTICKEYPHRASETABLE_H

#include "object.h"

namespace n_sql_SEMANTICKEYPHRASETABLE {
	class Csql_SEMANTICKEYPHRASETABLE :public Object
	{
	public:
		Csql_SEMANTICKEYPHRASETABLE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SEMANTICKEYPHRASETABLE;

#endif
