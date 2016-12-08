#ifndef SQL_IDENTITYCOL_H
#define SQL_IDENTITYCOL_H

#include "../object.h"

namespace n_sql_IDENTITYCOL {
	class Csql_IDENTITYCOL :public Object
	{
	public:
		Csql_IDENTITYCOL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_IDENTITYCOL;

#endif
