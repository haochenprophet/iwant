#ifndef SENSOR_ANGLE_H
#define SENSOR_ANGLE_H

#include "object.h"

namespace n_sensor_angle {
	class Csensor_angle :public Object
	{
	public:
		Csensor_angle();
		~Csensor_angle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_angle); }
	};
}

using namespace n_sensor_angle;

#endif
