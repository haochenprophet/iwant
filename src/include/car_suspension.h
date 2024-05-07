#ifndef CAR_SUSPENSION_H
#define CAR_SUSPENSION_H

#include "../object.h"

namespace n_car_suspension {
	class Ccar_suspension :public Object
	{
	public:
		Ccar_suspension();
		~Ccar_suspension();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_suspension); }
	};
}

using namespace n_car_suspension;

#endif
