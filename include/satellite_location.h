#ifndef SATELLITE_LOCATION_H
#define SATELLITE_LOCATION_H

#include "../object.h"

namespace n_satellite_location {
	class Csatellite_location :public Object
	{
	public:
		Csatellite_location();
		~Csatellite_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_location); }
	};
}

using namespace n_satellite_location;

#endif
