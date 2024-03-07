#ifndef CAR_STEER_H
#define CAR_STEER_H

#include "../object.h"

namespace n_car_steer {
	class Ccar_steer :public Object
	{
	public:
		Ccar_steer();
		~Ccar_steer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_steer); }
	};
}

using namespace n_car_steer;

#endif
