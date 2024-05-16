#ifndef CAR_MOTOR_H
#define CAR_MOTOR_H

#include "object/object.h"

namespace n_car_motor {
	class Ccar_motor :public Object
	{
	public:
		Ccar_motor();
		~Ccar_motor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_motor); }
	};
}

using namespace n_car_motor;

#endif
