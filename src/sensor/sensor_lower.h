#ifndef SENSOR_LOWER_H
#define SENSOR_LOWER_H

#include "object/object.h"

namespace n_sensor_lower {
	class Csensor_lower :public Object
	{
	public:
		Csensor_lower();
		~Csensor_lower();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_lower); }
	};
}

using namespace n_sensor_lower;

#endif
