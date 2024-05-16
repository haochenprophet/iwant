#ifndef OCEAN_DISTANCE_H
#define OCEAN_DISTANCE_H

#include "object/object.h"

namespace n_ocean_distance {
	class Cocean_distance :public Object
	{
	public:
		Cocean_distance();
		~Cocean_distance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_distance); }
	};
}

using namespace n_ocean_distance;

#endif
