#ifndef CAR_TIME_H
#define CAR_TIME_H

#include "../object.h"

namespace n_car_time {
	class Ccar_time :public Object
	{
	public:
		Ccar_time();
		~Ccar_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_time); }
	};
}

using namespace n_car_time;

#endif
