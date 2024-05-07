#ifndef CAR_CARBON_DIOXIDE_H
#define CAR_CARBON_DIOXIDE_H

#include "../object.h"

namespace n_car_carbon_dioxide {
	class Ccar_carbon_dioxide :public Object
	{
	public:
		Ccar_carbon_dioxide();
		~Ccar_carbon_dioxide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_carbon_dioxide); }
	};
}

using namespace n_car_carbon_dioxide;

#endif
