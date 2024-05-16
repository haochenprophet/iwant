#ifndef EARTH_CITY_H
#define EARTH_CITY_H

#include "object/object.h"

namespace n_earth_city {
	class Cearth_city :public Object
	{
	public:
		Cearth_city();
		~Cearth_city();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_city); }
	};
}

using namespace n_earth_city;

#endif
