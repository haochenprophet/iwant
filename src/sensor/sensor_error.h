#ifndef SENSOR_ERROR_H
#define SENSOR_ERROR_H

#include "object/object.h"

namespace n_sensor_error {
	class Csensor_error :public Object
	{
	public:
		Csensor_error();
		~Csensor_error();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_error); }
	};
}

using namespace n_sensor_error;

#endif
