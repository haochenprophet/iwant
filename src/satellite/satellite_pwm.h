#ifndef SATELLITE_PWM_H
#define SATELLITE_PWM_H

#include "object/object.h"

namespace n_satellite_pwm {
	class Csatellite_pwm :public Object
	{
	public:
		Csatellite_pwm();
		~Csatellite_pwm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_pwm); }
	};
}

using namespace n_satellite_pwm;

#endif
