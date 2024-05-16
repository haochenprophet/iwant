#ifndef DATABASE_H
#define DATABASE_H

#include "object/object.h"

namespace n_database {
	class Cdatabase :public Object
	{
	public:
		Cdatabase();
		~Cdatabase();
		int my_init(void *p=nullptr);
	};
}

using namespace n_database;

#endif
