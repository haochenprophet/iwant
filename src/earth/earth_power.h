#ifndef EARTH_POWER_H
#define EARTH_POWER_H

#include "object/object.h"

namespace n_earth_power {
	class Cearth_power :public Object
	{
	public:
		Cearth_power();
		~Cearth_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_power); }
	};
}

using namespace n_earth_power;

#endif
