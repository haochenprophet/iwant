#ifndef CAR_CHARGE_H
#define CAR_CHARGE_H

#include "object/object.h"

namespace n_car_charge {
	class Ccar_charge :public Object
	{
	public:
		Ccar_charge();
		~Ccar_charge();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_charge); }
	};
}

using namespace n_car_charge;

#endif
