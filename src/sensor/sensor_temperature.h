#ifndef SENSOR_TEMPERATURE_H
#define SENSOR_TEMPERATURE_H

#include "object/object.h"

namespace n_sensor_temperature {
	class Csensor_temperature :public Object
	{
	public:
		Csensor_temperature();
		~Csensor_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_temperature); }
	};
}

using namespace n_sensor_temperature;

#endif
