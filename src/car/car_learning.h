#ifndef CAR_LEARNING_H
#define CAR_LEARNING_H

#include "object/object.h"

namespace n_car_learning {
	class Ccar_learning :public Object
	{
	public:
		Ccar_learning();
		~Ccar_learning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_learning); }
	};
}

using namespace n_car_learning;

#endif
