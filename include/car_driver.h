#ifndef CAR_DRIVER_H
#define CAR_DRIVER_H

#include "../object.h"

namespace n_car_driver {
	class Ccar_driver :public Object
	{
	public:
		Ccar_driver();
		~Ccar_driver();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_driver); }
	};
}

using namespace n_car_driver;

#endif
