#ifndef OCEAN_STACK_H
#define OCEAN_STACK_H

#include "object/object.h"

namespace n_ocean_stack {
	class Cocean_stack :public Object
	{
	public:
		Cocean_stack();
		~Cocean_stack();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_stack); }
	};
}

using namespace n_ocean_stack;

#endif
