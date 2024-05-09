#ifndef SENSOR_OXYGEN_H
#define SENSOR_OXYGEN_H

#include "object.h"

namespace n_sensor_oxygen {
	class Csensor_oxygen :public Object
	{
	public:
		Csensor_oxygen();
		~Csensor_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_oxygen); }
	};
}

using namespace n_sensor_oxygen;

#endif
