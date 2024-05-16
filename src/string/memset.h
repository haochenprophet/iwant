#ifndef MEMSET_H
#define MEMSET_H

#include "object/object.h"

namespace n_memset {
	class Cmemset :public Object
	{
	public:
		Cmemset();
		~Cmemset();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memset;

#endif
