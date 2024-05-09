#ifndef SENSOR_WEIGHT_H
#define SENSOR_WEIGHT_H

#include "object.h"

namespace n_sensor_weight {
	class Csensor_weight :public Object
	{
	public:
		Csensor_weight();
		~Csensor_weight();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_weight); }
	};
}

using namespace n_sensor_weight;

#endif
