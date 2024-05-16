#ifndef SENSOR_ALARM_H
#define SENSOR_ALARM_H

#include "object/object.h"

namespace n_sensor_alarm {
	class Csensor_alarm :public Object
	{
	public:
		Csensor_alarm();
		~Csensor_alarm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_alarm); }
	};
}

using namespace n_sensor_alarm;

#endif
