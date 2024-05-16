#ifndef OCEAN_DENSITY_H
#define OCEAN_DENSITY_H

#include "object/object.h"

namespace n_ocean_density {
	class Cocean_density :public Object
	{
	public:
		Cocean_density();
		~Cocean_density();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_density); }
	};
}

using namespace n_ocean_density;

#endif
