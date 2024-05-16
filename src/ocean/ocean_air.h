#ifndef OCEAN_AIR_H
#define OCEAN_AIR_H

#include "object/object.h"

namespace n_ocean_air {
	class Cocean_air :public Object
	{
	public:
		Cocean_air();
		~Cocean_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_air); }
	};
}

using namespace n_ocean_air;

#endif
