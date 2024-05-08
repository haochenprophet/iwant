#ifndef SATELLITE_LASER_H
#define SATELLITE_LASER_H

#include "../object.h"

namespace n_satellite_laser {
	class Csatellite_laser :public Object
	{
	public:
		Csatellite_laser();
		~Csatellite_laser();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_laser); }
	};
}

using namespace n_satellite_laser;

#endif
