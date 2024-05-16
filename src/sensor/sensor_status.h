#ifndef SENSOR_STATUS_H
#define SENSOR_STATUS_H

#include "object/object.h"

namespace n_sensor_status {
	class Csensor_status :public Object
	{
	public:
		Csensor_status();
		~Csensor_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_status); }
	};
}

using namespace n_sensor_status;

#endif
