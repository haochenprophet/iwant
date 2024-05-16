#ifndef CAR_WATCHDOG_H
#define CAR_WATCHDOG_H

#include "object/object.h"

namespace n_car_watchdog {
	class Ccar_watchdog :public Object
	{
	public:
		Ccar_watchdog();
		~Ccar_watchdog();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_watchdog); }
	};
}

using namespace n_car_watchdog;

#endif
