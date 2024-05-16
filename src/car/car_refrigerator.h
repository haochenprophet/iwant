#ifndef CAR_REFRIGERATOR_H
#define CAR_REFRIGERATOR_H

#include "object/object.h"

namespace n_car_refrigerator {
	class Ccar_refrigerator :public Object
	{
	public:
		Ccar_refrigerator();
		~Ccar_refrigerator();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_refrigerator); }
	};
}

using namespace n_car_refrigerator;

#endif
