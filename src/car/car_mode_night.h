#ifndef CAR_MODE_NIGHT_H
#define CAR_MODE_NIGHT_H

#include "object/object.h"

namespace n_car_mode_night {
	class Ccar_mode_night :public Object
	{
	public:
		Ccar_mode_night();
		~Ccar_mode_night();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_night); }
	};
}

using namespace n_car_mode_night;

#endif
