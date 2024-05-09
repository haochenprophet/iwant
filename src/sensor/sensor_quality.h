#ifndef SENSOR_QUALITY_H
#define SENSOR_QUALITY_H

#include "object.h"

namespace n_sensor_quality {
	class Csensor_quality :public Object
	{
	public:
		Csensor_quality();
		~Csensor_quality();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_quality); }
	};
}

using namespace n_sensor_quality;

#endif
