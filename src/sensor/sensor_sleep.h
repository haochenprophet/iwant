#ifndef SENSOR_SLEEP_H
#define SENSOR_SLEEP_H

#include "object.h"

namespace n_sensor_sleep {
	class Csensor_sleep :public Object
	{
	public:
		Csensor_sleep();
		~Csensor_sleep();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_sleep); }
	};
}

using namespace n_sensor_sleep;

#endif
