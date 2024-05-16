#ifndef SATELLITE_WHEEL_H
#define SATELLITE_WHEEL_H

#include "object/object.h"

namespace n_satellite_wheel {
	class Csatellite_wheel :public Object
	{
	public:
		Csatellite_wheel();
		~Csatellite_wheel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_wheel); }
	};
}

using namespace n_satellite_wheel;

#endif
