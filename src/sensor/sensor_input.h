#ifndef SENSOR_INPUT_H
#define SENSOR_INPUT_H

#include "object.h"

namespace n_sensor_input {
	class Csensor_input :public Object
	{
	public:
		Csensor_input();
		~Csensor_input();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_input); }
	};
}

using namespace n_sensor_input;

#endif
