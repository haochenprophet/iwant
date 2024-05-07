#ifndef CAR_CHASSIS_H
#define CAR_CHASSIS_H

#include "../object.h"

namespace n_car_chassis {
	class Ccar_chassis :public Object
	{
	public:
		Ccar_chassis();
		~Ccar_chassis();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_chassis); }
	};
}

using namespace n_car_chassis;

#endif
