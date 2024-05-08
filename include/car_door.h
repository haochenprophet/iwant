#ifndef CAR_DOOR_H
#define CAR_DOOR_H

#include "../object.h"

namespace n_car_door {
	class Ccar_door :public Object
	{
	public:
		Ccar_door();
		~Ccar_door();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_door); }
	};
}

using namespace n_car_door;

#endif
