#ifndef SENSOR_WIDTH_H
#define SENSOR_WIDTH_H

#include "object.h"

namespace n_sensor_width {
	class Csensor_width :public Object
	{
	public:
		Csensor_width();
		~Csensor_width();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_width); }
	};
}

using namespace n_sensor_width;

#endif
