#ifndef EARTH_AIR_H
#define EARTH_AIR_H

#include "object/object.h"

namespace n_earth_air {
	class Cearth_air :public Object
	{
	public:
		Cearth_air();
		~Cearth_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_air); }
	};
}

using namespace n_earth_air;

#endif
