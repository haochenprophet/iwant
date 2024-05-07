#ifndef CAR_PWM_H
#define CAR_PWM_H

#include "../object.h"

namespace n_car_pwm {
	class Ccar_pwm :public Object
	{
	public:
		Ccar_pwm();
		~Ccar_pwm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_pwm); }
	};
}

using namespace n_car_pwm;

#endif
