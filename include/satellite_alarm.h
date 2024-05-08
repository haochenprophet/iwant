#ifndef SATELLITE_ALARM_H
#define SATELLITE_ALARM_H

#include "../object.h"

namespace n_satellite_alarm {
	class Csatellite_alarm :public Object
	{
	public:
		Csatellite_alarm();
		~Csatellite_alarm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_alarm); }
	};
}

using namespace n_satellite_alarm;

#endif
