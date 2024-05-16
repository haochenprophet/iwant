#ifndef CAR_TRUNK_H
#define CAR_TRUNK_H

#include "object/object.h"

namespace n_car_trunk {
	class Ccar_trunk :public Object
	{
	public:
		Ccar_trunk();
		~Ccar_trunk();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_trunk); }
	};
}

using namespace n_car_trunk;

#endif
