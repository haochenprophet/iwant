#ifndef CAR_CONTROL_H
#define CAR_CONTROL_H

#include "object/object.h"

namespace n_car_control {
	class Ccar_control :public Object
	{
	public:
		Ccar_control();
		~Ccar_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_control); }
	};
}

using namespace n_car_control;

#endif
