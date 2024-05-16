#ifndef OCEAN_WATER_H
#define OCEAN_WATER_H

#include "object/object.h"

namespace n_ocean_water {
	class Cocean_water :public Object
	{
	public:
		Cocean_water();
		~Cocean_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_water); }
	};
}

using namespace n_ocean_water;

#endif
