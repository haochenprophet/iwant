#ifndef SENSOR_TREND_H
#define SENSOR_TREND_H

#include "object/object.h"

namespace n_sensor_trend {
	class Csensor_trend :public Object
	{
	public:
		Csensor_trend();
		~Csensor_trend();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_trend); }
	};
}

using namespace n_sensor_trend;

#endif
