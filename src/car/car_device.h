#ifndef CAR_DEVICE_H
#define CAR_DEVICE_H

#include "object/object.h"

namespace n_car_device {
	class Ccar_device :public Object
	{
	public:
		Ccar_device();
		~Ccar_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_device); }
	};
}

using namespace n_car_device;

#endif
