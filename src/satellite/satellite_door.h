#ifndef SATELLITE_DOOR_H
#define SATELLITE_DOOR_H

#include "object/object.h"

namespace n_satellite_door {
	class Csatellite_door :public Object
	{
	public:
		Csatellite_door();
		~Csatellite_door();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_door); }
	};
}

using namespace n_satellite_door;

#endif
