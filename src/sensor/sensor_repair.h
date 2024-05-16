#ifndef SENSOR_REPAIR_H
#define SENSOR_REPAIR_H

#include "object/object.h"

namespace n_sensor_repair {
	class Csensor_repair :public Object
	{
	public:
		Csensor_repair();
		~Csensor_repair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_repair); }
	};
}

using namespace n_sensor_repair;

#endif
