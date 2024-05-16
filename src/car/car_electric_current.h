#ifndef CAR_ELECTRIC_CURRENT_H
#define CAR_ELECTRIC_CURRENT_H

#include "object/object.h"

namespace n_car_electric_current {
	class Ccar_electric_current :public Object
	{
	public:
		Ccar_electric_current();
		~Ccar_electric_current();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_electric_current); }
	};
}

using namespace n_car_electric_current;

#endif
