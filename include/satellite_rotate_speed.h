#ifndef SATELLITE_ROTATE_SPEED_H
#define SATELLITE_ROTATE_SPEED_H

#include "../object.h"

namespace n_satellite_rotate_speed {
	class Csatellite_rotate_speed :public Object
	{
	public:
		Csatellite_rotate_speed();
		~Csatellite_rotate_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_rotate_speed); }
	};
}

using namespace n_satellite_rotate_speed;

#endif
