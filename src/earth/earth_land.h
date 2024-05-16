#ifndef EARTH_LAND_H
#define EARTH_LAND_H

#include "object/object.h"

namespace n_earth_land {
	class Cearth_land :public Object
	{
	public:
		Cearth_land();
		~Cearth_land();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_land); }
	};
}

using namespace n_earth_land;

#endif
