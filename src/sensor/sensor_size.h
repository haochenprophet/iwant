#ifndef SENSOR_SIZE_H
#define SENSOR_SIZE_H

#include "object/object.h"

namespace n_sensor_size {
	class Csensor_size :public Object
	{
	public:
		Csensor_size();
		~Csensor_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_size); }
	};
}

using namespace n_sensor_size;

#endif
