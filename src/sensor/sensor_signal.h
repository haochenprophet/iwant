#ifndef SENSOR_SIGNAL_H
#define SENSOR_SIGNAL_H

#include "object.h"

namespace n_sensor_signal {
	class Csensor_signal :public Object
	{
	public:
		Csensor_signal();
		~Csensor_signal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_signal); }
	};
}

using namespace n_sensor_signal;

#endif
