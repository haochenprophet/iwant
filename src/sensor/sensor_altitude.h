#ifndef SENSOR_ALTITUDE_H
#define SENSOR_ALTITUDE_H

#include "object/object.h"

namespace n_sensor_altitude {
	class Csensor_altitude :public Object
	{
	public:
		Csensor_altitude();
		~Csensor_altitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_altitude); }
	};
}

using namespace n_sensor_altitude;

#endif
