#ifndef CAR_BATTERY_H
#define CAR_BATTERY_H

#include "object/object.h"

namespace n_car_battery {
	class Ccar_battery :public Object
	{
	public:
		Ccar_battery();
		~Ccar_battery();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_battery); }
	};
}

using namespace n_car_battery;

#endif
