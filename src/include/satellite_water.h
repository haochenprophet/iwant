#ifndef SATELLITE_WATER_H
#define SATELLITE_WATER_H

#include "../object.h"

namespace n_satellite_water {
	class Csatellite_water :public Object
	{
	public:
		Csatellite_water();
		~Csatellite_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_water); }
	};
}

using namespace n_satellite_water;

#endif
