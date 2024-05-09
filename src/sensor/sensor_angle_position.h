#ifndef SENSOR_ANGLE_POSITION_H
#define SENSOR_ANGLE_POSITION_H

#include "object.h"

namespace n_sensor_angle_position {
	class Csensor_angle_position :public Object
	{
	public:
		Csensor_angle_position();
		~Csensor_angle_position();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_angle_position); }
	};
}

using namespace n_sensor_angle_position;

#endif
