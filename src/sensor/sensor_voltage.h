#ifndef SENSOR_VOLTAGE_H
#define SENSOR_VOLTAGE_H

#include "object/object.h"

namespace n_sensor_voltage {
	class Csensor_voltage :public Object
	{
	public:
		Csensor_voltage();
		~Csensor_voltage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_voltage); }
	};
}

using namespace n_sensor_voltage;

#endif
