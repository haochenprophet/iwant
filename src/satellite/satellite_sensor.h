#ifndef SATELLITE_SENSOR_H
#define SATELLITE_SENSOR_H

#include "../object.h"

namespace n_satellite_sensor {
	class Csatellite_sensor :public Object
	{
	public:
		Csatellite_sensor();
		~Csatellite_sensor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_sensor); }
	};
}

using namespace n_satellite_sensor;

#endif
