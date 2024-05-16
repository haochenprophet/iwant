#ifndef OCEAN_TIDE_H
#define OCEAN_TIDE_H

#include "object/object.h"

namespace n_ocean_tide {
	class Cocean_tide :public Object
	{
	public:
		Cocean_tide();
		~Cocean_tide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_tide); }
	};
}

using namespace n_ocean_tide;

#endif
