#ifndef SATELLITE_TEMPERATURE_H
#define SATELLITE_TEMPERATURE_H

#include "object/object.h"

namespace n_satellite_temperature {
	class Csatellite_temperature :public Object
	{
	public:
		Csatellite_temperature();
		~Csatellite_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_temperature); }
	};
}

using namespace n_satellite_temperature;

#endif
