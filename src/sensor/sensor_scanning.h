#ifndef SENSOR_SCANNING_H
#define SENSOR_SCANNING_H

#include "object/object.h"

namespace n_sensor_scanning {
	class Csensor_scanning :public Object
	{
	public:
		Csensor_scanning();
		~Csensor_scanning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_scanning); }
	};
}

using namespace n_sensor_scanning;

#endif
