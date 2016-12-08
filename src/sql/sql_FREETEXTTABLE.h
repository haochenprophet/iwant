#ifndef SQL_FREETEXTTABLE_H
#define SQL_FREETEXTTABLE_H

#include "../object.h"

namespace n_sql_FREETEXTTABLE {
	class Csql_FREETEXTTABLE :public Object
	{
	public:
		Csql_FREETEXTTABLE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_FREETEXTTABLE;

#endif
