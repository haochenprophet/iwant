#ifndef CAR_LOCK_H
#define CAR_LOCK_H

#include "../object.h"

namespace n_car_lock {
	class Ccar_lock :public Object
	{
	public:
		Ccar_lock();
		~Ccar_lock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_lock); }
	};
}

using namespace n_car_lock;

#endif
