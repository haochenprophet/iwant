#ifndef RADAR_ANGLE_H
#define RADAR_ANGLE_H

#include "object/object.h"

namespace n_radar_angle {
	class Cradar_angle :public Object
	{
	public:
		Cradar_angle();
		~Cradar_angle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_angle); }
	};
}

using namespace n_radar_angle;

#endif
