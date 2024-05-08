#ifndef CAR_PHONE_H
#define CAR_PHONE_H

#include "../object.h"

namespace n_car_phone {
	class Ccar_phone :public Object
	{
	public:
		Ccar_phone();
		~Ccar_phone();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_phone); }
	};
}

using namespace n_car_phone;

#endif
