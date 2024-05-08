#ifndef SATELLITE_DRIVER_H
#define SATELLITE_DRIVER_H

#include "../object.h"

namespace n_satellite_driver {
	class Csatellite_driver :public Object
	{
	public:
		Csatellite_driver();
		~Csatellite_driver();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_driver); }
	};
}

using namespace n_satellite_driver;

#endif
