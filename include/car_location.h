#ifndef CAR_LOCATION_H
#define CAR_LOCATION_H

#include "../object.h"

namespace n_car_location {
	class Ccar_location :public Object
	{
	public:
		Ccar_location();
		~Ccar_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_location); }
	};
}

using namespace n_car_location;

#endif
