#ifndef CODE_DB_H
#define CODE_DB_H

#include "../object.h"

namespace n_code_db {
	class Ccode_db :public Object
	{
	public:
		Ccode_db();
		~Ccode_db();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_db); }
	};
}

using namespace n_code_db;

#endif
