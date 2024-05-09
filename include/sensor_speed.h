#ifndef SENSOR_SPEED_H
#define SENSOR_SPEED_H

#include "object.h"

namespace n_sensor_speed {
	class Csensor_speed :public Object
	{
	public:
		Csensor_speed();
		~Csensor_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_speed); }
	};
}

using namespace n_sensor_speed;

#endif
