#ifndef SQL_OPENXML_H
#define SQL_OPENXML_H

#include "object/object.h"

namespace n_sql_OPENXML {
	class Csql_OPENXML :public Object
	{
	public:
		Csql_OPENXML();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sql_OPENXML;

#endif
