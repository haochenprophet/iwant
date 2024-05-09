#ifndef SENSOR_CALCULATE_H
#define SENSOR_CALCULATE_H

#include "object.h"

namespace n_sensor_calculate {
	class Csensor_calculate :public Object
	{
	public:
		Csensor_calculate();
		~Csensor_calculate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_calculate); }
	};
}

using namespace n_sensor_calculate;

#endif
