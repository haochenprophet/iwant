#ifndef SENSOR_NAME_H
#define SENSOR_NAME_H

#include "object.h"

namespace n_sensor_name {
	class Csensor_name :public Object
	{
	public:
		Csensor_name();
		~Csensor_name();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_name); }
	};
}

using namespace n_sensor_name;

#endif
