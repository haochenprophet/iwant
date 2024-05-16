#ifndef SATELLITE_WEAPONS_H
#define SATELLITE_WEAPONS_H

#include "object/object.h"

namespace n_satellite_weapons {
	class Csatellite_weapons :public Object
	{
	public:
		Csatellite_weapons();
		~Csatellite_weapons();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_weapons); }
	};
}

using namespace n_satellite_weapons;

#endif
