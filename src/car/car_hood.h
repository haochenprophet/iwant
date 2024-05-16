#ifndef CAR_HOOD_H
#define CAR_HOOD_H

#include "object/object.h"

namespace n_car_hood {
	class Ccar_hood :public Object
	{
	public:
		Ccar_hood();
		~Ccar_hood();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_hood); }
	};
}

using namespace n_car_hood;

#endif
