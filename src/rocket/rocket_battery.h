#ifndef ROCKET_BATTERY_H
#define ROCKET_BATTERY_H

#include "object/object.h"

namespace n_rocket_battery {
	class Crocket_battery :public Object
	{
	public:
		Crocket_battery();
		~Crocket_battery();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_battery); }
	};
}

using namespace n_rocket_battery;

#endif
