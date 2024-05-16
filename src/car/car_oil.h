#ifndef CAR_OIL_H
#define CAR_OIL_H

#include "object/object.h"

namespace n_car_oil {
	class Ccar_oil :public Object
	{
	public:
		Ccar_oil();
		~Ccar_oil();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_oil); }
	};
}

using namespace n_car_oil;

#endif
