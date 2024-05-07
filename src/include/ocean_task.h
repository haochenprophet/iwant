#ifndef OCEAN_TASK_H
#define OCEAN_TASK_H

#include "../object.h"

namespace n_ocean_task {
	class Cocean_task :public Object
	{
	public:
		Cocean_task();
		~Cocean_task();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_task); }
	};
}

using namespace n_ocean_task;

#endif
