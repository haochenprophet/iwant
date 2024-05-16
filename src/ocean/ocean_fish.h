#ifndef OCEAN_FISH_H
#define OCEAN_FISH_H

#include "object/object.h"

namespace n_ocean_fish {
	class Cocean_fish :public Object
	{
	public:
		Cocean_fish();
		~Cocean_fish();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_fish); }
	};
}

using namespace n_ocean_fish;

#endif
