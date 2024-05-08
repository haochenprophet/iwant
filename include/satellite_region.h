#ifndef SATELLITE_REGION_H
#define SATELLITE_REGION_H

#include "../object.h"

namespace n_satellite_region {
	class Csatellite_region :public Object
	{
	public:
		Csatellite_region();
		~Csatellite_region();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_region); }
	};
}

using namespace n_satellite_region;

#endif
