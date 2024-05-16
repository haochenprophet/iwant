#ifndef CAR_IMPETUS_H
#define CAR_IMPETUS_H

#include "object/object.h"

namespace n_car_impetus {
	class Ccar_impetus :public Object
	{
	public:
		Ccar_impetus();
		~Ccar_impetus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_impetus); }
	};
}

using namespace n_car_impetus;

#endif
