#ifndef CAR_MODE_SNOW_H
#define CAR_MODE_SNOW_H

#include "../object.h"

namespace n_car_mode_snow {
	class Ccar_mode_snow :public Object
	{
	public:
		Ccar_mode_snow();
		~Ccar_mode_snow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_snow); }
	};
}

using namespace n_car_mode_snow;

#endif
