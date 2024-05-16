#ifndef CAR_BROADCAST_H
#define CAR_BROADCAST_H

#include "object/object.h"

namespace n_car_broadcast {
	class Ccar_broadcast :public Object
	{
	public:
		Ccar_broadcast();
		~Ccar_broadcast();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_broadcast); }
	};
}

using namespace n_car_broadcast;

#endif
