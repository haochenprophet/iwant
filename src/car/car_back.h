#ifndef CAR_BACK_H
#define CAR_BACK_H

#include "object/object.h"

namespace n_car_back {
	class Ccar_back :public Object
	{
	public:
		Ccar_back();
		~Ccar_back();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_back); }
	};
}

using namespace n_car_back;

#endif
