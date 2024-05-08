#ifndef SATELLITE_SPEED_H
#define SATELLITE_SPEED_H

#include "../object.h"

namespace n_satellite_speed {
	class Csatellite_speed :public Object
	{
	public:
		Csatellite_speed();
		~Csatellite_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_speed); }
	};
}

using namespace n_satellite_speed;

#endif
