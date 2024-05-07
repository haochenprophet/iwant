#ifndef OCEAN_ALARM_H
#define OCEAN_ALARM_H

#include "../object.h"

namespace n_ocean_alarm {
	class Cocean_alarm :public Object
	{
	public:
		Cocean_alarm();
		~Cocean_alarm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_alarm); }
	};
}

using namespace n_ocean_alarm;

#endif
