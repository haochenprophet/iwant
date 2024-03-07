#ifndef CAR_REGISTER_H
#define CAR_REGISTER_H

#include "../object.h"

namespace n_car_register {
	class Ccar_register :public Object
	{
	public:
		Ccar_register();
		~Ccar_register();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_register); }
	};
}

using namespace n_car_register;

#endif
