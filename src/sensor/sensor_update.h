#ifndef SENSOR_UPDATE_H
#define SENSOR_UPDATE_H

#include "object/object.h"

namespace n_sensor_update {
	class Csensor_update :public Object
	{
	public:
		Csensor_update();
		~Csensor_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_update); }
	};
}

using namespace n_sensor_update;

#endif
