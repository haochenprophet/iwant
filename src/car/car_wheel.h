#ifndef CAR_WHEEL_H
#define CAR_WHEEL_H

#include "../object.h"

namespace n_car_wheel {
	class Ccar_wheel :public Object
	{
	public:
		Ccar_wheel();
		~Ccar_wheel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_wheel); }
	};
}

using namespace n_car_wheel;

#endif
