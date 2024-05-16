#ifndef SENSOR_OPEN_H
#define SENSOR_OPEN_H

#include "object/object.h"

namespace n_sensor_open {
	class Csensor_open :public Object
	{
	public:
		Csensor_open();
		~Csensor_open();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_open); }
	};
}

using namespace n_sensor_open;

#endif
