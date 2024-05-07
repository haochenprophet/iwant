#ifndef CAR_POWER_OFF_H
#define CAR_POWER_OFF_H

#include "../object.h"

namespace n_car_power_off {
	class Ccar_power_off :public Object
	{
	public:
		Ccar_power_off();
		~Ccar_power_off();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_power_off); }
	};
}

using namespace n_car_power_off;

#endif
