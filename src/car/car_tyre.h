#ifndef CAR_TYRE_H
#define CAR_TYRE_H

#include "object/object.h"

namespace n_car_tyre {
	class Ccar_tyre :public Object
	{
	public:
		Ccar_tyre();
		~Ccar_tyre();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_tyre); }
	};
}

using namespace n_car_tyre;

#endif
