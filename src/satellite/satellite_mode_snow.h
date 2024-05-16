#ifndef SATELLITE_MODE_SNOW_H
#define SATELLITE_MODE_SNOW_H

#include "object/object.h"

namespace n_satellite_mode_snow {
	class Csatellite_mode_snow :public Object
	{
	public:
		Csatellite_mode_snow();
		~Csatellite_mode_snow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_snow); }
	};
}

using namespace n_satellite_mode_snow;

#endif
