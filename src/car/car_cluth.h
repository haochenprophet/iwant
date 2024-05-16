#ifndef CAR_CLUTH_H
#define CAR_CLUTH_H

#include "object/object.h"

namespace n_car_cluth {
	class Ccar_cluth :public Object
	{
	public:
		Ccar_cluth();
		~Ccar_cluth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_cluth); }
	};
}

using namespace n_car_cluth;

#endif
