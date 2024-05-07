#ifndef OCEAN_ORE_H
#define OCEAN_ORE_H

#include "../object.h"

namespace n_ocean_ore {
	class Cocean_ore :public Object
	{
	public:
		Cocean_ore();
		~Cocean_ore();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_ore); }
	};
}

using namespace n_ocean_ore;

#endif
