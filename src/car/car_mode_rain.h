#ifndef CAR_MODE_RAIN_H
#define CAR_MODE_RAIN_H

#include "object/object.h"

namespace n_car_mode_rain {
	class Ccar_mode_rain :public Object
	{
	public:
		Ccar_mode_rain();
		~Ccar_mode_rain();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_rain); }
	};
}

using namespace n_car_mode_rain;

#endif
