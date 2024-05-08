#ifndef SATELLITE_CHASSIS_H
#define SATELLITE_CHASSIS_H

#include "../object.h"

namespace n_satellite_chassis {
	class Csatellite_chassis :public Object
	{
	public:
		Csatellite_chassis();
		~Csatellite_chassis();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_chassis); }
	};
}

using namespace n_satellite_chassis;

#endif
