#ifndef CAR_MILEAGE_H
#define CAR_MILEAGE_H

#include "../object.h"

namespace n_car_mileage {
	class Ccar_mileage :public Object
	{
	public:
		Ccar_mileage();
		~Ccar_mileage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mileage); }
	};
}

using namespace n_car_mileage;

#endif
