#ifndef SENSOR_OUPUT_H
#define SENSOR_OUPUT_H

#include "object.h"

namespace n_sensor_ouput {
	class Csensor_ouput :public Object
	{
	public:
		Csensor_ouput();
		~Csensor_ouput();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_ouput); }
	};
}

using namespace n_sensor_ouput;

#endif
