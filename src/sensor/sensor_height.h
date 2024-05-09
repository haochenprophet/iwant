#ifndef SENSOR_HEIGHT_H
#define SENSOR_HEIGHT_H

#include "object.h"

namespace n_sensor_height {
	class Csensor_height :public Object
	{
	public:
		Csensor_height();
		~Csensor_height();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_height); }
	};
}

using namespace n_sensor_height;

#endif
