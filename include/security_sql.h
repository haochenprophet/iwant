#ifndef SECURITY_SQL_H
#define SECURITY_SQL_H

#include "../object.h"

namespace n_security_sql {
	class Csecurity_sql :public Object
	{
	public:
		Csecurity_sql();
		~Csecurity_sql();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_sql); }
	};
}

using namespace n_security_sql;

#endif
