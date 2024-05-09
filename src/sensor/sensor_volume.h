#ifndef SENSOR_VOLUME_H
#define SENSOR_VOLUME_H

#include "object.h"

namespace n_sensor_volume {
	class Csensor_volume :public Object
	{
	public:
		Csensor_volume();
		~Csensor_volume();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_volume); }
	};
}

using namespace n_sensor_volume;

#endif
