#ifndef SENSOR_NORMAL_H
#define SENSOR_NORMAL_H

#include "object.h"

namespace n_sensor_normal {
	class Csensor_normal :public Object
	{
	public:
		Csensor_normal();
		~Csensor_normal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_normal); }
	};
}

using namespace n_sensor_normal;

#endif
