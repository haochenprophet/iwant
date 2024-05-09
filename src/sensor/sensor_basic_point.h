#ifndef SENSOR_BASIC_POINT_H
#define SENSOR_BASIC_POINT_H

#include "object.h"

namespace n_sensor_basic_point {
	class Csensor_basic_point :public Object
	{
	public:
		Csensor_basic_point();
		~Csensor_basic_point();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_basic_point); }
	};
}

using namespace n_sensor_basic_point;

#endif
