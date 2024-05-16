#ifndef SENSOR_IMPEDANCE_H
#define SENSOR_IMPEDANCE_H

#include "object/object.h"

namespace n_sensor_impedance {
	class Csensor_impedance :public Object
	{
	public:
		Csensor_impedance();
		~Csensor_impedance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_impedance); }
	};
}

using namespace n_sensor_impedance;

#endif
