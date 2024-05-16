#ifndef SATELLITE_MODE_RAIN_H
#define SATELLITE_MODE_RAIN_H

#include "object/object.h"

namespace n_satellite_mode_rain {
	class Csatellite_mode_rain :public Object
	{
	public:
		Csatellite_mode_rain();
		~Csatellite_mode_rain();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_rain); }
	};
}

using namespace n_satellite_mode_rain;

#endif
