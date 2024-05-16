#ifndef CAR_ELECTRIC_MACHINE_H
#define CAR_ELECTRIC_MACHINE_H

#include "object/object.h"

namespace n_car_electric_machine {
	class Ccar_electric_machine :public Object
	{
	public:
		Ccar_electric_machine();
		~Ccar_electric_machine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_electric_machine); }
	};
}

using namespace n_car_electric_machine;

#endif
