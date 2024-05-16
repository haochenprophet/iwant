#ifndef SENSOR_WRITE_H
#define SENSOR_WRITE_H

#include "object/object.h"

namespace n_sensor_write {
	class Csensor_write :public Object
	{
	public:
		Csensor_write();
		~Csensor_write();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_write); }
	};
}

using namespace n_sensor_write;

#endif
