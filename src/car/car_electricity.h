#ifndef CAR_ELECTRICITY_H
#define CAR_ELECTRICITY_H

#include "../object.h"

namespace n_car_electricity {
	class Ccar_electricity :public Object
	{
	public:
		Ccar_electricity();
		~Ccar_electricity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_electricity); }
	};
}

using namespace n_car_electricity;

#endif
