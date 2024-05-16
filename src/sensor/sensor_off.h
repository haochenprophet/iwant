#ifndef SENSOR_OFF_H
#define SENSOR_OFF_H

#include "object/object.h"

namespace n_sensor_off {
	class Csensor_off :public Object
	{
	public:
		Csensor_off();
		~Csensor_off();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_off); }
	};
}

using namespace n_sensor_off;

#endif
