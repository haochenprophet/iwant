#ifndef CAR_LASER_RADAR_H
#define CAR_LASER_RADAR_H

#include "../object.h"

namespace n_car_laser_radar {
	class Ccar_laser_radar :public Object
	{
	public:
		Ccar_laser_radar();
		~Ccar_laser_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_laser_radar); }
	};
}

using namespace n_car_laser_radar;

#endif
