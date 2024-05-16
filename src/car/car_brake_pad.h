#ifndef CAR_BRAKE_PAD_H
#define CAR_BRAKE_PAD_H

#include "object/object.h"

namespace n_car_brake_pad {
	class Ccar_brake_pad :public Object
	{
	public:
		Ccar_brake_pad();
		~Ccar_brake_pad();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_brake_pad); }
	};
}

using namespace n_car_brake_pad;

#endif
