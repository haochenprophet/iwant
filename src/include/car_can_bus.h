#ifndef CAR_CAN_BUS_H
#define CAR_CAN_BUS_H

#include "../object.h"

namespace n_car_can_bus {
	class Ccar_can_bus :public Object
	{
	public:
		Ccar_can_bus();
		~Ccar_can_bus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_can_bus); }
	};
}

using namespace n_car_can_bus;

#endif
