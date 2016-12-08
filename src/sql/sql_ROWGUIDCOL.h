#ifndef SQL_ROWGUIDCOL_H
#define SQL_ROWGUIDCOL_H

#include "../object.h"

namespace n_sql_ROWGUIDCOL {
	class Csql_ROWGUIDCOL :public Object
	{
	public:
		Csql_ROWGUIDCOL();
		int my_init(void *p=NULL);
	};
}

using namespace n_sql_ROWGUIDCOL;

#endif
