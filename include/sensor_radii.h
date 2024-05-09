#ifndef SENSOR_RADII_H
#define SENSOR_RADII_H

#include "object.h"

namespace n_sensor_radii {
	class Csensor_radii :public Object
	{
	public:
		Csensor_radii();
		~Csensor_radii();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_radii); }
	};
}

using namespace n_sensor_radii;

#endif
