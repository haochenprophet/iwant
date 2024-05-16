#ifndef SATELLITE_MODE_COLD_H
#define SATELLITE_MODE_COLD_H

#include "object/object.h"

namespace n_satellite_mode_cold {
	class Csatellite_mode_cold :public Object
	{
	public:
		Csatellite_mode_cold();
		~Csatellite_mode_cold();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_cold); }
	};
}

using namespace n_satellite_mode_cold;

#endif
