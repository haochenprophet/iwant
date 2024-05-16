#ifndef OCEAN_SAFETY_H
#define OCEAN_SAFETY_H

#include "object/object.h"

namespace n_ocean_safety {
	class Cocean_safety :public Object
	{
	public:
		Cocean_safety();
		~Cocean_safety();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_safety); }
	};
}

using namespace n_ocean_safety;

#endif
