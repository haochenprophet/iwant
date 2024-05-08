#ifndef CAR_WATER_H
#define CAR_WATER_H

#include "../object.h"

namespace n_car_water {
	class Ccar_water :public Object
	{
	public:
		Ccar_water();
		~Ccar_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_water); }
	};
}

using namespace n_car_water;

#endif
