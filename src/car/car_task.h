#ifndef CAR_TASK_H
#define CAR_TASK_H

#include "object/object.h"

namespace n_car_task {
	class Ccar_task :public Object
	{
	public:
		Ccar_task();
		~Ccar_task();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_task); }
	};
}

using namespace n_car_task;

#endif
