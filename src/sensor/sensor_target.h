#ifndef SENSOR_TARGET_H
#define SENSOR_TARGET_H

#include "object.h"

namespace n_sensor_target {
	class Csensor_target :public Object
	{
	public:
		Csensor_target();
		~Csensor_target();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_target); }
	};
}

using namespace n_sensor_target;

#endif
