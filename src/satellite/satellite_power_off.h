#ifndef SATELLITE_POWER_OFF_H
#define SATELLITE_POWER_OFF_H

#include "object/object.h"

namespace n_satellite_power_off {
	class Csatellite_power_off :public Object
	{
	public:
		Csatellite_power_off();
		~Csatellite_power_off();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_power_off); }
	};
}

using namespace n_satellite_power_off;

#endif
