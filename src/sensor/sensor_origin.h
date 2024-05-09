#ifndef SENSOR_ORIGIN_H
#define SENSOR_ORIGIN_H

#include "object.h"

namespace n_sensor_origin {
	class Csensor_origin :public Object
	{
	public:
		Csensor_origin();
		~Csensor_origin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_origin); }
	};
}

using namespace n_sensor_origin;

#endif
