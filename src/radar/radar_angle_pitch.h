#ifndef RADAR_ANGLE_PITCH_H
#define RADAR_ANGLE_PITCH_H

#include "../object.h"

namespace n_radar_angle_pitch {
	class Cradar_angle_pitch :public Object
	{
	public:
		Cradar_angle_pitch();
		~Cradar_angle_pitch();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_angle_pitch); }
	};
}

using namespace n_radar_angle_pitch;

#endif
