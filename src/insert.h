#ifndef INSERT_H
#define INSERT_H

#include "object.h"

namespace n_insert {
	class Cinsert :public Object
	{
	public:
		Cinsert();
		~Cinsert();
		int my_init(void *p=nullptr);
	};
}

using namespace n_insert;

#endif
