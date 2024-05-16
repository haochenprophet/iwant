#ifndef CAR_CARBON_MONOXIDE_H
#define CAR_CARBON_MONOXIDE_H

#include "object/object.h"

namespace n_car_carbon_monoxide {
	class Ccar_carbon_monoxide :public Object
	{
	public:
		Ccar_carbon_monoxide();
		~Ccar_carbon_monoxide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_carbon_monoxide); }
	};
}

using namespace n_car_carbon_monoxide;

#endif
