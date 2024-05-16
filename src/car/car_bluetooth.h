#ifndef CAR_BLUETOOTH_H
#define CAR_BLUETOOTH_H

#include "object/object.h"

namespace n_car_bluetooth {
	class Ccar_bluetooth :public Object
	{
	public:
		Ccar_bluetooth();
		~Ccar_bluetooth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_bluetooth); }
	};
}

using namespace n_car_bluetooth;

#endif
