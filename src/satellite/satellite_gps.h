#ifndef SATELLITE_GPS_H
#define SATELLITE_GPS_H

#include "../object.h"

namespace n_satellite_gps {
	class Csatellite_gps :public Object
	{
	public:
		Csatellite_gps();
		~Csatellite_gps();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_gps); }
	};
}

using namespace n_satellite_gps;

#endif
