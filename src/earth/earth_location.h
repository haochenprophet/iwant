#ifndef EARTH_LOCATION_H
#define EARTH_LOCATION_H

#include "object/object.h"

namespace n_earth_location {
	class Cearth_location :public Object
	{
	public:
		Cearth_location();
		~Cearth_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_location); }
	};
}

using namespace n_earth_location;

#endif
