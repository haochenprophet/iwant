#ifndef CAR_TURN_RIGHT_H
#define CAR_TURN_RIGHT_H

#include "object/object.h"

namespace n_car_turn_right {
	class Ccar_turn_right :public Object
	{
	public:
		Ccar_turn_right();
		~Ccar_turn_right();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_turn_right); }
	};
}

using namespace n_car_turn_right;

#endif
