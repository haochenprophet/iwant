#ifndef OCEAN_SPEED_H
#define OCEAN_SPEED_H

#include "object/object.h"

namespace n_ocean_speed {
	class Cocean_speed :public Object
	{
	public:
		Cocean_speed();
		~Cocean_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_speed); }
	};
}

using namespace n_ocean_speed;

#endif
