#ifndef SENSOR_RANGE_H
#define SENSOR_RANGE_H

#include "object/object.h"

namespace n_sensor_range {
	class Csensor_range :public Object
	{
	public:
		Csensor_range();
		~Csensor_range();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_range); }
	};
}

using namespace n_sensor_range;

#endif
