#ifndef SENSOR_ALERT_H
#define SENSOR_ALERT_H

#include "object.h"

namespace n_sensor_alert {
	class Csensor_alert :public Object
	{
	public:
		Csensor_alert();
		~Csensor_alert();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_alert); }
	};
}

using namespace n_sensor_alert;

#endif
