#ifndef CAR_ARRAY_H
#define CAR_ARRAY_H

#include "object/object.h"

namespace n_car_array {
	class Ccar_array :public Object
	{
	public:
		Ccar_array();
		~Ccar_array();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_array); }
	};
}

using namespace n_car_array;

#endif
