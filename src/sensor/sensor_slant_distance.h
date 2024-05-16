#ifndef SENSOR_SLANT_DISTANCE_H
#define SENSOR_SLANT_DISTANCE_H

#include "object/object.h"

namespace n_sensor_slant_distance {
	class Csensor_slant_distance :public Object
	{
	public:
		Csensor_slant_distance();
		~Csensor_slant_distance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_slant_distance); }
	};
}

using namespace n_sensor_slant_distance;

#endif
