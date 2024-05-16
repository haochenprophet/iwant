#ifndef SENSOR_LOCATION_H
#define SENSOR_LOCATION_H

#include "object/object.h"

namespace n_sensor_location {
	class Csensor_location :public Object
	{
	public:
		Csensor_location();
		~Csensor_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_location); }
	};
}

using namespace n_sensor_location;

#endif
