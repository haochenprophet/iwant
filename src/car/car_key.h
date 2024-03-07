#ifndef CAR_KEY_H
#define CAR_KEY_H

#include "../object.h"

namespace n_car_key {
	class Ccar_key :public Object
	{
	public:
		Ccar_key();
		~Ccar_key();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_key); }
	};
}

using namespace n_car_key;

#endif
