#ifndef CAR_FAN_H
#define CAR_FAN_H

#include "object/object.h"

namespace n_car_fan {
	class Ccar_fan :public Object
	{
	public:
		Ccar_fan();
		~Ccar_fan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_fan); }
	};
}

using namespace n_car_fan;

#endif
