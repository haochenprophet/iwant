#ifndef SENSOR_HARDWARE_H
#define SENSOR_HARDWARE_H

#include "object/object.h"

namespace n_sensor_hardware {
	class Csensor_hardware :public Object
	{
	public:
		Csensor_hardware();
		~Csensor_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_hardware); }
	};
}

using namespace n_sensor_hardware;

#endif
