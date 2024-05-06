#ifndef SECURITY_DATABASE_H
#define SECURITY_DATABASE_H

#include "../object.h"

namespace n_security_database {
	class Csecurity_database :public Object
	{
	public:
		Csecurity_database();
		~Csecurity_database();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_database); }
	};
}

using namespace n_security_database;

#endif
