#ifndef SATELLITE_RADAR_H
#define SATELLITE_RADAR_H

#include "../object.h"

namespace n_satellite_radar {
	class Csatellite_radar :public Object
	{
	public:
		Csatellite_radar();
		~Csatellite_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_radar); }
	};
}

using namespace n_satellite_radar;

#endif
