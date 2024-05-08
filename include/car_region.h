#ifndef CAR_REGION_H
#define CAR_REGION_H

#include "../object.h"

namespace n_car_region {
	class Ccar_region :public Object
	{
	public:
		Ccar_region();
		~Ccar_region();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_region); }
	};
}

using namespace n_car_region;

#endif
