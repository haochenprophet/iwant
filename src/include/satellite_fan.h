#ifndef SATELLITE_FAN_H
#define SATELLITE_FAN_H

#include "../object.h"

namespace n_satellite_fan {
	class Csatellite_fan :public Object
	{
	public:
		Csatellite_fan();
		~Csatellite_fan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_fan); }
	};
}

using namespace n_satellite_fan;

#endif
