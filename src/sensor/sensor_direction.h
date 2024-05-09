#ifndef SENSOR_DIRECTION_H
#define SENSOR_DIRECTION_H

#include "object.h"

namespace n_sensor_direction {
	class Csensor_direction :public Object
	{
	public:
		Csensor_direction();
		~Csensor_direction();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_direction); }
	};
}

using namespace n_sensor_direction;

#endif
