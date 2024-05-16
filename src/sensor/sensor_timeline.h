#ifndef SENSOR_TIMELINE_H
#define SENSOR_TIMELINE_H

#include "object/object.h"

namespace n_sensor_timeline {
	class Csensor_timeline :public Object
	{
	public:
		Csensor_timeline();
		~Csensor_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_timeline); }
	};
}

using namespace n_sensor_timeline;

#endif
