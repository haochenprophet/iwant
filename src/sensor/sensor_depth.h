#ifndef SENSOR_DEPTH_H
#define SENSOR_DEPTH_H

#include "object/object.h"

namespace n_sensor_depth {
	class Csensor_depth :public Object
	{
	public:
		Csensor_depth();
		~Csensor_depth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_depth); }
	};
}

using namespace n_sensor_depth;

#endif
