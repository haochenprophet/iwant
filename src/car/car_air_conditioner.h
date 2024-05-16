#ifndef CAR_AIR_CONDITIONER_H
#define CAR_AIR_CONDITIONER_H

#include "object/object.h"

namespace n_car_air_conditioner {
	class Ccar_air_conditioner :public Object
	{
	public:
		Ccar_air_conditioner();
		~Ccar_air_conditioner();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_air_conditioner); }
	};
}

using namespace n_car_air_conditioner;

#endif
