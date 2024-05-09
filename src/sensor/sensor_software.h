#ifndef SENSOR_SOFTWARE_H
#define SENSOR_SOFTWARE_H

#include "object.h"

namespace n_sensor_software {
	class Csensor_software :public Object
	{
	public:
		Csensor_software();
		~Csensor_software();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_software); }
	};
}

using namespace n_sensor_software;

#endif
