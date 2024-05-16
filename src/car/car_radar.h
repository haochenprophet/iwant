#ifndef CAR_RADAR_H
#define CAR_RADAR_H

#include "object/object.h"

namespace n_car_radar {
	class Ccar_radar :public Object
	{
	public:
		Ccar_radar();
		~Ccar_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_radar); }
	};
}

using namespace n_car_radar;

#endif
