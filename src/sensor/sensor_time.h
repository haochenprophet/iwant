#ifndef SENSOR_TIME_H
#define SENSOR_TIME_H

#include "object.h"

namespace n_sensor_time {
	class Csensor_time :public Object
	{
	public:
		Csensor_time();
		~Csensor_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_time); }
	};
}

using namespace n_sensor_time;

#endif
