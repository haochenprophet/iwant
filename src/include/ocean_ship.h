#ifndef OCEAN_SHIP_H
#define OCEAN_SHIP_H

#include "../object.h"

namespace n_ocean_ship {
	class Cocean_ship :public Object
	{
	public:
		Cocean_ship();
		~Cocean_ship();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_ship); }
	};
}

using namespace n_ocean_ship;

#endif
