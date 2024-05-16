#ifndef SQL_SEMANTICKEYPHRASETABLE_H
#define SQL_SEMANTICKEYPHRASETABLE_H

#include "object/object.h"

namespace n_sql_SEMANTICKEYPHRASETABLE {
	class Csql_SEMANTICKEYPHRASETABLE :public Object
	{
	public:
		Csql_SEMANTICKEYPHRASETABLE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_SEMANTICKEYPHRASETABLE;

#endif
