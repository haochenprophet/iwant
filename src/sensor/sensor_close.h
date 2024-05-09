#ifndef SENSOR_CLOSE_H
#define SENSOR_CLOSE_H

#include "object.h"

namespace n_sensor_close {
	class Csensor_close :public Object
	{
	public:
		Csensor_close();
		~Csensor_close();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_close); }
	};
}

using namespace n_sensor_close;

#endif
