#ifndef CAR_CLOCK_H
#define CAR_CLOCK_H

#include "../object.h"

namespace n_car_clock {
	class Ccar_clock :public Object
	{
	public:
		Ccar_clock();
		~Ccar_clock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_clock); }
	};
}

using namespace n_car_clock;

#endif
