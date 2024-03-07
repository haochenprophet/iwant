#ifndef CAR_CABLE_H
#define CAR_CABLE_H

#include "../object.h"

namespace n_car_cable {
	class Ccar_cable :public Object
	{
	public:
		Ccar_cable();
		~Ccar_cable();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_cable); }
	};
}

using namespace n_car_cable;

#endif
