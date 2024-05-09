#ifndef SENSOR_PROCESS_H
#define SENSOR_PROCESS_H

#include "object.h"

namespace n_sensor_process {
	class Csensor_process :public Object
	{
	public:
		Csensor_process();
		~Csensor_process();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_process); }
	};
}

using namespace n_sensor_process;

#endif
