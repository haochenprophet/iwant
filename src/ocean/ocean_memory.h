#ifndef OCEAN_MEMORY_H
#define OCEAN_MEMORY_H

#include "object/object.h"

namespace n_ocean_memory {
	class Cocean_memory :public Object
	{
	public:
		Cocean_memory();
		~Cocean_memory();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_memory); }
	};
}

using namespace n_ocean_memory;

#endif
