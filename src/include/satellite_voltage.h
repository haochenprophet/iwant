#ifndef SATELLITE_VOLTAGE_H
#define SATELLITE_VOLTAGE_H

#include "../object.h"

namespace n_satellite_voltage {
	class Csatellite_voltage :public Object
	{
	public:
		Csatellite_voltage();
		~Csatellite_voltage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_voltage); }
	};
}

using namespace n_satellite_voltage;

#endif
