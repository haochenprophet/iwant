#ifndef SENSOR_UPPER_H
#define SENSOR_UPPER_H

#include "object.h"

namespace n_sensor_upper {
	class Csensor_upper :public Object
	{
	public:
		Csensor_upper();
		~Csensor_upper();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_upper); }
	};
}

using namespace n_sensor_upper;

#endif
