#ifndef SENSOR_RHR_H
#define SENSOR_RHR_H

#include "object.h"

namespace n_sensor_rhr {
	class Csensor_rhr :public Object
	{
	public:
		Csensor_rhr();
		~Csensor_rhr();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_rhr); }
	};
}

using namespace n_sensor_rhr;

#endif
