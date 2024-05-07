#ifndef MEMCPY_H
#define MEMCPY_H

#include "../object.h"

namespace n_memcpy {
	class Cmemcpy :public Object
	{
	public:
		Cmemcpy();
		~Cmemcpy();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memcpy;

#endif
