#ifndef CAR_ELECTRIC_APPLIANCE_H
#define CAR_ELECTRIC_APPLIANCE_H

#include "object/object.h"

namespace n_car_electric_appliance {
	class Ccar_electric_appliance :public Object
	{
	public:
		Ccar_electric_appliance();
		~Ccar_electric_appliance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_electric_appliance); }
	};
}

using namespace n_car_electric_appliance;

#endif
