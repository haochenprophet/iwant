#ifndef CAR_TURN_LEFT_H
#define CAR_TURN_LEFT_H

#include "../object.h"

namespace n_car_turn_left {
	class Ccar_turn_left :public Object
	{
	public:
		Ccar_turn_left();
		~Ccar_turn_left();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_turn_left); }
	};
}

using namespace n_car_turn_left;

#endif
