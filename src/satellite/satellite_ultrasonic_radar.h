#ifndef SATELLITE_ULTRASONIC_RADAR_H
#define SATELLITE_ULTRASONIC_RADAR_H

#include "../object.h"

namespace n_satellite_ultrasonic_radar {
	class Csatellite_ultrasonic_radar :public Object
	{
	public:
		Csatellite_ultrasonic_radar();
		~Csatellite_ultrasonic_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_ultrasonic_radar); }
	};
}

using namespace n_satellite_ultrasonic_radar;

#endif
