#ifndef SENSOR_METAL_H
#define SENSOR_METAL_H

#include "object/object.h"

namespace n_sensor_metal {
	class Csensor_metal :public Object
	{
	public:
		Csensor_metal();
		~Csensor_metal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_metal); }
	};
}

using namespace n_sensor_metal;

#endif
