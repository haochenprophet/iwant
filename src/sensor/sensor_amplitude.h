#ifndef SENSOR_AMPLITUDE_H
#define SENSOR_AMPLITUDE_H

#include "object/object.h"

namespace n_sensor_amplitude {
	class Csensor_amplitude :public Object
	{
	public:
		Csensor_amplitude();
		~Csensor_amplitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_amplitude); }
	};
}

using namespace n_sensor_amplitude;

#endif
