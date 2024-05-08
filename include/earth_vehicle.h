#ifndef EARTH_VEHICLE_H
#define EARTH_VEHICLE_H

#include "../object.h"

namespace n_earth_vehicle {
	class Cearth_vehicle :public Object
	{
	public:
		Cearth_vehicle();
		~Cearth_vehicle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_vehicle); }
	};
}

using namespace n_earth_vehicle;

#endif
