#ifndef SATELLITE_FIRE_H
#define SATELLITE_FIRE_H

#include "object/object.h"

namespace n_satellite_fire {
	class Csatellite_fire :public Object
	{
	public:
		Csatellite_fire();
		~Csatellite_fire();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_fire); }
	};
}

using namespace n_satellite_fire;

#endif
