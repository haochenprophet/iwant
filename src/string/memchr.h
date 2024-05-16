#ifndef MEMCHR_H
#define MEMCHR_H

#include "object/object.h"

namespace n_memchr {
	class Cmemchr :public Object
	{
	public:
		Cmemchr();
		~Cmemchr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memchr;

#endif
