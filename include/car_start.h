#ifndef CAR_START_H
#define CAR_START_H

#include "../object.h"

namespace n_car_start {
	class Ccar_start :public Object
	{
	public:
		Ccar_start();
		~Ccar_start();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_start); }
	};
}

using namespace n_car_start;

#endif
