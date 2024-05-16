#ifndef SENSOR_SYNCHRONISM_H
#define SENSOR_SYNCHRONISM_H

#include "object/object.h"

namespace n_sensor_synchronism {
	class Csensor_synchronism :public Object
	{
	public:
		Csensor_synchronism();
		~Csensor_synchronism();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_synchronism); }
	};
}

using namespace n_sensor_synchronism;

#endif
