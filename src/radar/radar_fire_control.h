#ifndef RADAR_FIRE_CONTROL_H
#define RADAR_FIRE_CONTROL_H

#include "object/object.h"

namespace n_radar_fire_control {
	class Cradar_fire_control :public Object
	{
	public:
		Cradar_fire_control();
		~Cradar_fire_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_fire_control); }
	};
}

using namespace n_radar_fire_control;

#endif
