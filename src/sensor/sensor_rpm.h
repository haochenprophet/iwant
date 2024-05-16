#ifndef SENSOR_RPM_H
#define SENSOR_RPM_H

#include "object/object.h"

namespace n_sensor_rpm {
	class Csensor_rpm :public Object
	{
	public:
		Csensor_rpm();
		~Csensor_rpm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_rpm); }
	};
}

using namespace n_sensor_rpm;

#endif
