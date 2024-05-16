#ifndef CAR_ROTATE_SPEED_H
#define CAR_ROTATE_SPEED_H

#include "object/object.h"

namespace n_car_rotate_speed {
	class Ccar_rotate_speed :public Object
	{
	public:
		Ccar_rotate_speed();
		~Ccar_rotate_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_rotate_speed); }
	};
}

using namespace n_car_rotate_speed;

#endif
