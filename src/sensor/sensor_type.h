#ifndef SENSOR_TYPE_H
#define SENSOR_TYPE_H

#include "object/object.h"

namespace n_sensor_type {
	class Csensor_type :public Object
	{
	public:
		Csensor_type();
		~Csensor_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_type); }
	};
}

using namespace n_sensor_type;

#endif
