#ifndef SATELLITE_HARDWARE_H
#define SATELLITE_HARDWARE_H

#include "object/object.h"

namespace n_satellite_hardware {
	class Csatellite_hardware :public Object
	{
	public:
		Csatellite_hardware();
		~Csatellite_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_hardware); }
	};
}

using namespace n_satellite_hardware;

#endif
