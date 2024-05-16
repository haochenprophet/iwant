#ifndef EARTH_TOWNS_H
#define EARTH_TOWNS_H

#include "object/object.h"

namespace n_earth_towns {
	class Cearth_towns :public Object
	{
	public:
		Cearth_towns();
		~Cearth_towns();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_towns); }
	};
}

using namespace n_earth_towns;

#endif
