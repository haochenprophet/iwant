#ifndef SENSOR_CONTROL_H
#define SENSOR_CONTROL_H

#include "object/object.h"

namespace n_sensor_control {
	class Csensor_control :public Object
	{
	public:
		Csensor_control();
		~Csensor_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_control); }
	};
}

using namespace n_sensor_control;

#endif
