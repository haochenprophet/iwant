#ifndef OCEAN_MAP_H
#define OCEAN_MAP_H

#include "object/object.h"

namespace n_ocean_map {
	class Cocean_map :public Object
	{
	public:
		Cocean_map();
		~Cocean_map();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_map); }
	};
}

using namespace n_ocean_map;

#endif
