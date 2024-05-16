#ifndef SATELLITE_DEVICE_H
#define SATELLITE_DEVICE_H

#include "object/object.h"

namespace n_satellite_device {
	class Csatellite_device :public Object
	{
	public:
		Csatellite_device();
		~Csatellite_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_device); }
	};
}

using namespace n_satellite_device;

#endif
