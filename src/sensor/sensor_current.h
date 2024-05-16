#ifndef SENSOR_CURRENT_H
#define SENSOR_CURRENT_H

#include "object/object.h"

namespace n_sensor_current {
	class Csensor_current :public Object
	{
	public:
		Csensor_current();
		~Csensor_current();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_current); }
	};
}

using namespace n_sensor_current;

#endif
