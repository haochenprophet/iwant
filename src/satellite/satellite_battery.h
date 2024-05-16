#ifndef SATELLITE_BATTERY_H
#define SATELLITE_BATTERY_H

#include "object/object.h"

namespace n_satellite_battery {
	class Csatellite_battery :public Object
	{
	public:
		Csatellite_battery();
		~Csatellite_battery();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_battery); }
	};
}

using namespace n_satellite_battery;

#endif
