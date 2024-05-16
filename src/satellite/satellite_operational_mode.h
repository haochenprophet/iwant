#ifndef SATELLITE_OPERATIONAL_MODE_H
#define SATELLITE_OPERATIONAL_MODE_H

#include "object/object.h"

namespace n_satellite_operational_mode {
	class Csatellite_operational_mode :public Object
	{
	public:
		Csatellite_operational_mode();
		~Csatellite_operational_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_operational_mode); }
	};
}

using namespace n_satellite_operational_mode;

#endif
