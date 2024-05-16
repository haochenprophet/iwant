#ifndef SENSOR_ACTION_H
#define SENSOR_ACTION_H

#include "object/object.h"

namespace n_sensor_action {
	class Csensor_action :public Object
	{
	public:
		Csensor_action();
		~Csensor_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_action); }
	};
}

using namespace n_sensor_action;

#endif
