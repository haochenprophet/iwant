#ifndef OCEAN_ISLAND_H
#define OCEAN_ISLAND_H

#include "../object.h"

namespace n_ocean_island {
	class Cocean_island :public Object
	{
	public:
		Cocean_island();
		~Cocean_island();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_island); }
	};
}

using namespace n_ocean_island;

#endif
