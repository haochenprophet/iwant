#ifndef MEMORY_H
#define MEMORY_H

#include "object/object.h"

namespace n_memory {
	class Cmemory :public Object
	{
	public:
		Cmemory();
		~Cmemory();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memory;

#endif
