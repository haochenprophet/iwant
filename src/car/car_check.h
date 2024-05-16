#ifndef CAR_CHECK_H
#define CAR_CHECK_H

#include "object/object.h"

namespace n_car_check {
	class Ccar_check :public Object
	{
	public:
		Ccar_check();
		~Ccar_check();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_check); }
	};
}

using namespace n_car_check;

#endif
