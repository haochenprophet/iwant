#ifndef CAR_WORK_H
#define CAR_WORK_H

#include "../object.h"

namespace n_car_work {
	class Ccar_work :public Object
	{
	public:
		Ccar_work();
		~Ccar_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_work); }
	};
}

using namespace n_car_work;

#endif
