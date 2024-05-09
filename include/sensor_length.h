#ifndef SENSOR_LENGTH_H
#define SENSOR_LENGTH_H

#include "object.h"

namespace n_sensor_length {
	class Csensor_length :public Object
	{
	public:
		Csensor_length();
		~Csensor_length();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_length); }
	};
}

using namespace n_sensor_length;

#endif
