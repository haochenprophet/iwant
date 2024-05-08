#ifndef CAR_POWER_H
#define CAR_POWER_H

#include "../object.h"

namespace n_car_power {
	class Ccar_power :public Object
	{
	public:
		Ccar_power();
		~Ccar_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_power); }
	};
}

using namespace n_car_power;

#endif
