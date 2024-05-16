#ifndef CAR_AIRBAG_H
#define CAR_AIRBAG_H

#include "object/object.h"

namespace n_car_airbag {
	class Ccar_airbag :public Object
	{
	public:
		Ccar_airbag();
		~Ccar_airbag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_airbag); }
	};
}

using namespace n_car_airbag;

#endif
