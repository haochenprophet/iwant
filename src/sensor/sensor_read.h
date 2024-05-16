#ifndef SENSOR_READ_H
#define SENSOR_READ_H

#include "object/object.h"

namespace n_sensor_read {
	class Csensor_read :public Object
	{
	public:
		Csensor_read();
		~Csensor_read();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_read); }
	};
}

using namespace n_sensor_read;

#endif
