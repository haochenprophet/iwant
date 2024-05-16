#ifndef SENSOR_POWER_H
#define SENSOR_POWER_H

#include "object/object.h"

namespace n_sensor_power {
	class Csensor_power :public Object
	{
	public:
		Csensor_power();
		~Csensor_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_power); }
	};
}

using namespace n_sensor_power;

#endif
