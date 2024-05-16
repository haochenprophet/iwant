#ifndef SENSOR_SYSTEM_H
#define SENSOR_SYSTEM_H

#include "object/object.h"

namespace n_sensor_system {
	class Csensor_system :public Object
	{
	public:
		Csensor_system();
		~Csensor_system();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_system); }
	};
}

using namespace n_sensor_system;

#endif
