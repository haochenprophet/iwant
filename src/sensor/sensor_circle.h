#ifndef SENSOR_CIRCLE_H
#define SENSOR_CIRCLE_H

#include "object/object.h"

namespace n_sensor_circle {
	class Csensor_circle :public Object
	{
	public:
		Csensor_circle();
		~Csensor_circle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_circle); }
	};
}

using namespace n_sensor_circle;

#endif
