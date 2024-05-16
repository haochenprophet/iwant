#ifndef EARTH_OCEAN_H
#define EARTH_OCEAN_H

#include "object/object.h"

namespace n_earth_ocean {
	class Cearth_ocean :public Object
	{
	public:
		Cearth_ocean();
		~Cearth_ocean();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_ocean); }
	};
}

using namespace n_earth_ocean;

#endif
