#ifndef EARTH_CIVILIZATION_H
#define EARTH_CIVILIZATION_H

#include "../object.h"

namespace n_earth_civilization {
	class Cearth_civilization :public Object
	{
	public:
		Cearth_civilization();
		~Cearth_civilization();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_civilization); }
	};
}

using namespace n_earth_civilization;

#endif
