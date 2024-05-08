#ifndef RADAR_SERVO_H
#define RADAR_SERVO_H

#include "../object.h"

namespace n_radar_servo {
	class Cradar_servo :public Object
	{
	public:
		Cradar_servo();
		~Cradar_servo();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_servo); }
	};
}

using namespace n_radar_servo;

#endif
