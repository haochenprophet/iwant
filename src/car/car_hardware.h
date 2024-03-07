#ifndef CAR_HARDWARE_H
#define CAR_HARDWARE_H

#include "../object.h"

namespace n_car_hardware {
	class Ccar_hardware :public Object
	{
	public:
		Ccar_hardware();
		~Ccar_hardware();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_hardware); }
	};
}

using namespace n_car_hardware;

#endif
