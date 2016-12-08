#ifndef SQL_SEMANTICSIMILARITYTABLE_H
#define SQL_SEMANTICSIMILARITYTABLE_H

#include "../object.h"

namespace n_sql_SEMANTICSIMILARITYTABLE {
	class Csql_SEMANTICSIMILARITYTABLE :public Object
	{
	public:
		Csql_SEMANTICSIMILARITYTABLE();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_SEMANTICSIMILARITYTABLE;

#endif
