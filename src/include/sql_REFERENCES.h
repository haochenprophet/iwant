#ifndef SQL_REFERENCES_H
#define SQL_REFERENCES_H

#include "../object.h"

namespace n_sql_REFERENCES {
	class Csql_REFERENCES :public Object
	{
	public:
		Csql_REFERENCES();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_REFERENCES;

#endif
