#ifndef CAR_MOVE_H
#define CAR_MOVE_H

#include "../object.h"

namespace n_car_move {
	class Ccar_move :public Object
	{
	public:
		Ccar_move();
		~Ccar_move();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_move); }
	};
}

using namespace n_car_move;

#endif
