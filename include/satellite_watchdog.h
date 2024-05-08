#ifndef SATELLITE_WATCHDOG_H
#define SATELLITE_WATCHDOG_H

#include "../object.h"

namespace n_satellite_watchdog {
	class Csatellite_watchdog :public Object
	{
	public:
		Csatellite_watchdog();
		~Csatellite_watchdog();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_watchdog); }
	};
}

using namespace n_satellite_watchdog;

#endif
