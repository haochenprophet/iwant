#ifndef CAR_ULTRASONIC_RADAR_H
#define CAR_ULTRASONIC_RADAR_H

#include "object/object.h"

namespace n_car_ultrasonic_radar {
	class Ccar_ultrasonic_radar :public Object
	{
	public:
		Ccar_ultrasonic_radar();
		~Ccar_ultrasonic_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_ultrasonic_radar); }
	};
}

using namespace n_car_ultrasonic_radar;

#endif
