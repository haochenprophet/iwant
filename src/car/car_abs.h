#ifndef CAR_ABS_H
#define CAR_ABS_H

#include "object/object.h"

namespace n_car_abs {
	class Ccar_abs :public Object
	{
	public:
		Ccar_abs();
		~Ccar_abs();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_abs); }
	};
}

using namespace n_car_abs;

#endif
