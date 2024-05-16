#ifndef EARTH_WATER_H
#define EARTH_WATER_H

#include "object/object.h"

namespace n_earth_water {
	class Cearth_water :public Object
	{
	public:
		Cearth_water();
		~Cearth_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_water); }
	};
}

using namespace n_earth_water;

#endif
