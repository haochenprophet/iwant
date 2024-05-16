#ifndef CAR_SSD_H
#define CAR_SSD_H

#include "object/object.h"

namespace n_car_ssd {
	class Ccar_ssd :public Object
	{
	public:
		Ccar_ssd();
		~Ccar_ssd();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_ssd); }
	};
}

using namespace n_car_ssd;

#endif
