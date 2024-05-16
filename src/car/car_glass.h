#ifndef CAR_GLASS_H
#define CAR_GLASS_H

#include "object/object.h"

namespace n_car_glass {
	class Ccar_glass :public Object
	{
	public:
		Ccar_glass();
		~Ccar_glass();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_glass); }
	};
}

using namespace n_car_glass;

#endif
