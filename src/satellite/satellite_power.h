#ifndef SATELLITE_POWER_H
#define SATELLITE_POWER_H

#include "object/object.h"

namespace n_satellite_power {
	class Csatellite_power :public Object
	{
	public:
		Csatellite_power();
		~Csatellite_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_power); }
	};
}

using namespace n_satellite_power;

#endif
