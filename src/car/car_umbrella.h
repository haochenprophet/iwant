#ifndef CAR_UMBRELLA_H
#define CAR_UMBRELLA_H

#include "../object.h"

namespace n_car_umbrella {
	class Ccar_umbrella :public Object
	{
	public:
		Ccar_umbrella();
		~Ccar_umbrella();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_umbrella); }
	};
}

using namespace n_car_umbrella;

#endif
