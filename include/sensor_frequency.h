#ifndef SENSOR_FREQUENCY_H
#define SENSOR_FREQUENCY_H

#include "object.h"

namespace n_sensor_frequency {
	class Csensor_frequency :public Object
	{
	public:
		Csensor_frequency();
		~Csensor_frequency();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_frequency); }
	};
}

using namespace n_sensor_frequency;

#endif
