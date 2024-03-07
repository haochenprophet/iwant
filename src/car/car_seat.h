#ifndef CAR_SEAT_H
#define CAR_SEAT_H

#include "../object.h"

namespace n_car_seat {
	class Ccar_seat :public Object
	{
	public:
		Ccar_seat();
		~Ccar_seat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_seat); }
	};
}

using namespace n_car_seat;

#endif
