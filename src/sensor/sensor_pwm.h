#ifndef SENSOR_PWM_H
#define SENSOR_PWM_H

#include "object/object.h"

namespace n_sensor_pwm {
	class Csensor_pwm :public Object
	{
	public:
		Csensor_pwm();
		~Csensor_pwm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_pwm); }
	};
}

using namespace n_sensor_pwm;

#endif
