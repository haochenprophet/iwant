#ifndef SATELLITE_LASER_RADAR_H
#define SATELLITE_LASER_RADAR_H

#include "../object.h"

namespace n_satellite_laser_radar {
	class Csatellite_laser_radar :public Object
	{
	public:
		Csatellite_laser_radar();
		~Csatellite_laser_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_laser_radar); }
	};
}

using namespace n_satellite_laser_radar;

#endif
