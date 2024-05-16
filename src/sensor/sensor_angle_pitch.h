#ifndef SENSOR_ANGLE_PITCH_H
#define SENSOR_ANGLE_PITCH_H

#include "object/object.h"

namespace n_sensor_angle_pitch {
	class Csensor_angle_pitch :public Object
	{
	public:
		Csensor_angle_pitch();
		~Csensor_angle_pitch();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_angle_pitch); }
	};
}

using namespace n_sensor_angle_pitch;

#endif
