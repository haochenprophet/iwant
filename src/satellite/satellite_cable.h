#ifndef SATELLITE_CABLE_H
#define SATELLITE_CABLE_H

#include "../object.h"

namespace n_satellite_cable {
	class Csatellite_cable :public Object
	{
	public:
		Csatellite_cable();
		~Csatellite_cable();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_cable); }
	};
}

using namespace n_satellite_cable;

#endif
