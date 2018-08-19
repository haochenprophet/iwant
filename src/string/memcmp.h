#ifndef MEMCMP_H
#define MEMCMP_H

#include "../object.h"

namespace n_memcmp {
	class Cmemcmp :public Object
	{
	public:
		Cmemcmp();
		~Cmemcmp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memcmp;

#endif
