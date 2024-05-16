#ifndef SATELLITE_CAN_BUS_H
#define SATELLITE_CAN_BUS_H

#include "object/object.h"

namespace n_satellite_can_bus {
	class Csatellite_can_bus :public Object
	{
	public:
		Csatellite_can_bus();
		~Csatellite_can_bus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_can_bus); }
	};
}

using namespace n_satellite_can_bus;

#endif
