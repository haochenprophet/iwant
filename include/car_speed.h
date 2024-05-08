#ifndef CAR_SPEED_H
#define CAR_SPEED_H

#include "../object.h"

namespace n_car_speed {
	class Ccar_speed :public Object
	{
	public:
		Ccar_speed();
		~Ccar_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_speed); }
	};
}

using namespace n_car_speed;

#endif
