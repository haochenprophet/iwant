#ifndef OCEAN_ULTRASONIC_RADAR_H
#define OCEAN_ULTRASONIC_RADAR_H

#include "object/object.h"

namespace n_ocean_ultrasonic_radar {
	class Cocean_ultrasonic_radar :public Object
	{
	public:
		Cocean_ultrasonic_radar();
		~Cocean_ultrasonic_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_ultrasonic_radar); }
	};
}

using namespace n_ocean_ultrasonic_radar;

#endif
