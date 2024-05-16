#ifndef RADAR_SPEED_H
#define RADAR_SPEED_H

#include "object/object.h"

namespace n_radar_speed {
	class Cradar_speed :public Object
	{
	public:
		Cradar_speed();
		~Cradar_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_speed); }
	};
}

using namespace n_radar_speed;

#endif
