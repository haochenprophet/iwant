#ifndef CAR_STOP_H
#define CAR_STOP_H

#include "../object.h"

namespace n_car_stop {
	class Ccar_stop :public Object
	{
	public:
		Ccar_stop();
		~Ccar_stop();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_stop); }
	};
}

using namespace n_car_stop;

#endif
