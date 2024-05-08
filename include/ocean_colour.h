#ifndef OCEAN_COLOUR_H
#define OCEAN_COLOUR_H

#include "../object.h"

namespace n_ocean_colour {
	class Cocean_colour :public Object
	{
	public:
		Cocean_colour();
		~Cocean_colour();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_colour); }
	};
}

using namespace n_ocean_colour;

#endif
