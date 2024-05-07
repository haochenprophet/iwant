#ifndef CAR_INFRARED_H
#define CAR_INFRARED_H

#include "../object.h"

namespace n_car_infrared {
	class Ccar_infrared :public Object
	{
	public:
		Ccar_infrared();
		~Ccar_infrared();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_infrared); }
	};
}

using namespace n_car_infrared;

#endif
