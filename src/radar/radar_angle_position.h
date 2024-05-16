#ifndef RADAR_ANGLE_POSITION_H
#define RADAR_ANGLE_POSITION_H

#include "object/object.h"

namespace n_radar_angle_position {
	class Cradar_angle_position :public Object
	{
	public:
		Cradar_angle_position();
		~Cradar_angle_position();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_angle_position); }
	};
}

using namespace n_radar_angle_position;

#endif
