#ifndef OCEAN_PLANT_H
#define OCEAN_PLANT_H

#include "object/object.h"

namespace n_ocean_plant {
	class Cocean_plant :public Object
	{
	public:
		Cocean_plant();
		~Cocean_plant();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_plant); }
	};
}

using namespace n_ocean_plant;

#endif
