#ifndef SENSOR_LEVEL_H
#define SENSOR_LEVEL_H

#include "object.h"

namespace n_sensor_level {
	class Csensor_level :public Object
	{
	public:
		Csensor_level();
		~Csensor_level();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_level); }
	};
}

using namespace n_sensor_level;

#endif
